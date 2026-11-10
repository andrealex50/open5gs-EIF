#include "ogs-core.h"
#include "core/abts.h"
#include "../../src/eif/energy-report.h"
#include "openapi/model/energy_ee_notif.h"
#include "openapi/model/energy_ee_subsc_patch.h"

static OpenAPI_energy_ee_subsc_set_t *parse_set(const char *content)
{
    cJSON *json = cJSON_Parse(content);
    OpenAPI_energy_ee_subsc_set_t *set =
        OpenAPI_energy_ee_subsc_set_parseFromJSON(json);
    cJSON_Delete(json);
    return set;
}

static OpenAPI_energy_ee_subsc_t *subscription(
        OpenAPI_energy_ee_subsc_set_t *set, const char *features)
{
    OpenAPI_list_t *sets = OpenAPI_list_create();
    OpenAPI_list_add(sets, OpenAPI_map_create(ogs_strdup("set1"), set));
    return OpenAPI_energy_ee_subsc_create(ogs_strdup("http://127.0.0.1/callback"),
            sets, features ? ogs_strdup(features) : NULL);
}

static const char *legacy_set =
    "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"supi\":\"imsi-001010000000001\"}";
static const char *rel20_set =
    "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"supi\":\"imsi-001010000000001\","
    "\"enePerBitInd\":true,\"energyCatInd\":true,\"appRankingInd\":true,"
    "\"appIds\":[\"video\",\"audio\"]}";
static const char *collector_report =
    "{\"energyInfo\":{\"energy\":12},\"enePerBitInfo\":{\"enePerBit\":0.002},"
    "\"energyCat\":{\"enCat\":\"low\"},"
    "\"appRankingInfo\":{\"rankedAppIds\":[\"video\",\"audio\"]}}";
static const char *end_time = "2026-11-05T12:00:00Z";

static void legacy_report(abts_case *tc, void *data)
{
    OpenAPI_energy_ee_subsc_t *sub = subscription(parse_set(legacy_set), NULL);
    OpenAPI_energy_ee_subsc_set_t *set = ((OpenAPI_map_t *)sub->events_subsc_sets->first->data)->value;
    OpenAPI_energy_ee_report_t *report = NULL;
    char *error = NULL;

    ABTS_TRUE(tc, eif_energy_negotiate_features(sub, false, &error));
    ABTS_PTR_EQUAL(tc, NULL, sub->supp_feat);
    report = eif_energy_report_parse(collector_report, set, end_time);
    ABTS_PTR_NOTNULL(tc, report);
    ABTS_TRUE(tc, report->energy_info->energy_consumption == 12);
    ABTS_STR_EQUAL(tc, end_time, report->energy_info->energy_report_time_stamp);
    ABTS_PTR_EQUAL(tc, NULL, report->ene_per_bit_info);
    ABTS_PTR_EQUAL(tc, NULL, report->energy_cat);
    ABTS_PTR_EQUAL(tc, NULL, report->app_ranking_info);
    OpenAPI_energy_ee_report_free(report);
    OpenAPI_energy_ee_subsc_free(sub);
}

static void rel20_roundtrip(abts_case *tc, void *data)
{
    OpenAPI_energy_ee_subsc_t *sub = subscription(parse_set(rel20_set), "3");
    OpenAPI_energy_ee_subsc_t *copy = NULL;
    OpenAPI_energy_ee_subsc_set_t *set = NULL;
    OpenAPI_energy_ee_report_t *report = NULL, *report_copy = NULL;
    char *error = NULL;

    ABTS_TRUE(tc, eif_energy_negotiate_features(sub, true, &error));
    ABTS_STR_EQUAL(tc, "1", sub->supp_feat);
    copy = OpenAPI_energy_ee_subsc_copy(NULL, sub);
    ABTS_PTR_NOTNULL(tc, copy);
    set = ((OpenAPI_map_t *)copy->events_subsc_sets->first->data)->value;
    ABTS_TRUE(tc, set->ene_per_bit_ind && set->energy_cat_ind && set->app_ranking_ind);
    ABTS_INT_EQUAL(tc, 2, set->app_ids->count);
    report = eif_energy_report_parse(collector_report, set, end_time);
    ABTS_PTR_NOTNULL(tc, report);
    report_copy = OpenAPI_energy_ee_report_copy(NULL, report);
    ABTS_PTR_NOTNULL(tc, report_copy);
    ABTS_TRUE(tc, report_copy->ene_per_bit_info->ene_per_bit == 0.002);
    ABTS_STR_EQUAL(tc, "low", report_copy->energy_cat->en_cat);
    ABTS_STR_EQUAL(tc, "video", report_copy->app_ranking_info->ranked_app_ids->first->data);
    ABTS_STR_EQUAL(tc, "audio", report_copy->app_ranking_info->ranked_app_ids->last->data);
    OpenAPI_energy_ee_report_free(report_copy);
    OpenAPI_energy_ee_report_free(report);
    OpenAPI_energy_ee_subsc_free(copy);
    OpenAPI_energy_ee_subsc_free(sub);
}

static void feature_negotiation(abts_case *tc, void *data)
{
    const char *features[] = {NULL, "0", "2", "x", "10000000000000000"};
    unsigned int i;

    for (i = 0; i < sizeof(features) / sizeof(features[0]); i++) {
        OpenAPI_energy_ee_subsc_t *sub = subscription(parse_set(rel20_set), features[i]);
        char *error = NULL;
        ABTS_TRUE(tc, !eif_energy_negotiate_features(sub, true, &error));
        ABTS_PTR_NOTNULL(tc, error);
        ogs_free(error);
        OpenAPI_energy_ee_subsc_free(sub);
    }
    OpenAPI_energy_ee_subsc_t *sub = subscription(parse_set(legacy_set), "2");
    char *error = NULL;
    ABTS_TRUE(tc, eif_energy_negotiate_features(sub, false, &error));
    ABTS_STR_EQUAL(tc, "0", sub->supp_feat);
    OpenAPI_energy_ee_subsc_free(sub);
}

static void ranking_scope(abts_case *tc, void *data)
{
    OpenAPI_energy_ee_subsc_t *sub = subscription(parse_set(rel20_set), "1");
    OpenAPI_energy_ee_subsc_set_t *set = ((OpenAPI_map_t *)sub->events_subsc_sets->first->data)->value;
    char *error = NULL;

    ABTS_TRUE(tc, !eif_energy_negotiate_features(sub, false, &error));
    ogs_free(error);
    error = NULL;
    set->event = OpenAPI_energy_ee_event_SERVICE_FLOW_ENERGY;
    ABTS_TRUE(tc, !eif_energy_negotiate_features(sub, true, &error));
    ogs_free(error);
    error = NULL;
    set->event = OpenAPI_energy_ee_event_UE_ENERGY;
    set->is_app_ranking_ind = false;
    set->app_ranking_ind = false;
    ABTS_TRUE(tc, !eif_energy_negotiate_features(sub, true, &error));
    ogs_free(error);
    OpenAPI_energy_ee_subsc_free(sub);
}

static void invalid_attributes(abts_case *tc, void *data)
{
    const char *invalid[] = {
        "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"enePerBitInd\":false}",
        "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"energyCatInd\":1}",
        "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"appRankingInd\":null}",
        "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"appIds\":[]}",
        "{\"event\":\"UE_ENERGY\",\"subscSetId\":\"set1\",\"appIds\":[\"video\",7]}"
    };
    unsigned int i;

    for (i = 0; i < sizeof(invalid) / sizeof(invalid[0]); i++)
        ABTS_PTR_EQUAL(tc, NULL, parse_set(invalid[i]));
}

static void collector_validation(abts_case *tc, void *data)
{
    OpenAPI_energy_ee_subsc_set_t *set = parse_set(rel20_set);
    const char *invalid[] = {
        "{}",
        "{\"energyInfo\":{\"energy\":-1}}",
        "{\"energyInfo\":{\"energy\":1e999}}",
        "{\"energyInfo\":{\"energy\":12}}",
        "{\"energyInfo\":{\"energy\":12},\"enePerBitInfo\":{\"enePerBit\":-1}}",
        ("{\"energyInfo\":{\"energy\":12},\"enePerBitInfo\":{\"enePerBit\":0.002},"
         "\"energyCat\":{\"enCat\":\"low\"},\"appRankingInfo\":{\"rankedAppIds\":[\"other\"]}}")
    };
    unsigned int i;

    for (i = 0; i < sizeof(invalid) / sizeof(invalid[0]); i++)
        ABTS_PTR_EQUAL(tc, NULL, eif_energy_report_parse(invalid[i], set, end_time));
    OpenAPI_energy_ee_subsc_set_free(set);
    set = parse_set(legacy_set);
    OpenAPI_energy_ee_report_t *report =
        eif_energy_report_parse("{\"energyInfo\":{\"energy\":0}}", set, end_time);
    ABTS_PTR_NOTNULL(tc, report);
    ABTS_TRUE(tc, report->energy_info->energy_consumption == 0);
    OpenAPI_energy_ee_report_free(report);
    OpenAPI_energy_ee_subsc_set_free(set);
}

static void patch_and_notification(abts_case *tc, void *data)
{
    cJSON *json = cJSON_Parse(
        "{\"eventsSubscSets\":{\"set1\":{\"event\":\"UE_ENERGY\","
        "\"subscSetId\":\"set1\",\"supi\":\"imsi-001010000000001\","
        "\"enePerBitInd\":true}}}");
    OpenAPI_energy_ee_subsc_patch_t *patch =
        OpenAPI_energy_ee_subsc_patch_parseFromJSON(json);
    OpenAPI_energy_ee_subsc_patch_t *copy = NULL;
    OpenAPI_energy_ee_notif_t notif = {0};
    OpenAPI_energy_ee_notif_t *notif_copy = NULL;
    OpenAPI_energy_ee_subsc_set_t *set = parse_set(rel20_set);

    ABTS_PTR_NOTNULL(tc, patch);
    cJSON_Delete(json);
    copy = OpenAPI_energy_ee_subsc_patch_copy(NULL, patch);
    ABTS_PTR_NOTNULL(tc, copy);
    OpenAPI_energy_ee_subsc_set_t *patched =
        ((OpenAPI_map_t *)copy->events_subsc_sets->first->data)->value;
    ABTS_TRUE(tc, patched->is_ene_per_bit_ind);
    notif.sub_id = "42";
    notif.reports = OpenAPI_list_create();
    OpenAPI_list_add(notif.reports, eif_energy_report_parse(collector_report, set, end_time));
    notif_copy = OpenAPI_energy_ee_notif_copy(NULL, &notif);
    ABTS_PTR_NOTNULL(tc, notif_copy);
    OpenAPI_energy_ee_report_t *report = notif_copy->reports->first->data;
    ABTS_STR_EQUAL(tc, "video", report->app_ranking_info->ranked_app_ids->first->data);
    OpenAPI_energy_ee_notif_free(notif_copy);
    OpenAPI_energy_ee_report_free(notif.reports->first->data);
    OpenAPI_list_free(notif.reports);
    OpenAPI_energy_ee_subsc_set_free(set);
    OpenAPI_energy_ee_subsc_patch_free(copy);
    OpenAPI_energy_ee_subsc_patch_free(patch);
}

abts_suite *test_eif_energy(abts_suite *suite)
{
    suite = ADD_SUITE(suite)
    abts_run_test(suite, legacy_report, NULL);
    abts_run_test(suite, rel20_roundtrip, NULL);
    abts_run_test(suite, feature_negotiation, NULL);
    abts_run_test(suite, ranking_scope, NULL);
    abts_run_test(suite, invalid_attributes, NULL);
    abts_run_test(suite, collector_validation, NULL);
    abts_run_test(suite, patch_and_notification, NULL);
    return suite;
}
