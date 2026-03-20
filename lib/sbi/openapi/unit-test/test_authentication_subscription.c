#ifndef authentication_subscription_TEST
#define authentication_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_subscription.h"
authentication_subscription_t* instantiate_authentication_subscription(int include_optional);

#include "test_sequence_number.c"


authentication_subscription_t* instantiate_authentication_subscription(int include_optional) {
  authentication_subscription_t* authentication_subscription = NULL;
  if (include_optional) {
    authentication_subscription = authentication_subscription_create(
      nudr_datarepository_api_openapi_file_authentication_subscription__5G_AKA,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_sequence_number(0),
      "a",
      "0",
      "0",
      "0",
      1,
      "0",
      nudr_datarepository_api_openapi_file_authentication_subscription__5G_AKA,
      1,
      "a",
      1,
      "a"
    );
  } else {
    authentication_subscription = authentication_subscription_create(
      nudr_datarepository_api_openapi_file_authentication_subscription__5G_AKA,
      "0",
      "0",
      NULL,
      "a",
      "0",
      "0",
      "0",
      1,
      "0",
      nudr_datarepository_api_openapi_file_authentication_subscription__5G_AKA,
      1,
      "a",
      1,
      "a"
    );
  }

  return authentication_subscription;
}


#ifdef authentication_subscription_MAIN

void test_authentication_subscription(int include_optional) {
    authentication_subscription_t* authentication_subscription_1 = instantiate_authentication_subscription(include_optional);

	cJSON* jsonauthentication_subscription_1 = authentication_subscription_convertToJSON(authentication_subscription_1);
	printf("authentication_subscription :\n%s\n", cJSON_Print(jsonauthentication_subscription_1));
	authentication_subscription_t* authentication_subscription_2 = authentication_subscription_parseFromJSON(jsonauthentication_subscription_1);
	cJSON* jsonauthentication_subscription_2 = authentication_subscription_convertToJSON(authentication_subscription_2);
	printf("repeating authentication_subscription:\n%s\n", cJSON_Print(jsonauthentication_subscription_2));
}

int main() {
  test_authentication_subscription(1);
  test_authentication_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_subscription_MAIN
#endif // authentication_subscription_TEST
