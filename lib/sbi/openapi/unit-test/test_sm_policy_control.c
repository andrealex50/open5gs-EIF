#ifndef sm_policy_control_TEST
#define sm_policy_control_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_control_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_control.h"
sm_policy_control_t* instantiate_sm_policy_control(int include_optional);

#include "test_sm_policy_context_data.c"
#include "test_sm_policy_decision.c"


sm_policy_control_t* instantiate_sm_policy_control(int include_optional) {
  sm_policy_control_t* sm_policy_control = NULL;
  if (include_optional) {
    sm_policy_control = sm_policy_control_create(
       // false, not to have infinite recursion
      instantiate_sm_policy_context_data(0),
       // false, not to have infinite recursion
      instantiate_sm_policy_decision(0)
    );
  } else {
    sm_policy_control = sm_policy_control_create(
      NULL,
      NULL
    );
  }

  return sm_policy_control;
}


#ifdef sm_policy_control_MAIN

void test_sm_policy_control(int include_optional) {
    sm_policy_control_t* sm_policy_control_1 = instantiate_sm_policy_control(include_optional);

	cJSON* jsonsm_policy_control_1 = sm_policy_control_convertToJSON(sm_policy_control_1);
	printf("sm_policy_control :\n%s\n", cJSON_Print(jsonsm_policy_control_1));
	sm_policy_control_t* sm_policy_control_2 = sm_policy_control_parseFromJSON(jsonsm_policy_control_1);
	cJSON* jsonsm_policy_control_2 = sm_policy_control_convertToJSON(sm_policy_control_2);
	printf("repeating sm_policy_control:\n%s\n", cJSON_Print(jsonsm_policy_control_2));
}

int main() {
  test_sm_policy_control(1);
  test_sm_policy_control(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_control_MAIN
#endif // sm_policy_control_TEST
