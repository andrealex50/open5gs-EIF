#ifndef modifysubscription_data_subscription_200_response_TEST
#define modifysubscription_data_subscription_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modifysubscription_data_subscription_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modifysubscription_data_subscription_200_response.h"
modifysubscription_data_subscription_200_response_t* instantiate_modifysubscription_data_subscription_200_response(int include_optional);

#include "test_sdm_subscription_1.c"
#include "test_hss_subscription_info.c"


modifysubscription_data_subscription_200_response_t* instantiate_modifysubscription_data_subscription_200_response(int include_optional) {
  modifysubscription_data_subscription_200_response_t* modifysubscription_data_subscription_200_response = NULL;
  if (include_optional) {
    modifysubscription_data_subscription_200_response = modifysubscription_data_subscription_200_response_create(
      list_createList(),
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
    modifysubscription_data_subscription_200_response = modifysubscription_data_subscription_200_response_create(
      list_createList(),
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

  return modifysubscription_data_subscription_200_response;
}


#ifdef modifysubscription_data_subscription_200_response_MAIN

void test_modifysubscription_data_subscription_200_response(int include_optional) {
    modifysubscription_data_subscription_200_response_t* modifysubscription_data_subscription_200_response_1 = instantiate_modifysubscription_data_subscription_200_response(include_optional);

	cJSON* jsonmodifysubscription_data_subscription_200_response_1 = modifysubscription_data_subscription_200_response_convertToJSON(modifysubscription_data_subscription_200_response_1);
	printf("modifysubscription_data_subscription_200_response :\n%s\n", cJSON_Print(jsonmodifysubscription_data_subscription_200_response_1));
	modifysubscription_data_subscription_200_response_t* modifysubscription_data_subscription_200_response_2 = modifysubscription_data_subscription_200_response_parseFromJSON(jsonmodifysubscription_data_subscription_200_response_1);
	cJSON* jsonmodifysubscription_data_subscription_200_response_2 = modifysubscription_data_subscription_200_response_convertToJSON(modifysubscription_data_subscription_200_response_2);
	printf("repeating modifysubscription_data_subscription_200_response:\n%s\n", cJSON_Print(jsonmodifysubscription_data_subscription_200_response_2));
}

int main() {
  test_modifysubscription_data_subscription_200_response(1);
  test_modifysubscription_data_subscription_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // modifysubscription_data_subscription_200_response_MAIN
#endif // modifysubscription_data_subscription_200_response_TEST
