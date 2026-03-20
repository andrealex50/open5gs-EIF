#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/data_set_name.h"
#include "../model/plmn_id_nid.h"
#include "../model/problem_details.h"
#include "../model/set.h"
#include "../model/subscription_data_sets.h"

// Enum DATASETNAMES for RetrievalOfMultipleDataSetsAPI_getDataSets
typedef enum  { nudm_sdm_getDataSets_DATASETNAMES_NULL = 0, nudm_sdm_getDataSets_DATASETNAMES_AM, nudm_sdm_getDataSets_DATASETNAMES_SMF_SEL, nudm_sdm_getDataSets_DATASETNAMES_UEC_SMF, nudm_sdm_getDataSets_DATASETNAMES_UEC_SMSF, nudm_sdm_getDataSets_DATASETNAMES_SMS_SUB, nudm_sdm_getDataSets_DATASETNAMES_SM, nudm_sdm_getDataSets_DATASETNAMES_TRACE, nudm_sdm_getDataSets_DATASETNAMES_SMS_MNG, nudm_sdm_getDataSets_DATASETNAMES_LCS_PRIVACY, nudm_sdm_getDataSets_DATASETNAMES_LCS_MO, nudm_sdm_getDataSets_DATASETNAMES_UEC_AMF, nudm_sdm_getDataSets_DATASETNAMES_V2X, nudm_sdm_getDataSets_DATASETNAMES_LCS_BCA, nudm_sdm_getDataSets_DATASETNAMES_PROSE, nudm_sdm_getDataSets_DATASETNAMES_UC, nudm_sdm_getDataSets_DATASETNAMES_MBS } nudm_sdm_getDataSets_dataset-names_e;


// retrieve multiple data sets
//
subscription_data_sets_t*
RetrievalOfMultipleDataSetsAPI_getDataSets(apiClient_t *apiClient, char * supi , set_t * dataset_names , plmn_id_nid_t * plmn_id , int disaster_roaming_ind , char * supported_features , char * If_None_Match , char * If_Modified_Since );


