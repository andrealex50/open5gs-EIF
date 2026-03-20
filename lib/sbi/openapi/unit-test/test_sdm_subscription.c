#ifndef sdm_subscription_TEST
#define sdm_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdm_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdm_subscription.h"
sdm_subscription_t* instantiate_sdm_subscription(int include_optional);

#include "test_snssai.c"
#include "test_plmn_id.c"
#include "test_immediate_report.c"
#include "test_context_info.c"
#include "test_ue_context_in_smf_data_sub_filter.c"


sdm_subscription_t* instantiate_sdm_subscription(int include_optional) {
  sdm_subscription_t* sdm_subscription = NULL;
  if (include_optional) {
    sdm_subscription = sdm_subscription_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      1,
      null,
      "a",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ue_context_in_smf_data_sub_filter(0)
    );
  } else {
    sdm_subscription = sdm_subscription_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      list_createList(),
      NULL,
      "0",
      "0",
      NULL,
      1,
      null,
      "a",
      NULL,
      1,
      1,
      list_createList(),
      NULL
    );
  }

  return sdm_subscription;
}


#ifdef sdm_subscription_MAIN

void test_sdm_subscription(int include_optional) {
    sdm_subscription_t* sdm_subscription_1 = instantiate_sdm_subscription(include_optional);

	cJSON* jsonsdm_subscription_1 = sdm_subscription_convertToJSON(sdm_subscription_1);
	printf("sdm_subscription :\n%s\n", cJSON_Print(jsonsdm_subscription_1));
	sdm_subscription_t* sdm_subscription_2 = sdm_subscription_parseFromJSON(jsonsdm_subscription_1);
	cJSON* jsonsdm_subscription_2 = sdm_subscription_convertToJSON(sdm_subscription_2);
	printf("repeating sdm_subscription:\n%s\n", cJSON_Print(jsonsdm_subscription_2));
}

int main() {
  test_sdm_subscription(1);
  test_sdm_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdm_subscription_MAIN
#endif // sdm_subscription_TEST
