#ifndef ee_subscription_TEST
#define ee_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ee_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ee_subscription.h"
ee_subscription_t* instantiate_ee_subscription(int include_optional);

#include "test_reporting_options.c"
#include "test_context_info.c"


ee_subscription_t* instantiate_ee_subscription(int include_optional) {
  ee_subscription_t* ee_subscription = NULL;
  if (include_optional) {
    ee_subscription = ee_subscription_create(
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_reporting_options(0),
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      "a",
      "a",
      "0",
      "0",
      "a",
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    ee_subscription = ee_subscription_create(
      "0",
      list_createList(),
      NULL,
      "a",
      "0",
      NULL,
      1,
      "a",
      "a",
      "0",
      "0",
      "a",
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return ee_subscription;
}


#ifdef ee_subscription_MAIN

void test_ee_subscription(int include_optional) {
    ee_subscription_t* ee_subscription_1 = instantiate_ee_subscription(include_optional);

	cJSON* jsonee_subscription_1 = ee_subscription_convertToJSON(ee_subscription_1);
	printf("ee_subscription :\n%s\n", cJSON_Print(jsonee_subscription_1));
	ee_subscription_t* ee_subscription_2 = ee_subscription_parseFromJSON(jsonee_subscription_1);
	cJSON* jsonee_subscription_2 = ee_subscription_convertToJSON(ee_subscription_2);
	printf("repeating ee_subscription:\n%s\n", cJSON_Print(jsonee_subscription_2));
}

int main() {
  test_ee_subscription(1);
  test_ee_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // ee_subscription_MAIN
#endif // ee_subscription_TEST
