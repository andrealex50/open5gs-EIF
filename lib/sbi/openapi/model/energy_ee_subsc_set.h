/*
 * energy_ee_subsc_set.h
 *
 * Represents the Energy Event Exposure Subscription set. 
 */

#ifndef _OpenAPI_energy_ee_subsc_set_H_
#define _OpenAPI_energy_ee_subsc_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "energy_ee_event.h"
#include "energy_info.h"
#include "snssai.h"
#include "time_window.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_ee_subsc_set_s OpenAPI_energy_ee_subsc_set_t;
typedef struct OpenAPI_energy_ee_subsc_set_s {
    OpenAPI_energy_ee_event_e event;
    char *subsc_set_id;
    char *supi;
    char *gpsi;
    char *dnn;
    struct OpenAPI_snssai_s *snssai;
    char *app_id;
    OpenAPI_list_t *flow_descs;
    bool is_rep_period;
    int rep_period;
    struct OpenAPI_time_window_s *rep_time_win;
    struct OpenAPI_energy_info_s *enrg_rep_thres;
    bool is_rep_period_thres;
    int rep_period_thres;
    bool is_max_report_nbr;
    int max_report_nbr;
} OpenAPI_energy_ee_subsc_set_t;

OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_create(
    OpenAPI_energy_ee_event_e event,
    char *subsc_set_id,
    char *supi,
    char *gpsi,
    char *dnn,
    OpenAPI_snssai_t *snssai,
    char *app_id,
    OpenAPI_list_t *flow_descs,
    bool is_rep_period,
    int rep_period,
    OpenAPI_time_window_t *rep_time_win,
    OpenAPI_energy_info_t *enrg_rep_thres,
    bool is_rep_period_thres,
    int rep_period_thres,
    bool is_max_report_nbr,
    int max_report_nbr
);
void OpenAPI_energy_ee_subsc_set_free(OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set);
OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_parseFromJSON(cJSON *energy_ee_subsc_setJSON);
cJSON *OpenAPI_energy_ee_subsc_set_convertToJSON(OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set);
OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_copy(OpenAPI_energy_ee_subsc_set_t *dst, OpenAPI_energy_ee_subsc_set_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_subsc_set_H_ */

