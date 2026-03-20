#ifndef sm_policy_association_release_cause_TEST
#define sm_policy_association_release_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_association_release_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_association_release_cause.h"
sm_policy_association_release_cause_t* instantiate_sm_policy_association_release_cause(int include_optional);



sm_policy_association_release_cause_t* instantiate_sm_policy_association_release_cause(int include_optional) {
  sm_policy_association_release_cause_t* sm_policy_association_release_cause = NULL;
  if (include_optional) {
    sm_policy_association_release_cause = sm_policy_association_release_cause_create(
    );
  } else {
    sm_policy_association_release_cause = sm_policy_association_release_cause_create(
    );
  }

  return sm_policy_association_release_cause;
}


#ifdef sm_policy_association_release_cause_MAIN

void test_sm_policy_association_release_cause(int include_optional) {
    sm_policy_association_release_cause_t* sm_policy_association_release_cause_1 = instantiate_sm_policy_association_release_cause(include_optional);

	cJSON* jsonsm_policy_association_release_cause_1 = sm_policy_association_release_cause_convertToJSON(sm_policy_association_release_cause_1);
	printf("sm_policy_association_release_cause :\n%s\n", cJSON_Print(jsonsm_policy_association_release_cause_1));
	sm_policy_association_release_cause_t* sm_policy_association_release_cause_2 = sm_policy_association_release_cause_parseFromJSON(jsonsm_policy_association_release_cause_1);
	cJSON* jsonsm_policy_association_release_cause_2 = sm_policy_association_release_cause_convertToJSON(sm_policy_association_release_cause_2);
	printf("repeating sm_policy_association_release_cause:\n%s\n", cJSON_Print(jsonsm_policy_association_release_cause_2));
}

int main() {
  test_sm_policy_association_release_cause(1);
  test_sm_policy_association_release_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_association_release_cause_MAIN
#endif // sm_policy_association_release_cause_TEST
