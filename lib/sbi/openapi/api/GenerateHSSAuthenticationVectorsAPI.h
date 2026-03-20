#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/hss_auth_type_in_uri.h"
#include "../model/hss_authentication_info_request.h"
#include "../model/hss_authentication_info_result.h"
#include "../model/problem_details.h"

// Enum  for GenerateHSSAuthenticationVectorsAPI_generateAv
typedef enum  { nudm_ueau_generateAv__NULL = 0, nudm_ueau_generateAv__eps_aka, nudm_ueau_generateAv__eap_aka, nudm_ueau_generateAv__eap_aka_prime, nudm_ueau_generateAv__ims_aka, nudm_ueau_generateAv__gba_aka } nudm_ueau_generateAv_hssAuthType_e;


// Generate authentication data for the UE in EPS or IMS domain
//
hss_authentication_info_result_t*
GenerateHSSAuthenticationVectorsAPI_generateAv(apiClient_t *apiClient, char * supi , hss_auth_type_in_uri_e hssAuthType , hss_authentication_info_request_t * hss_authentication_info_request );


