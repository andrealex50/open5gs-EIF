#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/message_waiting_data.h"
#include "../model/patch_item.h"
#include "../model/problem_details.h"


// Create the Message Waiting Data of the UE
//
message_waiting_data_t*
MessageWaitingDataDocumentAPI_createMessageWaitingData(apiClient_t *apiClient, char * ueId , message_waiting_data_t * message_waiting_data );


// To remove the Message Waiting Data of the UE
//
void
MessageWaitingDataDocumentAPI_deleteMessageWaitingData(apiClient_t *apiClient, char * ueId );


// Modify the Message Waiting Data of the UE
//
void
MessageWaitingDataDocumentAPI_modifyMessageWaitingData(apiClient_t *apiClient, char * ueId , list_t * patch_item );


// Retrieves the Message Waiting Data of the UE
//
message_waiting_data_t*
MessageWaitingDataDocumentAPI_queryMessageWaitingData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


