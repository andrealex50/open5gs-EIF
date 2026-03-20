#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nf_profile.h"
#include "../model/patch_item.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Deregisters a given NF Instance
//
void
NFInstanceIDDocumentAPI_deregisterNFInstance(apiClient_t *apiClient, char * nfInstanceID );


// Read the profile of a given NF Instance
//
nf_profile_t*
NFInstanceIDDocumentAPI_getNFInstance(apiClient_t *apiClient, char * nfInstanceID , char * requester_features );


// Register a new NF Instance
//
nf_profile_t*
NFInstanceIDDocumentAPI_registerNFInstance(apiClient_t *apiClient, char * nfInstanceID , nf_profile_t * nf_profile , char * Content_Encoding , char * Accept_Encoding );


// Update NF Instance profile
//
nf_profile_t*
NFInstanceIDDocumentAPI_updateNFInstance(apiClient_t *apiClient, char * nfInstanceID , list_t * patch_item , char * Content_Encoding , char * Accept_Encoding , char * If_Match );


