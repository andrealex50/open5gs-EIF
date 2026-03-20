#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/uc_purpose.h"
#include "../model/uc_subscription_data.h"

// Enum  for UserConsentDataAPI_queryUserConsentData
typedef enum  { nudr_datarepository_api_openapi_file_queryUserConsentData__NULL = 0, nudr_datarepository_api_openapi_file_queryUserConsentData__ANALYTICS, nudr_datarepository_api_openapi_file_queryUserConsentData__MODEL_TRAINING, nudr_datarepository_api_openapi_file_queryUserConsentData__NW_CAP_EXPOSURE, nudr_datarepository_api_openapi_file_queryUserConsentData__EDGEAPP_UE_LOCATION } nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e;


// Retrieves the subscribed User Consent Data of a UE
//
uc_subscription_data_t*
UserConsentDataAPI_queryUserConsentData(apiClient_t *apiClient, char * ueId , char * supported_features , uc_purpose_e ucPurpose , char * If_None_Match , char * If_Modified_Since );


