#ifndef policy_association_TEST
#define policy_association_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_association_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_association.h"
policy_association_t* instantiate_policy_association(int include_optional);

#include "test_policy_association_request.c"
#include "test_service_area_restriction.c"
#include "test_wireline_service_area_restriction.c"
#include "test_smf_selection_data.c"
#include "test_ambr.c"
#include "test_pcf_ue_callback_info.c"
#include "test_as_time_distribution_param.c"


policy_association_t* instantiate_policy_association(int include_optional) {
  policy_association_t* policy_association = NULL;
  if (include_optional) {
    policy_association = policy_association_create(
       // false, not to have infinite recursion
      instantiate_policy_association_request(0),
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
      "a",
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_as_time_distribution_param(0)
    );
  } else {
    policy_association = policy_association_create(
      NULL,
      list_createList(),
      NULL,
      NULL,
      1,
      1,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      "a",
      NULL,
      list_createList(),
      NULL
    );
  }

  return policy_association;
}


#ifdef policy_association_MAIN

void test_policy_association(int include_optional) {
    policy_association_t* policy_association_1 = instantiate_policy_association(include_optional);

	cJSON* jsonpolicy_association_1 = policy_association_convertToJSON(policy_association_1);
	printf("policy_association :\n%s\n", cJSON_Print(jsonpolicy_association_1));
	policy_association_t* policy_association_2 = policy_association_parseFromJSON(jsonpolicy_association_1);
	cJSON* jsonpolicy_association_2 = policy_association_convertToJSON(policy_association_2);
	printf("repeating policy_association:\n%s\n", cJSON_Print(jsonpolicy_association_2));
}

int main() {
  test_policy_association(1);
  test_policy_association(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_association_MAIN
#endif // policy_association_TEST
