
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_subsc_patch.h"

OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_create(
    char *notif_uri,
    OpenAPI_list_t* events_subsc_sets
)
{
    OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch_local_var = ogs_malloc(sizeof(OpenAPI_energy_ee_subsc_patch_t));
    ogs_assert(energy_ee_subsc_patch_local_var);

    energy_ee_subsc_patch_local_var->notif_uri = notif_uri;
    energy_ee_subsc_patch_local_var->events_subsc_sets = events_subsc_sets;

    return energy_ee_subsc_patch_local_var;
}

void OpenAPI_energy_ee_subsc_patch_free(OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == energy_ee_subsc_patch) {
        return;
    }
    if (energy_ee_subsc_patch->notif_uri) {
        ogs_free(energy_ee_subsc_patch->notif_uri);
        energy_ee_subsc_patch->notif_uri = NULL;
    }
    if (energy_ee_subsc_patch->events_subsc_sets) {
        OpenAPI_list_for_each(energy_ee_subsc_patch->events_subsc_sets, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_energy_ee_subsc_set_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(energy_ee_subsc_patch->events_subsc_sets);
        energy_ee_subsc_patch->events_subsc_sets = NULL;
    }
    ogs_free(energy_ee_subsc_patch);
}

cJSON *OpenAPI_energy_ee_subsc_patch_convertToJSON(OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (energy_ee_subsc_patch == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [EnergyEeSubscPatch]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (energy_ee_subsc_patch->notif_uri) {
    if (cJSON_AddStringToObject(item, "notifUri", energy_ee_subsc_patch->notif_uri) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [notif_uri]");
        goto end;
    }
    }

    if (energy_ee_subsc_patch->events_subsc_sets) {
    cJSON *events_subsc_sets = cJSON_AddObjectToObject(item, "eventsSubscSets");
    if (events_subsc_sets == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [events_subsc_sets]");
        goto end;
    }
    cJSON *localMapObject = events_subsc_sets;
    if (energy_ee_subsc_patch->events_subsc_sets) {
        OpenAPI_list_for_each(energy_ee_subsc_patch->events_subsc_sets, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*)node->data;
            if (localKeyValue == NULL) {
                ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [events_subsc_sets]");
                goto end;
            }
            if (localKeyValue->key == NULL) {
                ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [events_subsc_sets]");
                goto end;
            }
            cJSON *itemLocal = localKeyValue->value ?
                OpenAPI_energy_ee_subsc_set_convertToJSON(localKeyValue->value) :
                cJSON_CreateNull();
            if (itemLocal == NULL) {
                ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed [inner]");
                goto end;
            }
            cJSON_AddItemToObject(localMapObject, localKeyValue->key, itemLocal);
        }
    }
    }

end:
    return item;
}

OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_parseFromJSON(cJSON *energy_ee_subsc_patchJSON)
{
    OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *notif_uri = NULL;
    cJSON *events_subsc_sets = NULL;
    OpenAPI_list_t *events_subsc_setsList = NULL;
    notif_uri = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_patchJSON, "notifUri");
    if (notif_uri) {
    if (!cJSON_IsString(notif_uri) && !cJSON_IsNull(notif_uri)) {
        ogs_error("OpenAPI_energy_ee_subsc_patch_parseFromJSON() failed [notif_uri]");
        goto end;
    }
    }

    events_subsc_sets = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_patchJSON, "eventsSubscSets");
    if (events_subsc_sets) {
        cJSON *events_subsc_sets_local_map = NULL;
        if (!cJSON_IsObject(events_subsc_sets) && !cJSON_IsNull(events_subsc_sets)) {
            ogs_error("OpenAPI_energy_ee_subsc_patch_parseFromJSON() failed [events_subsc_sets]");
            goto end;
        }
        if (cJSON_IsObject(events_subsc_sets)) {
            events_subsc_setsList = OpenAPI_list_create();
            OpenAPI_map_t *localMapKeyPair = NULL;
            cJSON_ArrayForEach(events_subsc_sets_local_map, events_subsc_sets) {
                cJSON *localMapObject = events_subsc_sets_local_map;
                if (cJSON_IsObject(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(
                        ogs_strdup(localMapObject->string), OpenAPI_energy_ee_subsc_set_parseFromJSON(localMapObject));
                } else if (cJSON_IsNull(localMapObject)) {
                    localMapKeyPair = OpenAPI_map_create(ogs_strdup(localMapObject->string), NULL);
                } else {
                    ogs_error("OpenAPI_energy_ee_subsc_patch_parseFromJSON() failed [inner]");
                    goto end;
                }
                OpenAPI_list_add(events_subsc_setsList, localMapKeyPair);
            }
        }
    }

    energy_ee_subsc_patch_local_var = OpenAPI_energy_ee_subsc_patch_create (
        notif_uri && !cJSON_IsNull(notif_uri) ? ogs_strdup(notif_uri->valuestring) : NULL,
        events_subsc_sets ? events_subsc_setsList : NULL
    );

    return energy_ee_subsc_patch_local_var;
end:
    if (events_subsc_setsList) {
        OpenAPI_list_for_each(events_subsc_setsList, node) {
            OpenAPI_map_t *localKeyValue = (OpenAPI_map_t*) node->data;
            ogs_free(localKeyValue->key);
            OpenAPI_energy_ee_subsc_set_free(localKeyValue->value);
            OpenAPI_map_free(localKeyValue);
        }
        OpenAPI_list_free(events_subsc_setsList);
        events_subsc_setsList = NULL;
    }
    return NULL;
}

OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_copy(OpenAPI_energy_ee_subsc_patch_t *dst, OpenAPI_energy_ee_subsc_patch_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_energy_ee_subsc_patch_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_energy_ee_subsc_patch_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_energy_ee_subsc_patch_free(dst);
    dst = OpenAPI_energy_ee_subsc_patch_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

