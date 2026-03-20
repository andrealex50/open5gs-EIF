#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/uc_purpose.h"
#include "../model/uc_subscription_data.h"

// Enum  for UserConsentSubscriptionDataRetrievalAPI_getUcData
typedef enum  { nudm_sdm_getUcData__NULL = 0, nudm_sdm_getUcData__ANALYTICS, nudm_sdm_getUcData__MODEL_TRAINING, nudm_sdm_getUcData__NW_CAP_EXPOSURE, nudm_sdm_getUcData__EDGEAPP_UE_LOCATION } nudm_sdm_getUcData_uc-purpose_e;


// retrieve a UE's User Consent Subscription Data
//
uc_subscription_data_t*
UserConsentSubscriptionDataRetrievalAPI_getUcData(apiClient_t *apiClient, char * supi , char * supported_features , uc_purpose_e uc_purpose , char * If_None_Match , char * If_Modified_Since );


