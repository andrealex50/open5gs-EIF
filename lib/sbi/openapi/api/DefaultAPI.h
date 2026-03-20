#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authentication_info.h"
#include "../model/confirmation_data.h"
#include "../model/confirmation_data_response.h"
#include "../model/deregistration_info.h"
#include "../model/eap_auth_method_200_response.h"
#include "../model/eap_session.h"
#include "../model/pro_se_authentication_ctx.h"
#include "../model/pro_se_authentication_info.h"
#include "../model/pro_se_authentication_result.h"
#include "../model/pro_se_eap_session.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/rg_auth_ctx.h"
#include "../model/rg_authentication_info.h"
#include "../model/ue_authentication_ctx.h"


eap_session_t*
DefaultAPI_eapAuthMethod(apiClient_t *apiClient, char * authCtxId , eap_session_t * eap_session );


pro_se_eap_session_t*
DefaultAPI_proseAuth(apiClient_t *apiClient, char * authCtxId , pro_se_eap_session_t * pro_se_eap_session );


pro_se_authentication_result_t*
DefaultAPI_proseAuthenticationsPost(apiClient_t *apiClient, pro_se_authentication_info_t * pro_se_authentication_info );


rg_auth_ctx_t*
DefaultAPI_rgAuthenticationsPost(apiClient_t *apiClient, rg_authentication_info_t * rg_authentication_info );


confirmation_data_response_t*
DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut(apiClient_t *apiClient, char * authCtxId , confirmation_data_t * confirmation_data );


void
DefaultAPI_ueAuthenticationsDeregisterPost(apiClient_t *apiClient, deregistration_info_t * deregistration_info );


ue_authentication_ctx_t*
DefaultAPI_ueAuthenticationsPost(apiClient_t *apiClient, authentication_info_t * authentication_info );


