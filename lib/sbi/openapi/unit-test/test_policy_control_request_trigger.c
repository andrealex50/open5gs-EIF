#ifndef policy_control_request_trigger_TEST
#define policy_control_request_trigger_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_control_request_trigger_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_control_request_trigger.h"
policy_control_request_trigger_t* instantiate_policy_control_request_trigger(int include_optional);



policy_control_request_trigger_t* instantiate_policy_control_request_trigger(int include_optional) {
  policy_control_request_trigger_t* policy_control_request_trigger = NULL;
  if (include_optional) {
    policy_control_request_trigger = policy_control_request_trigger_create(
    );
  } else {
    policy_control_request_trigger = policy_control_request_trigger_create(
    );
  }

  return policy_control_request_trigger;
}


#ifdef policy_control_request_trigger_MAIN

void test_policy_control_request_trigger(int include_optional) {
    policy_control_request_trigger_t* policy_control_request_trigger_1 = instantiate_policy_control_request_trigger(include_optional);

	cJSON* jsonpolicy_control_request_trigger_1 = policy_control_request_trigger_convertToJSON(policy_control_request_trigger_1);
	printf("policy_control_request_trigger :\n%s\n", cJSON_Print(jsonpolicy_control_request_trigger_1));
	policy_control_request_trigger_t* policy_control_request_trigger_2 = policy_control_request_trigger_parseFromJSON(jsonpolicy_control_request_trigger_1);
	cJSON* jsonpolicy_control_request_trigger_2 = policy_control_request_trigger_convertToJSON(policy_control_request_trigger_2);
	printf("repeating policy_control_request_trigger:\n%s\n", cJSON_Print(jsonpolicy_control_request_trigger_2));
}

int main() {
  test_policy_control_request_trigger(1);
  test_policy_control_request_trigger(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_control_request_trigger_MAIN
#endif // policy_control_request_trigger_TEST
