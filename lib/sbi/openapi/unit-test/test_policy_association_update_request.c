#ifndef policy_association_update_request_TEST
#define policy_association_update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_association_update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_association_update_request.h"
policy_association_update_request_t* instantiate_policy_association_update_request(int include_optional);

#include "test_service_area_restriction.c"
#include "test_wireline_service_area_restriction.c"
#include "test_smf_selection_data.c"
#include "test_ambr.c"
#include "test_user_location.c"
#include "test_trace_data.c"
#include "test_guami.c"


policy_association_update_request_t* instantiate_policy_association_update_request(int include_optional) {
  policy_association_update_request_t* policy_association_update_request = NULL;
  if (include_optional) {
    policy_association_update_request = policy_association_update_request_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_service_area_restriction(0),
       // false, not to have infinite recursion
      instantiate_wireline_service_area_restriction(0),
      1,
       // false, not to have infinite recursion
      instantiate_smf_selection_data(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
       // false, not to have infinite recursion
      instantiate_guami(0),
      list_createList()
    );
  } else {
    policy_association_update_request = policy_association_update_request_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      1,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      list_createList()
    );
  }

  return policy_association_update_request;
}


#ifdef policy_association_update_request_MAIN

void test_policy_association_update_request(int include_optional) {
    policy_association_update_request_t* policy_association_update_request_1 = instantiate_policy_association_update_request(include_optional);

	cJSON* jsonpolicy_association_update_request_1 = policy_association_update_request_convertToJSON(policy_association_update_request_1);
	printf("policy_association_update_request :\n%s\n", cJSON_Print(jsonpolicy_association_update_request_1));
	policy_association_update_request_t* policy_association_update_request_2 = policy_association_update_request_parseFromJSON(jsonpolicy_association_update_request_1);
	cJSON* jsonpolicy_association_update_request_2 = policy_association_update_request_convertToJSON(policy_association_update_request_2);
	printf("repeating policy_association_update_request:\n%s\n", cJSON_Print(jsonpolicy_association_update_request_2));
}

int main() {
  test_policy_association_update_request(1);
  test_policy_association_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_association_update_request_MAIN
#endif // policy_association_update_request_TEST
