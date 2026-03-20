#ifndef provisioned_data_sets_TEST
#define provisioned_data_sets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define provisioned_data_sets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/provisioned_data_sets.h"
provisioned_data_sets_t* instantiate_provisioned_data_sets(int include_optional);

#include "test_access_and_mobility_subscription_data.c"
#include "test_smf_selection_subscription_data.c"
#include "test_sms_subscription_data.c"
#include "test_sm_subs_data.c"
#include "test_trace_data.c"
#include "test_sms_management_subscription_data.c"
#include "test_lcs_privacy_data.c"
#include "test_lcs_mo_data.c"
#include "test_lcs_broadcast_assistance_types_data.c"
#include "test_v2x_subscription_data.c"
#include "test_prose_subscription_data.c"
#include "test_odb_data.c"
#include "test_ee_profile_data.c"
#include "test_pp_profile_data.c"
#include "test_authorization_data.c"
#include "test_mbs_subscription_data_1.c"


provisioned_data_sets_t* instantiate_provisioned_data_sets(int include_optional) {
  provisioned_data_sets_t* provisioned_data_sets = NULL;
  if (include_optional) {
    provisioned_data_sets = provisioned_data_sets_create(
       // false, not to have infinite recursion
      instantiate_access_and_mobility_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_smf_selection_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_sms_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_sm_subs_data(0),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
       // false, not to have infinite recursion
      instantiate_sms_management_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_privacy_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_mo_data(0),
       // false, not to have infinite recursion
      instantiate_lcs_broadcast_assistance_types_data(0),
       // false, not to have infinite recursion
      instantiate_v2x_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_prose_subscription_data(0),
       // false, not to have infinite recursion
      instantiate_odb_data(0),
       // false, not to have infinite recursion
      instantiate_ee_profile_data(0),
       // false, not to have infinite recursion
      instantiate_pp_profile_data(0),
       // false, not to have infinite recursion
      instantiate_authorization_data(0),
       // false, not to have infinite recursion
      instantiate_mbs_subscription_data_1(0)
    );
  } else {
    provisioned_data_sets = provisioned_data_sets_create(
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

  return provisioned_data_sets;
}


#ifdef provisioned_data_sets_MAIN

void test_provisioned_data_sets(int include_optional) {
    provisioned_data_sets_t* provisioned_data_sets_1 = instantiate_provisioned_data_sets(include_optional);

	cJSON* jsonprovisioned_data_sets_1 = provisioned_data_sets_convertToJSON(provisioned_data_sets_1);
	printf("provisioned_data_sets :\n%s\n", cJSON_Print(jsonprovisioned_data_sets_1));
	provisioned_data_sets_t* provisioned_data_sets_2 = provisioned_data_sets_parseFromJSON(jsonprovisioned_data_sets_1);
	cJSON* jsonprovisioned_data_sets_2 = provisioned_data_sets_convertToJSON(provisioned_data_sets_2);
	printf("repeating provisioned_data_sets:\n%s\n", cJSON_Print(jsonprovisioned_data_sets_2));
}

int main() {
  test_provisioned_data_sets(1);
  test_provisioned_data_sets(0);

  printf("Hello world \n");
  return 0;
}

#endif // provisioned_data_sets_MAIN
#endif // provisioned_data_sets_TEST
