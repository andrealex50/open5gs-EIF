#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/iptv_config_data.h"
#include "../model/iptv_config_data_patch.h"
#include "../model/problem_details.h"


// Create or update an individual IPTV configuration resource
//
iptv_config_data_t*
IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId , iptv_config_data_t * iptv_config_data );


// Delete an individual IPTV configuration resource
//
void
IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId );


// Partial update an individual IPTV configuration resource
//
iptv_config_data_t*
IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId , iptv_config_data_patch_t * iptv_config_data_patch );


