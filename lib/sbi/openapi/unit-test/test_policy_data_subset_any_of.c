#ifndef policy_data_subset_any_of_TEST
#define policy_data_subset_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_data_subset_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_data_subset_any_of.h"
policy_data_subset_any_of_t* instantiate_policy_data_subset_any_of(int include_optional);



policy_data_subset_any_of_t* instantiate_policy_data_subset_any_of(int include_optional) {
  policy_data_subset_any_of_t* policy_data_subset_any_of = NULL;
  if (include_optional) {
    policy_data_subset_any_of = policy_data_subset_any_of_create(
    );
  } else {
    policy_data_subset_any_of = policy_data_subset_any_of_create(
    );
  }

  return policy_data_subset_any_of;
}


#ifdef policy_data_subset_any_of_MAIN

void test_policy_data_subset_any_of(int include_optional) {
    policy_data_subset_any_of_t* policy_data_subset_any_of_1 = instantiate_policy_data_subset_any_of(include_optional);

	cJSON* jsonpolicy_data_subset_any_of_1 = policy_data_subset_any_of_convertToJSON(policy_data_subset_any_of_1);
	printf("policy_data_subset_any_of :\n%s\n", cJSON_Print(jsonpolicy_data_subset_any_of_1));
	policy_data_subset_any_of_t* policy_data_subset_any_of_2 = policy_data_subset_any_of_parseFromJSON(jsonpolicy_data_subset_any_of_1);
	cJSON* jsonpolicy_data_subset_any_of_2 = policy_data_subset_any_of_convertToJSON(policy_data_subset_any_of_2);
	printf("repeating policy_data_subset_any_of:\n%s\n", cJSON_Print(jsonpolicy_data_subset_any_of_2));
}

int main() {
  test_policy_data_subset_any_of(1);
  test_policy_data_subset_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_data_subset_any_of_MAIN
#endif // policy_data_subset_any_of_TEST
