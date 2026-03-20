#ifndef ee_subscription_ext_TEST
#define ee_subscription_ext_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ee_subscription_ext_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ee_subscription_ext.h"
ee_subscription_ext_t* instantiate_ee_subscription_ext(int include_optional);

#include "test_reporting_options_1.c"
#include "test_context_info.c"
#include "test_smf_subscription_info.c"
#include "test_hss_subscription_info.c"


ee_subscription_ext_t* instantiate_ee_subscription_ext(int include_optional) {
  ee_subscription_ext_t* ee_subscription_ext = NULL;
  if (include_optional) {
    ee_subscription_ext = ee_subscription_ext_create(
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_reporting_options_1(0),
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
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_smf_subscription_info(0),
       // false, not to have infinite recursion
      instantiate_hss_subscription_info(0)
    );
  } else {
    ee_subscription_ext = ee_subscription_ext_create(
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
      "0",
      list_createList(),
      NULL,
      NULL
    );
  }

  return ee_subscription_ext;
}


#ifdef ee_subscription_ext_MAIN

void test_ee_subscription_ext(int include_optional) {
    ee_subscription_ext_t* ee_subscription_ext_1 = instantiate_ee_subscription_ext(include_optional);

	cJSON* jsonee_subscription_ext_1 = ee_subscription_ext_convertToJSON(ee_subscription_ext_1);
	printf("ee_subscription_ext :\n%s\n", cJSON_Print(jsonee_subscription_ext_1));
	ee_subscription_ext_t* ee_subscription_ext_2 = ee_subscription_ext_parseFromJSON(jsonee_subscription_ext_1);
	cJSON* jsonee_subscription_ext_2 = ee_subscription_ext_convertToJSON(ee_subscription_ext_2);
	printf("repeating ee_subscription_ext:\n%s\n", cJSON_Print(jsonee_subscription_ext_2));
}

int main() {
  test_ee_subscription_ext(1);
  test_ee_subscription_ext(0);

  printf("Hello world \n");
  return 0;
}

#endif // ee_subscription_ext_MAIN
#endif // ee_subscription_ext_TEST
