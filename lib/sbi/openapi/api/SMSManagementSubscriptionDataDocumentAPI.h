#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/sms_management_subscription_data.h"


// Retrieves the SMS management subscription data of a UE
//
sms_management_subscription_data_t*
SMSManagementSubscriptionDataDocumentAPI_querySmsMngData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


