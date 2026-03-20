#ifndef policy_update_TEST
#define policy_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_update.h"
policy_update_t* instantiate_policy_update(int include_optional);

#include "test_service_area_restriction.c"
#include "test_wireline_service_area_restriction.c"
#include "test_smf_selection_data.c"
#include "test_ambr.c"
#include "test_pcf_ue_callback_info.c"
#include "test_as_time_distribution_param.c"


policy_update_t* instantiate_policy_update(int include_optional) {
  policy_update_t* policy_update = NULL;
  if (include_optional) {
    policy_update = policy_update_create(
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_service_area_restriction(0),
       // false, not to have infinite recursion
      instantiate_wireline_service_area_restriction(0),
      1,
      1,
       // false, not to have infinite recursion
      instantiate_smf_selection_data(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_as_time_distribution_param(0)
    );
  } else {
    policy_update = policy_update_create(
      "0",
      list_createList(),
      NULL,
      NULL,
      1,
      1,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      NULL
    );
  }

  return policy_update;
}


#ifdef policy_update_MAIN

void test_policy_update(int include_optional) {
    policy_update_t* policy_update_1 = instantiate_policy_update(include_optional);

	cJSON* jsonpolicy_update_1 = policy_update_convertToJSON(policy_update_1);
	printf("policy_update :\n%s\n", cJSON_Print(jsonpolicy_update_1));
	policy_update_t* policy_update_2 = policy_update_parseFromJSON(jsonpolicy_update_1);
	cJSON* jsonpolicy_update_2 = policy_update_convertToJSON(policy_update_2);
	printf("repeating policy_update:\n%s\n", cJSON_Print(jsonpolicy_update_2));
}

int main() {
  test_policy_update(1);
  test_policy_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_update_MAIN
#endif // policy_update_TEST
