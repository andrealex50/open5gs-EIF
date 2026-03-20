#ifndef sms_management_subscription_data_TEST
#define sms_management_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_management_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_management_subscription_data.h"
sms_management_subscription_data_t* instantiate_sms_management_subscription_data(int include_optional);

#include "test_trace_data_1.c"


sms_management_subscription_data_t* instantiate_sms_management_subscription_data(int include_optional) {
  sms_management_subscription_data_t* sms_management_subscription_data = NULL;
  if (include_optional) {
    sms_management_subscription_data = sms_management_subscription_data_create(
      "a",
      1,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trace_data_1(0)
    );
  } else {
    sms_management_subscription_data = sms_management_subscription_data_create(
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

  return sms_management_subscription_data;
}


#ifdef sms_management_subscription_data_MAIN

void test_sms_management_subscription_data(int include_optional) {
    sms_management_subscription_data_t* sms_management_subscription_data_1 = instantiate_sms_management_subscription_data(include_optional);

	cJSON* jsonsms_management_subscription_data_1 = sms_management_subscription_data_convertToJSON(sms_management_subscription_data_1);
	printf("sms_management_subscription_data :\n%s\n", cJSON_Print(jsonsms_management_subscription_data_1));
	sms_management_subscription_data_t* sms_management_subscription_data_2 = sms_management_subscription_data_parseFromJSON(jsonsms_management_subscription_data_1);
	cJSON* jsonsms_management_subscription_data_2 = sms_management_subscription_data_convertToJSON(sms_management_subscription_data_2);
	printf("repeating sms_management_subscription_data:\n%s\n", cJSON_Print(jsonsms_management_subscription_data_2));
}

int main() {
  test_sms_management_subscription_data(1);
  test_sms_management_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_management_subscription_data_MAIN
#endif // sms_management_subscription_data_TEST
