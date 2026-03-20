#ifndef aerial_ue_subscription_info_1_TEST
#define aerial_ue_subscription_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define aerial_ue_subscription_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/aerial_ue_subscription_info_1.h"
aerial_ue_subscription_info_1_t* instantiate_aerial_ue_subscription_info_1(int include_optional);



aerial_ue_subscription_info_1_t* instantiate_aerial_ue_subscription_info_1(int include_optional) {
  aerial_ue_subscription_info_1_t* aerial_ue_subscription_info_1 = NULL;
  if (include_optional) {
    aerial_ue_subscription_info_1 = aerial_ue_subscription_info_1_create(
      nudr_datarepository_api_openapi_file_aerial_ue_subscription_info_1__AERIAL_UE_ALLOWED,
      "a"
    );
  } else {
    aerial_ue_subscription_info_1 = aerial_ue_subscription_info_1_create(
      nudr_datarepository_api_openapi_file_aerial_ue_subscription_info_1__AERIAL_UE_ALLOWED,
      "a"
    );
  }

  return aerial_ue_subscription_info_1;
}


#ifdef aerial_ue_subscription_info_1_MAIN

void test_aerial_ue_subscription_info_1(int include_optional) {
    aerial_ue_subscription_info_1_t* aerial_ue_subscription_info_1_1 = instantiate_aerial_ue_subscription_info_1(include_optional);

	cJSON* jsonaerial_ue_subscription_info_1_1 = aerial_ue_subscription_info_1_convertToJSON(aerial_ue_subscription_info_1_1);
	printf("aerial_ue_subscription_info_1 :\n%s\n", cJSON_Print(jsonaerial_ue_subscription_info_1_1));
	aerial_ue_subscription_info_1_t* aerial_ue_subscription_info_1_2 = aerial_ue_subscription_info_1_parseFromJSON(jsonaerial_ue_subscription_info_1_1);
	cJSON* jsonaerial_ue_subscription_info_1_2 = aerial_ue_subscription_info_1_convertToJSON(aerial_ue_subscription_info_1_2);
	printf("repeating aerial_ue_subscription_info_1:\n%s\n", cJSON_Print(jsonaerial_ue_subscription_info_1_2));
}

int main() {
  test_aerial_ue_subscription_info_1(1);
  test_aerial_ue_subscription_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // aerial_ue_subscription_info_1_MAIN
#endif // aerial_ue_subscription_info_1_TEST
