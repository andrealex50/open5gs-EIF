#ifndef subscription_data_sets_TEST
#define subscription_data_sets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_data_sets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_data_sets.h"
subscription_data_sets_t* instantiate_subscription_data_sets(int include_optional);

#include "test_access_and_mobility_subscription_data.c"
#include "test_smf_selection_subscription_data.c"
#include "test_ue_context_in_amf_data.c"
#include "test_ue_context_in_smf_data.c"
#include "test_ue_context_in_smsf_data.c"
#include "test_sms_subscription_data.c"
#include "test_sm_subs_data.c"
#include "test_trace_data_1.c"
#include "test_sms_management_subscription_data.c"
#include "test_lcs_privacy_data.c"
#include "test_lcs_mo_data.c"
#include "test_v2x_subscription_data.c"
#include "test_lcs_broadcast_assistance_types_data.c"
#include "test_prose_subscription_data.c"
#include "test_mbs_subscription_data.c"
#include "test_uc_subscription_data.c"


subscription_data_sets_t* instantiate_subscription_data_sets(int include_optional) {
  subscription_data_sets_t* subscription_data_sets = NULL;
  if (include_optional) {
    subscription_data_sets = subscription_data_sets_create(
       // false, not to have infinite recursion
      instantiate_access_and_mobility_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_smf_selection_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_ue_context_in_amf_data(0),
       // false, not to have infinite recursion
      instantiate_ue_context_in_smf_data(0),
       // false, not to have infinite recursion
      instantiate_ue_context_in_smsf_data(0),
       // false, not to have infinite recursion
      instantiate_sms_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_sm_subs_data(0),
       // false, not to have infinite recursion
      instantiate_trace_data_1(0),
       // false, not to have infinite recursion
      instantiate_sms_management_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_privacy_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_mo_data(0),
       // false, not to have infinite recursion
      instantiate_v2x_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_broadcast_assistance_types_data(0),
       // false, not to have infinite recursion
      instantiate_prose_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_mbs_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_uc_subscription_data(0)
    );
  } else {
    subscription_data_sets = subscription_data_sets_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return subscription_data_sets;
}


#ifdef subscription_data_sets_MAIN

void test_subscription_data_sets(int include_optional) {
    subscription_data_sets_t* subscription_data_sets_1 = instantiate_subscription_data_sets(include_optional);

	cJSON* jsonsubscription_data_sets_1 = subscription_data_sets_convertToJSON(subscription_data_sets_1);
	printf("subscription_data_sets :\n%s\n", cJSON_Print(jsonsubscription_data_sets_1));
	subscription_data_sets_t* subscription_data_sets_2 = subscription_data_sets_parseFromJSON(jsonsubscription_data_sets_1);
	cJSON* jsonsubscription_data_sets_2 = subscription_data_sets_convertToJSON(subscription_data_sets_2);
	printf("repeating subscription_data_sets:\n%s\n", cJSON_Print(jsonsubscription_data_sets_2));
}

int main() {
  test_subscription_data_sets(1);
  test_subscription_data_sets(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_data_sets_MAIN
#endif // subscription_data_sets_TEST
