/* TS 29.566 Release 20. */
#ifndef _OpenAPI_app_ranking_info_H_
#define _OpenAPI_app_ranking_info_H_

#include "../include/list.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_app_ranking_info_s {
    OpenAPI_list_t *ranked_app_ids;
} OpenAPI_app_ranking_info_t;

OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_create(OpenAPI_list_t *ranked_app_ids);
void OpenAPI_app_ranking_info_free(OpenAPI_app_ranking_info_t *value);
OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_parseFromJSON(cJSON *json);
cJSON *OpenAPI_app_ranking_info_convertToJSON(OpenAPI_app_ranking_info_t *value);
OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_copy(
        OpenAPI_app_ranking_info_t *dst, OpenAPI_app_ranking_info_t *src);

#ifdef __cplusplus
}
#endif

#endif
