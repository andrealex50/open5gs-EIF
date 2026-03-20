#ifndef policy_data_subscription_TEST
#define policy_data_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_data_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_data_subscription.h"
policy_data_subscription_t* instantiate_policy_data_subscription(int include_optional);



policy_data_subscription_t* instantiate_policy_data_subscription(int include_optional) {
  policy_data_subscription_t* policy_data_subscription = NULL;
  if (include_optional) {
    policy_data_subscription = policy_data_subscription_create(
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  } else {
    policy_data_subscription = policy_data_subscription_create(
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  }

  return policy_data_subscription;
}


#ifdef policy_data_subscription_MAIN

void test_policy_data_subscription(int include_optional) {
    policy_data_subscription_t* policy_data_subscription_1 = instantiate_policy_data_subscription(include_optional);

	cJSON* jsonpolicy_data_subscription_1 = policy_data_subscription_convertToJSON(policy_data_subscription_1);
	printf("policy_data_subscription :\n%s\n", cJSON_Print(jsonpolicy_data_subscription_1));
	policy_data_subscription_t* policy_data_subscription_2 = policy_data_subscription_parseFromJSON(jsonpolicy_data_subscription_1);
	cJSON* jsonpolicy_data_subscription_2 = policy_data_subscription_convertToJSON(policy_data_subscription_2);
	printf("repeating policy_data_subscription:\n%s\n", cJSON_Print(jsonpolicy_data_subscription_2));
}

int main() {
  test_policy_data_subscription(1);
  test_policy_data_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_data_subscription_MAIN
#endif // policy_data_subscription_TEST
