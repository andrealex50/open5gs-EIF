#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DefaultAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


eap_session_t*
DefaultAPI_eapAuthMethod(apiClient_t *apiClient, char * authCtxId , eap_session_t * eap_session )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/ue-authentications/{authCtxId}/eap-session")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/ue-authentications/{authCtxId}/eap-session");


    // Path Params
    long sizeOfPathParams_authCtxId = strlen(authCtxId)+3 + strlen("{ authCtxId }");
    if(authCtxId == NULL) {
        goto end;
    }
    char* localVarToReplace_authCtxId = malloc(sizeOfPathParams_authCtxId);
    sprintf(localVarToReplace_authCtxId, "{%s}", "authCtxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_authCtxId, authCtxId);



    // Body Param
    cJSON *localVarSingleItemJSON_eap_session = NULL;
    if (eap_session != NULL)
    {
        //string
        localVarSingleItemJSON_eap_session = eap_session_convertToJSON(eap_session);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_eap_session);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/3gppHal+json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Use to handle or close the EAP session");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    eap_session_t *elementToReturn = eap_session_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_authCtxId);
    if (localVarSingleItemJSON_eap_session) {
        cJSON_Delete(localVarSingleItemJSON_eap_session);
        localVarSingleItemJSON_eap_session = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

pro_se_eap_session_t*
DefaultAPI_proseAuth(apiClient_t *apiClient, char * authCtxId , pro_se_eap_session_t * pro_se_eap_session )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/prose-authentications/{authCtxId}/prose-auth")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/prose-authentications/{authCtxId}/prose-auth");


    // Path Params
    long sizeOfPathParams_authCtxId = strlen(authCtxId)+3 + strlen("{ authCtxId }");
    if(authCtxId == NULL) {
        goto end;
    }
    char* localVarToReplace_authCtxId = malloc(sizeOfPathParams_authCtxId);
    sprintf(localVarToReplace_authCtxId, "{%s}", "authCtxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_authCtxId, authCtxId);



    // Body Param
    cJSON *localVarSingleItemJSON_pro_se_eap_session = NULL;
    if (pro_se_eap_session != NULL)
    {
        //string
        localVarSingleItemJSON_pro_se_eap_session = pro_se_eap_session_convertToJSON(pro_se_eap_session);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pro_se_eap_session);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/3gppHal+json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Use to handle or close the EAP session for 5G ProSe Remote UE");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pro_se_eap_session_t *elementToReturn = pro_se_eap_session_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_authCtxId);
    if (localVarSingleItemJSON_pro_se_eap_session) {
        cJSON_Delete(localVarSingleItemJSON_pro_se_eap_session);
        localVarSingleItemJSON_pro_se_eap_session = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

pro_se_authentication_result_t*
DefaultAPI_proseAuthenticationsPost(apiClient_t *apiClient, pro_se_authentication_info_t * pro_se_authentication_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/prose-authentications")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/prose-authentications");




    // Body Param
    cJSON *localVarSingleItemJSON_pro_se_authentication_info = NULL;
    if (pro_se_authentication_info != NULL)
    {
        //string
        localVarSingleItemJSON_pro_se_authentication_info = pro_se_authentication_info_convertToJSON(pro_se_authentication_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pro_se_authentication_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/3gppHal+json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful authentication with CP-PRUK ID");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","ProSeAuthenticationCtx");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pro_se_authentication_result_t *elementToReturn = pro_se_authentication_result_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_pro_se_authentication_info) {
        cJSON_Delete(localVarSingleItemJSON_pro_se_authentication_info);
        localVarSingleItemJSON_pro_se_authentication_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

rg_auth_ctx_t*
DefaultAPI_rgAuthenticationsPost(apiClient_t *apiClient, rg_authentication_info_t * rg_authentication_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/rg-authentications")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/rg-authentications");




    // Body Param
    cJSON *localVarSingleItemJSON_rg_authentication_info = NULL;
    if (rg_authentication_info != NULL)
    {
        //string
        localVarSingleItemJSON_rg_authentication_info = rg_authentication_info_convertToJSON(rg_authentication_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_rg_authentication_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","RgAuthCtx");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","The UE is not allowed to be authenticated");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request from the AMF");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","User does not exist in the HPLMN");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    rg_auth_ctx_t *elementToReturn = rg_auth_ctx_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_rg_authentication_info) {
        cJSON_Delete(localVarSingleItemJSON_rg_authentication_info);
        localVarSingleItemJSON_rg_authentication_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

confirmation_data_response_t*
DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut(apiClient_t *apiClient, char * authCtxId , confirmation_data_t * confirmation_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/ue-authentications/{authCtxId}/5g-aka-confirmation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/ue-authentications/{authCtxId}/5g-aka-confirmation");


    // Path Params
    long sizeOfPathParams_authCtxId = strlen(authCtxId)+3 + strlen("{ authCtxId }");
    if(authCtxId == NULL) {
        goto end;
    }
    char* localVarToReplace_authCtxId = malloc(sizeOfPathParams_authCtxId);
    sprintf(localVarToReplace_authCtxId, "{%s}", "authCtxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_authCtxId, authCtxId);



    // Body Param
    cJSON *localVarSingleItemJSON_confirmation_data = NULL;
    if (confirmation_data != NULL)
    {
        //string
        localVarSingleItemJSON_confirmation_data = confirmation_data_convertToJSON(confirmation_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_confirmation_data);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Request processed (EAP success or Failure)");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    confirmation_data_response_t *elementToReturn = confirmation_data_response_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_authCtxId);
    if (localVarSingleItemJSON_confirmation_data) {
        cJSON_Delete(localVarSingleItemJSON_confirmation_data);
        localVarSingleItemJSON_confirmation_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

void
DefaultAPI_ueAuthenticationsDeregisterPost(apiClient_t *apiClient, deregistration_info_t * deregistration_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/ue-authentications/deregister")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/ue-authentications/deregister");




    // Body Param
    cJSON *localVarSingleItemJSON_deregistration_info = NULL;
    if (deregistration_info != NULL)
    {
        //string
        localVarSingleItemJSON_deregistration_info = deregistration_info_convertToJSON(deregistration_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deregistration_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Expected response to a successful removal of security context");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_deregistration_info) {
        cJSON_Delete(localVarSingleItemJSON_deregistration_info);
        localVarSingleItemJSON_deregistration_info = NULL;
    }
    free(localVarBodyParameters);

}

ue_authentication_ctx_t*
DefaultAPI_ueAuthenticationsPost(apiClient_t *apiClient, authentication_info_t * authentication_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/ue-authentications")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/ue-authentications");




    // Body Param
    cJSON *localVarSingleItemJSON_authentication_info = NULL;
    if (authentication_info != NULL)
    {
        //string
        localVarSingleItemJSON_authentication_info = authentication_info_convertToJSON(authentication_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_authentication_info);
    }
    list_addElement(localVarHeaderType,"application/3gppHal+json"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","UEAuthenticationCtx");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request from the AMF");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden due to serving network not authorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","User does not exist in the HPLMN");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Received protection scheme is not supported by HPLMN");
    //}
    //nonprimitive not container
    cJSON *DefaultAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ue_authentication_ctx_t *elementToReturn = ue_authentication_ctx_parseFromJSON(DefaultAPIlocalVarJSON);
    cJSON_Delete(DefaultAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_authentication_info) {
        cJSON_Delete(localVarSingleItemJSON_authentication_info);
        localVarSingleItemJSON_authentication_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

