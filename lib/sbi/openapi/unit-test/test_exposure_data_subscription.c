#ifndef exposure_data_subscription_TEST
#define exposure_data_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define exposure_data_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/exposure_data_subscription.h"
exposure_data_subscription_t* instantiate_exposure_data_subscription(int include_optional);



exposure_data_subscription_t* instantiate_exposure_data_subscription(int include_optional) {
  exposure_data_subscription_t* exposure_data_subscription = NULL;
  if (include_optional) {
    exposure_data_subscription = exposure_data_subscription_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  } else {
    exposure_data_subscription = exposure_data_subscription_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  }

  return exposure_data_subscription;
}


#ifdef exposure_data_subscription_MAIN

void test_exposure_data_subscription(int include_optional) {
    exposure_data_subscription_t* exposure_data_subscription_1 = instantiate_exposure_data_subscription(include_optional);

	cJSON* jsonexposure_data_subscription_1 = exposure_data_subscription_convertToJSON(exposure_data_subscription_1);
	printf("exposure_data_subscription :\n%s\n", cJSON_Print(jsonexposure_data_subscription_1));
	exposure_data_subscription_t* exposure_data_subscription_2 = exposure_data_subscription_parseFromJSON(jsonexposure_data_subscription_1);
	cJSON* jsonexposure_data_subscription_2 = exposure_data_subscription_convertToJSON(exposure_data_subscription_2);
	printf("repeating exposure_data_subscription:\n%s\n", cJSON_Print(jsonexposure_data_subscription_2));
}

int main() {
  test_exposure_data_subscription(1);
  test_exposure_data_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // exposure_data_subscription_MAIN
#endif // exposure_data_subscription_TEST
