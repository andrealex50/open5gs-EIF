#ifndef sdm_subscription_1_TEST
#define sdm_subscription_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdm_subscription_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdm_subscription_1.h"
sdm_subscription_1_t* instantiate_sdm_subscription_1(int include_optional);

#include "test_snssai.c"
#include "test_plmn_id_1.c"
#include "test_immediate_report.c"
#include "test_context_info.c"
#include "test_ue_context_in_smf_data_sub_filter_1.c"


sdm_subscription_1_t* instantiate_sdm_subscription_1(int include_optional) {
  sdm_subscription_1_t* sdm_subscription_1 = NULL;
  if (include_optional) {
    sdm_subscription_1 = sdm_subscription_1_create(
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
      instantiate_plmn_id_1(0),
      1,
      null,
      "a",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ue_context_in_smf_data_sub_filter_1(0)
    );
  } else {
    sdm_subscription_1 = sdm_subscription_1_create(
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

  return sdm_subscription_1;
}


#ifdef sdm_subscription_1_MAIN

void test_sdm_subscription_1(int include_optional) {
    sdm_subscription_1_t* sdm_subscription_1_1 = instantiate_sdm_subscription_1(include_optional);

	cJSON* jsonsdm_subscription_1_1 = sdm_subscription_1_convertToJSON(sdm_subscription_1_1);
	printf("sdm_subscription_1 :\n%s\n", cJSON_Print(jsonsdm_subscription_1_1));
	sdm_subscription_1_t* sdm_subscription_1_2 = sdm_subscription_1_parseFromJSON(jsonsdm_subscription_1_1);
	cJSON* jsonsdm_subscription_1_2 = sdm_subscription_1_convertToJSON(sdm_subscription_1_2);
	printf("repeating sdm_subscription_1:\n%s\n", cJSON_Print(jsonsdm_subscription_1_2));
}

int main() {
  test_sdm_subscription_1(1);
  test_sdm_subscription_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdm_subscription_1_MAIN
#endif // sdm_subscription_1_TEST
