#ifndef policy_data_subset_TEST
#define policy_data_subset_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_data_subset_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_data_subset.h"
policy_data_subset_t* instantiate_policy_data_subset(int include_optional);



policy_data_subset_t* instantiate_policy_data_subset(int include_optional) {
  policy_data_subset_t* policy_data_subset = NULL;
  if (include_optional) {
    policy_data_subset = policy_data_subset_create(
    );
  } else {
    policy_data_subset = policy_data_subset_create(
    );
  }

  return policy_data_subset;
}


#ifdef policy_data_subset_MAIN

void test_policy_data_subset(int include_optional) {
    policy_data_subset_t* policy_data_subset_1 = instantiate_policy_data_subset(include_optional);

	cJSON* jsonpolicy_data_subset_1 = policy_data_subset_convertToJSON(policy_data_subset_1);
	printf("policy_data_subset :\n%s\n", cJSON_Print(jsonpolicy_data_subset_1));
	policy_data_subset_t* policy_data_subset_2 = policy_data_subset_parseFromJSON(jsonpolicy_data_subset_1);
	cJSON* jsonpolicy_data_subset_2 = policy_data_subset_convertToJSON(policy_data_subset_2);
	printf("repeating policy_data_subset:\n%s\n", cJSON_Print(jsonpolicy_data_subset_2));
}

int main() {
  test_policy_data_subset(1);
  test_policy_data_subset(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_data_subset_MAIN
#endif // policy_data_subset_TEST
