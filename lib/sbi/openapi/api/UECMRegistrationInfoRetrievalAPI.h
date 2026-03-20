#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/registration_data_set_name.h"
#include "../model/registration_data_sets.h"
#include "../model/set.h"
#include "../model/snssai.h"

// Enum REGISTRATIONDATASETNAMES for UECMRegistrationInfoRetrievalAPI_getRegistrations
typedef enum  { nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_NULL = 0, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_AMF_3GPP, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_AMF_NON_3GPP, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_SMF_PDU_SESSIONS, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_SMSF_3GPP, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_SMSF_NON_3GPP, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_IP_SM_GW, nudm_uecm_getRegistrations_REGISTRATIONDATASETNAMES_NWDAF } nudm_uecm_getRegistrations_registration-dataset-names_e;


// retrieve UE registration data sets
//
registration_data_sets_t*
UECMRegistrationInfoRetrievalAPI_getRegistrations(apiClient_t *apiClient, char * ueId , set_t * registration_dataset_names , char * supported_features , snssai_t * single_nssai , char * dnn );


