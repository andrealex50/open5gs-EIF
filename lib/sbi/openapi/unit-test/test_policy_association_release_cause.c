#ifndef policy_association_release_cause_TEST
#define policy_association_release_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_association_release_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_association_release_cause.h"
policy_association_release_cause_t* instantiate_policy_association_release_cause(int include_optional);



policy_association_release_cause_t* instantiate_policy_association_release_cause(int include_optional) {
  policy_association_release_cause_t* policy_association_release_cause = NULL;
  if (include_optional) {
    policy_association_release_cause = policy_association_release_cause_create(
    );
  } else {
    policy_association_release_cause = policy_association_release_cause_create(
    );
  }

  return policy_association_release_cause;
}


#ifdef policy_association_release_cause_MAIN

void test_policy_association_release_cause(int include_optional) {
    policy_association_release_cause_t* policy_association_release_cause_1 = instantiate_policy_association_release_cause(include_optional);

	cJSON* jsonpolicy_association_release_cause_1 = policy_association_release_cause_convertToJSON(policy_association_release_cause_1);
	printf("policy_association_release_cause :\n%s\n", cJSON_Print(jsonpolicy_association_release_cause_1));
	policy_association_release_cause_t* policy_association_release_cause_2 = policy_association_release_cause_parseFromJSON(jsonpolicy_association_release_cause_1);
	cJSON* jsonpolicy_association_release_cause_2 = policy_association_release_cause_convertToJSON(policy_association_release_cause_2);
	printf("repeating policy_association_release_cause:\n%s\n", cJSON_Print(jsonpolicy_association_release_cause_2));
}

int main() {
  test_policy_association_release_cause(1);
  test_policy_association_release_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_association_release_cause_MAIN
#endif // policy_association_release_cause_TEST
