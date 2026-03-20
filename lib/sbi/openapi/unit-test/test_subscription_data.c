#ifndef subscription_data_TEST
#define subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_data.h"
subscription_data_t* instantiate_subscription_data(int include_optional);

#include "test_subscr_cond.c"
#include "test_plmn_id.c"
#include "test_notif_condition.c"


subscription_data_t* instantiate_subscription_data(int include_optional) {
  subscription_data_t* subscription_data = NULL;
  if (include_optional) {
    subscription_data = subscription_data_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_subscr_cond(0),
      "a",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "a",
       // false, not to have infinite recursion
      instantiate_notif_condition(0),
      nrf_nfmanagement_service_subscription_data__NRF,
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      "0",
      1,
      "a",
      "0"
    );
  } else {
    subscription_data = subscription_data_create(
      "0",
      "0",
      NULL,
      "a",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      NULL,
      "a",
      NULL,
      nrf_nfmanagement_service_subscription_data__NRF,
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      "0",
      1,
      "a",
      "0"
    );
  }

  return subscription_data;
}


#ifdef subscription_data_MAIN

void test_subscription_data(int include_optional) {
    subscription_data_t* subscription_data_1 = instantiate_subscription_data(include_optional);

	cJSON* jsonsubscription_data_1 = subscription_data_convertToJSON(subscription_data_1);
	printf("subscription_data :\n%s\n", cJSON_Print(jsonsubscription_data_1));
	subscription_data_t* subscription_data_2 = subscription_data_parseFromJSON(jsonsubscription_data_1);
	cJSON* jsonsubscription_data_2 = subscription_data_convertToJSON(subscription_data_2);
	printf("repeating subscription_data:\n%s\n", cJSON_Print(jsonsubscription_data_2));
}

int main() {
  test_subscription_data(1);
  test_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_data_MAIN
#endif // subscription_data_TEST
