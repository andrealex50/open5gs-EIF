#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/context_data_set_name.h"
#include "../model/context_data_sets.h"
#include "../model/set.h"

// Enum CONTEXTDATASETNAMES for ContextDataDocumentAPI_queryContextData
typedef enum  { nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_NULL = 0, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_AMF_3GPP, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_AMF_NON_3GPP, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_SDM_SUBSCRIPTIONS, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_EE_SUBSCRIPTIONS, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_SMSF_3GPP, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_SMSF_NON_3GPP, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_SUBS_TO_NOTIFY, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_SMF_REG, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_IP_SM_GW, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_ROAMING_INFO, nudr_datarepository_api_openapi_file_queryContextData_CONTEXTDATASETNAMES_PEI_INFO } nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e;


// Retrieve multiple context data sets of a UE
//
context_data_sets_t*
ContextDataDocumentAPI_queryContextData(apiClient_t *apiClient, char * ueId , set_t * context_dataset_names );


