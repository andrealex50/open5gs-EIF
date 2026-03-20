#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/redirect_response.h"
#include "../model/stored_search_result.h"


stored_search_result_t*
StoredSearchDocumentAPI_retrieveStoredSearch(apiClient_t *apiClient, char * searchId , char * Accept_Encoding );


