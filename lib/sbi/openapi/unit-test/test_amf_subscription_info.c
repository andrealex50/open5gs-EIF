#ifndef amf_subscription_info_TEST
#define amf_subscription_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_subscription_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_subscription_info.h"
amf_subscription_info_t* instantiate_amf_subscription_info(int include_optional);

#include "test_context_info.c"


amf_subscription_info_t* instantiate_amf_subscription_info(int include_optional) {
  amf_subscription_info_t* amf_subscription_info = NULL;
  if (include_optional) {
    amf_subscription_info = amf_subscription_info_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_context_info(0)
    );
  } else {
    amf_subscription_info = amf_subscription_info_create(
      "0",
      "0",
      "0",
      NULL
    );
  }

  return amf_subscription_info;
}


#ifdef amf_subscription_info_MAIN

void test_amf_subscription_info(int include_optional) {
    amf_subscription_info_t* amf_subscription_info_1 = instantiate_amf_subscription_info(include_optional);

	cJSON* jsonamf_subscription_info_1 = amf_subscription_info_convertToJSON(amf_subscription_info_1);
	printf("amf_subscription_info :\n%s\n", cJSON_Print(jsonamf_subscription_info_1));
	amf_subscription_info_t* amf_subscription_info_2 = amf_subscription_info_parseFromJSON(jsonamf_subscription_info_1);
	cJSON* jsonamf_subscription_info_2 = amf_subscription_info_convertToJSON(amf_subscription_info_2);
	printf("repeating amf_subscription_info:\n%s\n", cJSON_Print(jsonamf_subscription_info_2));
}

int main() {
  test_amf_subscription_info(1);
  test_amf_subscription_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_subscription_info_MAIN
#endif // amf_subscription_info_TEST
