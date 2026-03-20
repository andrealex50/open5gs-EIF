#ifndef aerial_ue_subscription_info_TEST
#define aerial_ue_subscription_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define aerial_ue_subscription_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/aerial_ue_subscription_info.h"
aerial_ue_subscription_info_t* instantiate_aerial_ue_subscription_info(int include_optional);



aerial_ue_subscription_info_t* instantiate_aerial_ue_subscription_info(int include_optional) {
  aerial_ue_subscription_info_t* aerial_ue_subscription_info = NULL;
  if (include_optional) {
    aerial_ue_subscription_info = aerial_ue_subscription_info_create(
      nudr_datarepository_api_openapi_file_aerial_ue_subscription_info__AERIAL_UE_ALLOWED,
      "a"
    );
  } else {
    aerial_ue_subscription_info = aerial_ue_subscription_info_create(
      nudr_datarepository_api_openapi_file_aerial_ue_subscription_info__AERIAL_UE_ALLOWED,
      "a"
    );
  }

  return aerial_ue_subscription_info;
}


#ifdef aerial_ue_subscription_info_MAIN

void test_aerial_ue_subscription_info(int include_optional) {
    aerial_ue_subscription_info_t* aerial_ue_subscription_info_1 = instantiate_aerial_ue_subscription_info(include_optional);

	cJSON* jsonaerial_ue_subscription_info_1 = aerial_ue_subscription_info_convertToJSON(aerial_ue_subscription_info_1);
	printf("aerial_ue_subscription_info :\n%s\n", cJSON_Print(jsonaerial_ue_subscription_info_1));
	aerial_ue_subscription_info_t* aerial_ue_subscription_info_2 = aerial_ue_subscription_info_parseFromJSON(jsonaerial_ue_subscription_info_1);
	cJSON* jsonaerial_ue_subscription_info_2 = aerial_ue_subscription_info_convertToJSON(aerial_ue_subscription_info_2);
	printf("repeating aerial_ue_subscription_info:\n%s\n", cJSON_Print(jsonaerial_ue_subscription_info_2));
}

int main() {
  test_aerial_ue_subscription_info(1);
  test_aerial_ue_subscription_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // aerial_ue_subscription_info_MAIN
#endif // aerial_ue_subscription_info_TEST
