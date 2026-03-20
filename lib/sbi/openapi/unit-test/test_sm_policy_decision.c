#ifndef sm_policy_decision_TEST
#define sm_policy_decision_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_decision_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_decision.h"
sm_policy_decision_t* instantiate_sm_policy_decision(int include_optional);

#include "test_charging_information.c"
#include "test_requested_usage_data.c"
#include "test_bridge_management_container.c"
#include "test_port_management_container.c"


sm_policy_decision_t* instantiate_sm_policy_decision(int include_optional) {
  sm_policy_decision_t* sm_policy_decision = NULL;
  if (include_optional) {
    sm_policy_decision = sm_policy_decision_create(
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_charging_information(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_requested_usage_data(0),
      list_createList(),
      56,
      56,
      npcf_smpolicycontrol_api_sm_policy_decision__GENERAL,
      npcf_smpolicycontrol_api_sm_policy_decision__UNSPECIFIED,
      "a",
       // false, not to have infinite recursion
      instantiate_bridge_management_container(0),
       // false, not to have infinite recursion
      instantiate_port_management_container(0),
      list_createList(),
      1
    );
  } else {
    sm_policy_decision = sm_policy_decision_create(
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      1,
      1,
      1,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      56,
      56,
      npcf_smpolicycontrol_api_sm_policy_decision__GENERAL,
      npcf_smpolicycontrol_api_sm_policy_decision__UNSPECIFIED,
      "a",
      NULL,
      NULL,
      list_createList(),
      1
    );
  }

  return sm_policy_decision;
}


#ifdef sm_policy_decision_MAIN

void test_sm_policy_decision(int include_optional) {
    sm_policy_decision_t* sm_policy_decision_1 = instantiate_sm_policy_decision(include_optional);

	cJSON* jsonsm_policy_decision_1 = sm_policy_decision_convertToJSON(sm_policy_decision_1);
	printf("sm_policy_decision :\n%s\n", cJSON_Print(jsonsm_policy_decision_1));
	sm_policy_decision_t* sm_policy_decision_2 = sm_policy_decision_parseFromJSON(jsonsm_policy_decision_1);
	cJSON* jsonsm_policy_decision_2 = sm_policy_decision_convertToJSON(sm_policy_decision_2);
	printf("repeating sm_policy_decision:\n%s\n", cJSON_Print(jsonsm_policy_decision_2));
}

int main() {
  test_sm_policy_decision(1);
  test_sm_policy_decision(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_decision_MAIN
#endif // sm_policy_decision_TEST
