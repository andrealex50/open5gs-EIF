#ifndef default_notification_subscription_TEST
#define default_notification_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define default_notification_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/default_notification_subscription.h"
default_notification_subscription_t* instantiate_default_notification_subscription(int include_optional);



default_notification_subscription_t* instantiate_default_notification_subscription(int include_optional) {
  default_notification_subscription_t* default_notification_subscription = NULL;
  if (include_optional) {
    default_notification_subscription = default_notification_subscription_create(
      nrf_nfdiscovery_service_default_notification_subscription__N1_MESSAGES,
      "0",
      nrf_nfdiscovery_service_default_notification_subscription__5GMM,
      nrf_nfdiscovery_service_default_notification_subscription__SM,
      list_createList(),
      "0",
      "0",
      "a",
      list_createList()
    );
  } else {
    default_notification_subscription = default_notification_subscription_create(
      nrf_nfdiscovery_service_default_notification_subscription__N1_MESSAGES,
      "0",
      nrf_nfdiscovery_service_default_notification_subscription__5GMM,
      nrf_nfdiscovery_service_default_notification_subscription__SM,
      list_createList(),
      "0",
      "0",
      "a",
      list_createList()
    );
  }

  return default_notification_subscription;
}


#ifdef default_notification_subscription_MAIN

void test_default_notification_subscription(int include_optional) {
    default_notification_subscription_t* default_notification_subscription_1 = instantiate_default_notification_subscription(include_optional);

	cJSON* jsondefault_notification_subscription_1 = default_notification_subscription_convertToJSON(default_notification_subscription_1);
	printf("default_notification_subscription :\n%s\n", cJSON_Print(jsondefault_notification_subscription_1));
	default_notification_subscription_t* default_notification_subscription_2 = default_notification_subscription_parseFromJSON(jsondefault_notification_subscription_1);
	cJSON* jsondefault_notification_subscription_2 = default_notification_subscription_convertToJSON(default_notification_subscription_2);
	printf("repeating default_notification_subscription:\n%s\n", cJSON_Print(jsondefault_notification_subscription_2));
}

int main() {
  test_default_notification_subscription(1);
  test_default_notification_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // default_notification_subscription_MAIN
#endif // default_notification_subscription_TEST
