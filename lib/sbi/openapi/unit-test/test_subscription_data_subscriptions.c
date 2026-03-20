#ifndef subscription_data_subscriptions_TEST
#define subscription_data_subscriptions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_data_subscriptions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_data_subscriptions.h"
subscription_data_subscriptions_t* instantiate_subscription_data_subscriptions(int include_optional);

#include "test_sdm_subscription_1.c"
#include "test_hss_subscription_info.c"


subscription_data_subscriptions_t* instantiate_subscription_data_subscriptions(int include_optional) {
  subscription_data_subscriptions_t* subscription_data_subscriptions = NULL;
  if (include_optional) {
    subscription_data_subscriptions = subscription_data_subscriptions_create(
      "a",
      "0",
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_sdm_subscription_1(0),
       // false, not to have infinite recursion
      instantiate_hss_subscription_info(0),
      "0",
      1,
      "a"
    );
  } else {
    subscription_data_subscriptions = subscription_data_subscriptions_create(
      "a",
      "0",
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      "0",
      1,
      "a"
    );
  }

  return subscription_data_subscriptions;
}


#ifdef subscription_data_subscriptions_MAIN

void test_subscription_data_subscriptions(int include_optional) {
    subscription_data_subscriptions_t* subscription_data_subscriptions_1 = instantiate_subscription_data_subscriptions(include_optional);

	cJSON* jsonsubscription_data_subscriptions_1 = subscription_data_subscriptions_convertToJSON(subscription_data_subscriptions_1);
	printf("subscription_data_subscriptions :\n%s\n", cJSON_Print(jsonsubscription_data_subscriptions_1));
	subscription_data_subscriptions_t* subscription_data_subscriptions_2 = subscription_data_subscriptions_parseFromJSON(jsonsubscription_data_subscriptions_1);
	cJSON* jsonsubscription_data_subscriptions_2 = subscription_data_subscriptions_convertToJSON(subscription_data_subscriptions_2);
	printf("repeating subscription_data_subscriptions:\n%s\n", cJSON_Print(jsonsubscription_data_subscriptions_2));
}

int main() {
  test_subscription_data_subscriptions(1);
  test_subscription_data_subscriptions(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_data_subscriptions_MAIN
#endif // subscription_data_subscriptions_TEST
