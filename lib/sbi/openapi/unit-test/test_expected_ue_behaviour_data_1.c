#ifndef expected_ue_behaviour_data_1_TEST
#define expected_ue_behaviour_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expected_ue_behaviour_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expected_ue_behaviour_data_1.h"
expected_ue_behaviour_data_1_t* instantiate_expected_ue_behaviour_data_1(int include_optional);

#include "test_scheduled_communication_time_1.c"
#include "test_battery_indication.c"


expected_ue_behaviour_data_1_t* instantiate_expected_ue_behaviour_data_1(int include_optional) {
  expected_ue_behaviour_data_1_t* expected_ue_behaviour_data_1 = NULL;
  if (include_optional) {
    expected_ue_behaviour_data_1 = expected_ue_behaviour_data_1_create(
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__STATIONARY,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_scheduled_communication_time_1(0),
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__DOWNLINK_ONLY,
      list_createList(),
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__SINGLE_TRANS_UL,
       // false, not to have infinite recursion
      instantiate_battery_indication(0),
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    expected_ue_behaviour_data_1 = expected_ue_behaviour_data_1_create(
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__STATIONARY,
      56,
      56,
      NULL,
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__DOWNLINK_ONLY,
      list_createList(),
      nudr_datarepository_api_openapi_file_expected_ue_behaviour_data_1__SINGLE_TRANS_UL,
      NULL,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return expected_ue_behaviour_data_1;
}


#ifdef expected_ue_behaviour_data_1_MAIN

void test_expected_ue_behaviour_data_1(int include_optional) {
    expected_ue_behaviour_data_1_t* expected_ue_behaviour_data_1_1 = instantiate_expected_ue_behaviour_data_1(include_optional);

	cJSON* jsonexpected_ue_behaviour_data_1_1 = expected_ue_behaviour_data_1_convertToJSON(expected_ue_behaviour_data_1_1);
	printf("expected_ue_behaviour_data_1 :\n%s\n", cJSON_Print(jsonexpected_ue_behaviour_data_1_1));
	expected_ue_behaviour_data_1_t* expected_ue_behaviour_data_1_2 = expected_ue_behaviour_data_1_parseFromJSON(jsonexpected_ue_behaviour_data_1_1);
	cJSON* jsonexpected_ue_behaviour_data_1_2 = expected_ue_behaviour_data_1_convertToJSON(expected_ue_behaviour_data_1_2);
	printf("repeating expected_ue_behaviour_data_1:\n%s\n", cJSON_Print(jsonexpected_ue_behaviour_data_1_2));
}

int main() {
  test_expected_ue_behaviour_data_1(1);
  test_expected_ue_behaviour_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // expected_ue_behaviour_data_1_MAIN
#endif // expected_ue_behaviour_data_1_TEST
