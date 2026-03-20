#ifndef sms_management_subscription_data_1_TEST
#define sms_management_subscription_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_management_subscription_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_management_subscription_data_1.h"
sms_management_subscription_data_1_t* instantiate_sms_management_subscription_data_1(int include_optional);

#include "test_trace_data.c"


sms_management_subscription_data_1_t* instantiate_sms_management_subscription_data_1(int include_optional) {
  sms_management_subscription_data_1_t* sms_management_subscription_data_1 = NULL;
  if (include_optional) {
    sms_management_subscription_data_1 = sms_management_subscription_data_1_create(
      "a",
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trace_data(0)
    );
  } else {
    sms_management_subscription_data_1 = sms_management_subscription_data_1_create(
      "a",
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      NULL
    );
  }

  return sms_management_subscription_data_1;
}


#ifdef sms_management_subscription_data_1_MAIN

void test_sms_management_subscription_data_1(int include_optional) {
    sms_management_subscription_data_1_t* sms_management_subscription_data_1_1 = instantiate_sms_management_subscription_data_1(include_optional);

	cJSON* jsonsms_management_subscription_data_1_1 = sms_management_subscription_data_1_convertToJSON(sms_management_subscription_data_1_1);
	printf("sms_management_subscription_data_1 :\n%s\n", cJSON_Print(jsonsms_management_subscription_data_1_1));
	sms_management_subscription_data_1_t* sms_management_subscription_data_1_2 = sms_management_subscription_data_1_parseFromJSON(jsonsms_management_subscription_data_1_1);
	cJSON* jsonsms_management_subscription_data_1_2 = sms_management_subscription_data_1_convertToJSON(sms_management_subscription_data_1_2);
	printf("repeating sms_management_subscription_data_1:\n%s\n", cJSON_Print(jsonsms_management_subscription_data_1_2));
}

int main() {
  test_sms_management_subscription_data_1(1);
  test_sms_management_subscription_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_management_subscription_data_1_MAIN
#endif // sms_management_subscription_data_1_TEST
