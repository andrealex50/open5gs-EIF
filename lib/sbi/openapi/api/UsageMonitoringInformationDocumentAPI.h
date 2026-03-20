#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/usage_mon_data.h"


// Create a usage monitoring resource
//
usage_mon_data_t*
UsageMonitoringInformationDocumentAPI_createUsageMonitoringResource(apiClient_t *apiClient, char * ueId , char * usageMonId , usage_mon_data_t * usage_mon_data );


// Delete a usage monitoring resource
//
void
UsageMonitoringInformationDocumentAPI_deleteUsageMonitoringInformation(apiClient_t *apiClient, char * ueId , char * usageMonId );


// Retrieve a usage monitoring resource
//
usage_mon_data_t*
UsageMonitoringInformationDocumentAPI_readUsageMonitoringInformation(apiClient_t *apiClient, char * ueId , char * usageMonId , char * supp_feat );


