#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "NetworkSliceInformationDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for NetworkSliceInformationDocumentAPI_nSSelectionGet

static char* nSSelectionGet__ToString(nssf_ns_selection_nSSelectionGet_nf-type_e ){
    char *Array[] =  { "NULL", "NRF", "UDM", "AMF", "SMF", "AUSF", "NEF", "PCF", "SMSF", "NSSF", "UDR", "LMF", "GMLC", "5G_EIR", "SEPP", "UPF", "N3IWF", "AF", "UDSF", "BSF", "CHF", "NWDAF", "PCSCF", "CBCF", "HSS", "UCMF", "SOR_AF", "SPAF", "MME", "SCSAS", "SCEF", "SCP", "NSSAAF", "ICSCF", "SCSCF", "DRA", "IMS_AS", "AANF", "5G_DDNMF", "NSACF", "MFAF", "EASDF", "DCCF", "MB_SMF", "TSCTSF", "ADRF", "GBA_BSF", "CEF", "MB_UPF", "NSWOF", "PKMF", "MNPF", "SMS_GMSC", "SMS_IWMSC", "MBSF", "MBSTF", "PANF" };
    return Array[];
}

static nssf_ns_selection_nSSelectionGet_nf-type_e nSSelectionGet__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "NRF", "UDM", "AMF", "SMF", "AUSF", "NEF", "PCF", "SMSF", "NSSF", "UDR", "LMF", "GMLC", "5G_EIR", "SEPP", "UPF", "N3IWF", "AF", "UDSF", "BSF", "CHF", "NWDAF", "PCSCF", "CBCF", "HSS", "UCMF", "SOR_AF", "SPAF", "MME", "SCSAS", "SCEF", "SCP", "NSSAAF", "ICSCF", "SCSCF", "DRA", "IMS_AS", "AANF", "5G_DDNMF", "NSACF", "MFAF", "EASDF", "DCCF", "MB_SMF", "TSCTSF", "ADRF", "GBA_BSF", "CEF", "MB_UPF", "NSWOF", "PKMF", "MNPF", "SMS_GMSC", "SMS_IWMSC", "MBSF", "MBSTF", "PANF" };
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
// Function nSSelectionGet__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *nSSelectionGet__convertToJSON(nssf_ns_selection_nSSelectionGet_nf-type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function nSSelectionGet__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nssf_ns_selection_nSSelectionGet_nf-type_e nSSelectionGet__parseFromJSON(cJSON* JSON) {
    nssf_ns_selection_nSSelectionGet_nf-type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieve the Network Slice Selection Information
//
authorized_network_slice_info_t*
NetworkSliceInformationDocumentAPI_nSSelectionGet(apiClient_t *apiClient, nf_type_e nf_type , char * nf_id , slice_info_for_registration_t * slice_info_request_for_registration , slice_info_for_pdu_session_t * slice_info_request_for_pdu_session , slice_info_for_ue_configuration_update_t * slice_info_request_for_ue_cu , plmn_id_t * home_plmn_id , tai_t * tai , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/network-slice-information")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/network-slice-information");




    // query parameters
    char *keyQuery_nf_type = NULL;
    nf_type_e valueQuery_nf_type ;
    keyValuePair_t *keyPairQuery_nf_type = 0;
    if (nf_type)
    {
        keyQuery_nf_type = strdup("nf-type");
        valueQuery_nf_type = (nf_type);
        keyPairQuery_nf_type = keyValuePair_create(keyQuery_nf_type, (void *)strdup(nSSelectionGet__ToString(
		&valueQuery_nf_type)));
        list_addElement(localVarQueryParameters,keyPairQuery_nf_type);
    }

    // query parameters
    char *keyQuery_nf_id = NULL;
    char * valueQuery_nf_id = NULL;
    keyValuePair_t *keyPairQuery_nf_id = 0;
    if (nf_id)
    {
        keyQuery_nf_id = strdup("nf-id");
        valueQuery_nf_id = strdup((nf_id));
        keyPairQuery_nf_id = keyValuePair_create(keyQuery_nf_id, valueQuery_nf_id);
        list_addElement(localVarQueryParameters,keyPairQuery_nf_id);
    }

    // query parameters
    char *keyQuery_slice_info_request_for_registration = NULL;
    slice_info_for_registration_t * valueQuery_slice_info_request_for_registration ;
    keyValuePair_t *keyPairQuery_slice_info_request_for_registration = 0;
    if (slice_info_request_for_registration)
    {
        keyQuery_slice_info_request_for_registration = strdup("slice-info-request-for-registration");
        valueQuery_slice_info_request_for_registration = (slice_info_request_for_registration);
        keyPairQuery_slice_info_request_for_registration = keyValuePair_create(keyQuery_slice_info_request_for_registration, &valueQuery_slice_info_request_for_registration);
        list_addElement(localVarQueryParameters,keyPairQuery_slice_info_request_for_registration);
    }

    // query parameters
    char *keyQuery_slice_info_request_for_pdu_session = NULL;
    slice_info_for_pdu_session_t * valueQuery_slice_info_request_for_pdu_session ;
    keyValuePair_t *keyPairQuery_slice_info_request_for_pdu_session = 0;
    if (slice_info_request_for_pdu_session)
    {
        keyQuery_slice_info_request_for_pdu_session = strdup("slice-info-request-for-pdu-session");
        valueQuery_slice_info_request_for_pdu_session = (slice_info_request_for_pdu_session);
        keyPairQuery_slice_info_request_for_pdu_session = keyValuePair_create(keyQuery_slice_info_request_for_pdu_session, &valueQuery_slice_info_request_for_pdu_session);
        list_addElement(localVarQueryParameters,keyPairQuery_slice_info_request_for_pdu_session);
    }

    // query parameters
    char *keyQuery_slice_info_request_for_ue_cu = NULL;
    slice_info_for_ue_configuration_update_t * valueQuery_slice_info_request_for_ue_cu ;
    keyValuePair_t *keyPairQuery_slice_info_request_for_ue_cu = 0;
    if (slice_info_request_for_ue_cu)
    {
        keyQuery_slice_info_request_for_ue_cu = strdup("slice-info-request-for-ue-cu");
        valueQuery_slice_info_request_for_ue_cu = (slice_info_request_for_ue_cu);
        keyPairQuery_slice_info_request_for_ue_cu = keyValuePair_create(keyQuery_slice_info_request_for_ue_cu, &valueQuery_slice_info_request_for_ue_cu);
        list_addElement(localVarQueryParameters,keyPairQuery_slice_info_request_for_ue_cu);
    }

    // query parameters
    char *keyQuery_home_plmn_id = NULL;
    plmn_id_t * valueQuery_home_plmn_id ;
    keyValuePair_t *keyPairQuery_home_plmn_id = 0;
    if (home_plmn_id)
    {
        keyQuery_home_plmn_id = strdup("home-plmn-id");
        valueQuery_home_plmn_id = (home_plmn_id);
        keyPairQuery_home_plmn_id = keyValuePair_create(keyQuery_home_plmn_id, &valueQuery_home_plmn_id);
        list_addElement(localVarQueryParameters,keyPairQuery_home_plmn_id);
    }

    // query parameters
    char *keyQuery_tai = NULL;
    tai_t * valueQuery_tai ;
    keyValuePair_t *keyPairQuery_tai = 0;
    if (tai)
    {
        keyQuery_tai = strdup("tai");
        valueQuery_tai = (tai);
        keyPairQuery_tai = keyValuePair_create(keyQuery_tai, &valueQuery_tai);
        list_addElement(localVarQueryParameters,keyPairQuery_tai);
    }

    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK (Successful Network Slice Selection)");
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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","406 Not Acceptable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 414) {
    //    printf("%s\n","URI Too Long");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
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
    cJSON *NetworkSliceInformationDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    authorized_network_slice_info_t *elementToReturn = authorized_network_slice_info_parseFromJSON(NetworkSliceInformationDocumentAPIlocalVarJSON);
    cJSON_Delete(NetworkSliceInformationDocumentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_nf_type){
        free(keyQuery_nf_type);
        keyQuery_nf_type = NULL;
    }
    if(keyPairQuery_nf_type){
        keyValuePair_free(keyPairQuery_nf_type);
        keyPairQuery_nf_type = NULL;
    }
    if(keyQuery_nf_id){
        free(keyQuery_nf_id);
        keyQuery_nf_id = NULL;
    }
    if(valueQuery_nf_id){
        free(valueQuery_nf_id);
        valueQuery_nf_id = NULL;
    }
    if(keyPairQuery_nf_id){
        keyValuePair_free(keyPairQuery_nf_id);
        keyPairQuery_nf_id = NULL;
    }
    if(keyQuery_slice_info_request_for_registration){
        free(keyQuery_slice_info_request_for_registration);
        keyQuery_slice_info_request_for_registration = NULL;
    }
    if(keyPairQuery_slice_info_request_for_registration){
        keyValuePair_free(keyPairQuery_slice_info_request_for_registration);
        keyPairQuery_slice_info_request_for_registration = NULL;
    }
    if(keyQuery_slice_info_request_for_pdu_session){
        free(keyQuery_slice_info_request_for_pdu_session);
        keyQuery_slice_info_request_for_pdu_session = NULL;
    }
    if(keyPairQuery_slice_info_request_for_pdu_session){
        keyValuePair_free(keyPairQuery_slice_info_request_for_pdu_session);
        keyPairQuery_slice_info_request_for_pdu_session = NULL;
    }
    if(keyQuery_slice_info_request_for_ue_cu){
        free(keyQuery_slice_info_request_for_ue_cu);
        keyQuery_slice_info_request_for_ue_cu = NULL;
    }
    if(keyPairQuery_slice_info_request_for_ue_cu){
        keyValuePair_free(keyPairQuery_slice_info_request_for_ue_cu);
        keyPairQuery_slice_info_request_for_ue_cu = NULL;
    }
    if(keyQuery_home_plmn_id){
        free(keyQuery_home_plmn_id);
        keyQuery_home_plmn_id = NULL;
    }
    if(keyPairQuery_home_plmn_id){
        keyValuePair_free(keyPairQuery_home_plmn_id);
        keyPairQuery_home_plmn_id = NULL;
    }
    if(keyQuery_tai){
        free(keyQuery_tai);
        keyQuery_tai = NULL;
    }
    if(keyPairQuery_tai){
        keyValuePair_free(keyPairQuery_tai);
        keyPairQuery_tai = NULL;
    }
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

