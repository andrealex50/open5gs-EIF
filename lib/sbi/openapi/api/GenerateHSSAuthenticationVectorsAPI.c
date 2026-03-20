#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GenerateHSSAuthenticationVectorsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for GenerateHSSAuthenticationVectorsAPI_generateAv

static char* generateAv__ToString(nudm_ueau_generateAv_hssAuthType_e ){
    char *Array[] =  { "NULL", "eps-aka", "eap-aka", "eap-aka-prime", "ims-aka", "gba-aka" };
    return Array[];
}

static nudm_ueau_generateAv_hssAuthType_e generateAv__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "eps-aka", "eap-aka", "eap-aka-prime", "ims-aka", "gba-aka" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function generateAv__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *generateAv__convertToJSON(nudm_ueau_generateAv_hssAuthType_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function generateAv__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudm_ueau_generateAv_hssAuthType_e generateAv__parseFromJSON(cJSON* JSON) {
    nudm_ueau_generateAv_hssAuthType_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Generate authentication data for the UE in EPS or IMS domain
//
hss_authentication_info_result_t*
GenerateHSSAuthenticationVectorsAPI_generateAv(apiClient_t *apiClient, char * supi , hss_auth_type_in_uri_e hssAuthType , hss_authentication_info_request_t * hss_authentication_info_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/hss-security-information/{hssAuthType}/generate-av")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/hss-security-information/{hssAuthType}/generate-av");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 +  + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);

    // Path Params
    long sizeOfPathParams_hssAuthType = strlen(supi)+3 +  + strlen("{ hssAuthType }");



    // Body Param
    cJSON *localVarSingleItemJSON_hss_authentication_info_request = NULL;
    if (hss_authentication_info_request != NULL)
    {
        //string
        localVarSingleItemJSON_hss_authentication_info_request = hss_authentication_info_request_convertToJSON(hss_authentication_info_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_hss_authentication_info_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Expected response to a valid request");
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *GenerateHSSAuthenticationVectorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    hss_authentication_info_result_t *elementToReturn = hss_authentication_info_result_parseFromJSON(GenerateHSSAuthenticationVectorsAPIlocalVarJSON);
    cJSON_Delete(GenerateHSSAuthenticationVectorsAPIlocalVarJSON);
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
    free(localVarToReplace_supi);
    free(localVarToReplace_hssAuthType);
    if (localVarSingleItemJSON_hss_authentication_info_request) {
        cJSON_Delete(localVarSingleItemJSON_hss_authentication_info_request);
        localVarSingleItemJSON_hss_authentication_info_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

