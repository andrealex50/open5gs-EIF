#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ip_sm_gw_registration.h"
#include "../model/patch_item.h"
#include "../model/problem_details.h"


// Create the IP-SM-GW context data of a UE
//
void
IPSMGWRegistrationDocumentAPI_createIpSmGwContext(apiClient_t *apiClient, char * ueId , ip_sm_gw_registration_t * ip_sm_gw_registration );


// To remove the IP-SM-GW context data of a UE
//
void
IPSMGWRegistrationDocumentAPI_deleteIpSmGwContext(apiClient_t *apiClient, char * ueId );


// Modify the IP-SM-GW context data of a UE
//
void
IPSMGWRegistrationDocumentAPI_modifyIpSmGwContext(apiClient_t *apiClient, char * ueId , list_t * patch_item );


// Retrieves the IP-SM-GW context data of a UE
//
ip_sm_gw_registration_t*
IPSMGWRegistrationDocumentAPI_queryIpSmGwContext(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


