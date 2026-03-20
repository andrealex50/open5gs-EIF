#ifndef expected_ue_behaviour_TEST
#define expected_ue_behaviour_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define expected_ue_behaviour_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/expected_ue_behaviour.h"
expected_ue_behaviour_t* instantiate_expected_ue_behaviour(int include_optional);

#include "test_stationary_indication_rm.c"
#include "test_scheduled_communication_type_rm.c"
#include "test_scheduled_communication_time_rm.c"
#include "test_traffic_profile_rm.c"
#include "test_battery_indication_rm.c"


expected_ue_behaviour_t* instantiate_expected_ue_behaviour(int include_optional) {
  expected_ue_behaviour_t* expected_ue_behaviour = NULL;
  if (include_optional) {
    expected_ue_behaviour = expected_ue_behaviour_create(
      "0",
      56,
      null,
      56,
      null,
      56,
      null,
      list_createList(),
      null,
      null,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    expected_ue_behaviour = expected_ue_behaviour_create(
      "0",
      56,
      null,
      56,
      null,
      56,
      null,
      list_createList(),
      null,
      null,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return expected_ue_behaviour;
}


#ifdef expected_ue_behaviour_MAIN

void test_expected_ue_behaviour(int include_optional) {
    expected_ue_behaviour_t* expected_ue_behaviour_1 = instantiate_expected_ue_behaviour(include_optional);

	cJSON* jsonexpected_ue_behaviour_1 = expected_ue_behaviour_convertToJSON(expected_ue_behaviour_1);
	printf("expected_ue_behaviour :\n%s\n", cJSON_Print(jsonexpected_ue_behaviour_1));
	expected_ue_behaviour_t* expected_ue_behaviour_2 = expected_ue_behaviour_parseFromJSON(jsonexpected_ue_behaviour_1);
	cJSON* jsonexpected_ue_behaviour_2 = expected_ue_behaviour_convertToJSON(expected_ue_behaviour_2);
	printf("repeating expected_ue_behaviour:\n%s\n", cJSON_Print(jsonexpected_ue_behaviour_2));
}

int main() {
  test_expected_ue_behaviour(1);
  test_expected_ue_behaviour(0);

  printf("Hello world \n");
  return 0;
}

#endif // expected_ue_behaviour_MAIN
#endif // expected_ue_behaviour_TEST
