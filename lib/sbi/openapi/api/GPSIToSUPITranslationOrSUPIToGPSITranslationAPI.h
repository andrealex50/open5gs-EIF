#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/app_port_id.h"
#include "../model/gpsi_type.h"
#include "../model/id_translation_result.h"
#include "../model/problem_details.h"

// Enum  for GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi
typedef enum  { nudm_sdm_getSupiOrGpsi__NULL = 0, nudm_sdm_getSupiOrGpsi__MSISDN, nudm_sdm_getSupiOrGpsi__EXT_ID, nudm_sdm_getSupiOrGpsi__EXT_GROUP_ID } nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e;


// retrieve a UE's SUPI or GPSI
//
id_translation_result_t*
GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi(apiClient_t *apiClient, char * ueId , char * supported_features , char * af_id , app_port_id_t * app_port_id , char * af_service_id , char * mtc_provider_info , gpsi_type_e requested_gpsi_type , char * If_None_Match , char * If_Modified_Since );


