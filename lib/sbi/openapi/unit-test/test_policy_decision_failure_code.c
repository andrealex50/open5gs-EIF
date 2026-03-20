#ifndef policy_decision_failure_code_TEST
#define policy_decision_failure_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_decision_failure_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_decision_failure_code.h"
policy_decision_failure_code_t* instantiate_policy_decision_failure_code(int include_optional);



policy_decision_failure_code_t* instantiate_policy_decision_failure_code(int include_optional) {
  policy_decision_failure_code_t* policy_decision_failure_code = NULL;
  if (include_optional) {
    policy_decision_failure_code = policy_decision_failure_code_create(
    );
  } else {
    policy_decision_failure_code = policy_decision_failure_code_create(
    );
  }

  return policy_decision_failure_code;
}


#ifdef policy_decision_failure_code_MAIN

void test_policy_decision_failure_code(int include_optional) {
    policy_decision_failure_code_t* policy_decision_failure_code_1 = instantiate_policy_decision_failure_code(include_optional);

	cJSON* jsonpolicy_decision_failure_code_1 = policy_decision_failure_code_convertToJSON(policy_decision_failure_code_1);
	printf("policy_decision_failure_code :\n%s\n", cJSON_Print(jsonpolicy_decision_failure_code_1));
	policy_decision_failure_code_t* policy_decision_failure_code_2 = policy_decision_failure_code_parseFromJSON(jsonpolicy_decision_failure_code_1);
	cJSON* jsonpolicy_decision_failure_code_2 = policy_decision_failure_code_convertToJSON(policy_decision_failure_code_2);
	printf("repeating policy_decision_failure_code:\n%s\n", cJSON_Print(jsonpolicy_decision_failure_code_2));
}

int main() {
  test_policy_decision_failure_code(1);
  test_policy_decision_failure_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_decision_failure_code_MAIN
#endif // policy_decision_failure_code_TEST
