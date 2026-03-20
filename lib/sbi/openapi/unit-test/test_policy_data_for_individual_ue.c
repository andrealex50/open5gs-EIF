#ifndef policy_data_for_individual_ue_TEST
#define policy_data_for_individual_ue_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_data_for_individual_ue_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_data_for_individual_ue.h"
policy_data_for_individual_ue_t* instantiate_policy_data_for_individual_ue(int include_optional);

#include "test_ue_policy_set.c"
#include "test_sm_policy_data.c"
#include "test_am_policy_data.c"


policy_data_for_individual_ue_t* instantiate_policy_data_for_individual_ue(int include_optional) {
  policy_data_for_individual_ue_t* policy_data_for_individual_ue = NULL;
  if (include_optional) {
    policy_data_for_individual_ue = policy_data_for_individual_ue_create(
       // false, not to have infinite recursion
      instantiate_ue_policy_set(0),
       // false, not to have infinite recursion
      instantiate_sm_policy_data(0),
       // false, not to have infinite recursion
      instantiate_am_policy_data(0),
      list_createList(),
      list_createList()
    );
  } else {
    policy_data_for_individual_ue = policy_data_for_individual_ue_create(
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return policy_data_for_individual_ue;
}


#ifdef policy_data_for_individual_ue_MAIN

void test_policy_data_for_individual_ue(int include_optional) {
    policy_data_for_individual_ue_t* policy_data_for_individual_ue_1 = instantiate_policy_data_for_individual_ue(include_optional);

	cJSON* jsonpolicy_data_for_individual_ue_1 = policy_data_for_individual_ue_convertToJSON(policy_data_for_individual_ue_1);
	printf("policy_data_for_individual_ue :\n%s\n", cJSON_Print(jsonpolicy_data_for_individual_ue_1));
	policy_data_for_individual_ue_t* policy_data_for_individual_ue_2 = policy_data_for_individual_ue_parseFromJSON(jsonpolicy_data_for_individual_ue_1);
	cJSON* jsonpolicy_data_for_individual_ue_2 = policy_data_for_individual_ue_convertToJSON(policy_data_for_individual_ue_2);
	printf("repeating policy_data_for_individual_ue:\n%s\n", cJSON_Print(jsonpolicy_data_for_individual_ue_2));
}

int main() {
  test_policy_data_for_individual_ue(1);
  test_policy_data_for_individual_ue(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_data_for_individual_ue_MAIN
#endif // policy_data_for_individual_ue_TEST
