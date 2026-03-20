#ifndef policy_data_change_notification_TEST
#define policy_data_change_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define policy_data_change_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/policy_data_change_notification.h"
policy_data_change_notification_t* instantiate_policy_data_change_notification(int include_optional);

#include "test_am_policy_data.c"
#include "test_ue_policy_set.c"
#include "test_ue_policy_set.c"
#include "test_sm_policy_data.c"
#include "test_usage_mon_data.c"
#include "test_sponsor_connectivity_data.c"
#include "test_bdt_data.c"
#include "test_operator_specific_data_container.c"
#include "test_plmn_id_1.c"
#include "test_slice_policy_data.c"
#include "test_snssai.c"


policy_data_change_notification_t* instantiate_policy_data_change_notification(int include_optional) {
  policy_data_change_notification_t* policy_data_change_notification = NULL;
  if (include_optional) {
    policy_data_change_notification = policy_data_change_notification_create(
       // false, not to have infinite recursion
      instantiate_am_policy_data(0),
       // false, not to have infinite recursion
      instantiate_ue_policy_set(0),
       // false, not to have infinite recursion
      instantiate_ue_policy_set(0),
       // false, not to have infinite recursion
      instantiate_sm_policy_data(0),
       // false, not to have infinite recursion
      instantiate_usage_mon_data(0),
       // false, not to have infinite recursion
      instantiate_sponsor_connectivity_data(0),
       // false, not to have infinite recursion
      instantiate_bdt_data(0),
       // false, not to have infinite recursion
      instantiate_operator_specific_data_container(0),
      list_createList(),
      "a",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      list_createList(),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_slice_policy_data(0),
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    policy_data_change_notification = policy_data_change_notification_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      "a",
      "0",
      "0",
      "0",
      NULL,
      list_createList(),
      "0",
      list_createList(),
      NULL,
      NULL
    );
  }

  return policy_data_change_notification;
}


#ifdef policy_data_change_notification_MAIN

void test_policy_data_change_notification(int include_optional) {
    policy_data_change_notification_t* policy_data_change_notification_1 = instantiate_policy_data_change_notification(include_optional);

	cJSON* jsonpolicy_data_change_notification_1 = policy_data_change_notification_convertToJSON(policy_data_change_notification_1);
	printf("policy_data_change_notification :\n%s\n", cJSON_Print(jsonpolicy_data_change_notification_1));
	policy_data_change_notification_t* policy_data_change_notification_2 = policy_data_change_notification_parseFromJSON(jsonpolicy_data_change_notification_1);
	cJSON* jsonpolicy_data_change_notification_2 = policy_data_change_notification_convertToJSON(policy_data_change_notification_2);
	printf("repeating policy_data_change_notification:\n%s\n", cJSON_Print(jsonpolicy_data_change_notification_2));
}

int main() {
  test_policy_data_change_notification(1);
  test_policy_data_change_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // policy_data_change_notification_MAIN
#endif // policy_data_change_notification_TEST
