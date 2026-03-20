#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pdu_session_management_data.h"
#include "../model/problem_details.h"


// Creates and updates the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t*
PduSessionManagementDataAPI_createOrReplaceSessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId , pdu_session_management_data_t * pdu_session_management_data );


// Deletes the session management data for a UE and for an individual PDU session
//
void
PduSessionManagementDataAPI_deleteSessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId );


// Retrieves the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t*
PduSessionManagementDataAPI_querySessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId , char * ipv4_addr , char * ipv6_prefix , char * dnn , list_t * fields , char * supp_feat );


