#ifndef notification_data_TEST
#define notification_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_data.h"
notification_data_t* instantiate_notification_data(int include_optional);

#include "test_nf_profile.c"
#include "test_subscription_context.c"


notification_data_t* instantiate_notification_data(int include_optional) {
  notification_data_t* notification_data = NULL;
  if (include_optional) {
    notification_data = notification_data_create(
      nrf_nfmanagement_service_notification_data__NF_REGISTERED,
      "0",
      null,
      list_createList(),
      nrf_nfmanagement_service_notification_data__NF_ADDED,
       // false, not to have infinite recursion
      instantiate_subscription_context(0)
    );
  } else {
    notification_data = notification_data_create(
      nrf_nfmanagement_service_notification_data__NF_REGISTERED,
      "0",
      null,
      list_createList(),
      nrf_nfmanagement_service_notification_data__NF_ADDED,
      NULL
    );
  }

  return notification_data;
}


#ifdef notification_data_MAIN

void test_notification_data(int include_optional) {
    notification_data_t* notification_data_1 = instantiate_notification_data(include_optional);

	cJSON* jsonnotification_data_1 = notification_data_convertToJSON(notification_data_1);
	printf("notification_data :\n%s\n", cJSON_Print(jsonnotification_data_1));
	notification_data_t* notification_data_2 = notification_data_parseFromJSON(jsonnotification_data_1);
	cJSON* jsonnotification_data_2 = notification_data_convertToJSON(notification_data_2);
	printf("repeating notification_data:\n%s\n", cJSON_Print(jsonnotification_data_2));
}

int main() {
  test_notification_data(1);
  test_notification_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_data_MAIN
#endif // notification_data_TEST
