#ifndef immediate_report_TEST
#define immediate_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define immediate_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/immediate_report.h"
immediate_report_t* instantiate_immediate_report(int include_optional);

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


immediate_report_t* instantiate_immediate_report(int include_optional) {
  immediate_report_t* immediate_report = NULL;
  if (include_optional) {
    immediate_report = immediate_report_create(
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
    immediate_report = immediate_report_create(
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

  return immediate_report;
}


#ifdef immediate_report_MAIN

void test_immediate_report(int include_optional) {
    immediate_report_t* immediate_report_1 = instantiate_immediate_report(include_optional);

	cJSON* jsonimmediate_report_1 = immediate_report_convertToJSON(immediate_report_1);
	printf("immediate_report :\n%s\n", cJSON_Print(jsonimmediate_report_1));
	immediate_report_t* immediate_report_2 = immediate_report_parseFromJSON(jsonimmediate_report_1);
	cJSON* jsonimmediate_report_2 = immediate_report_convertToJSON(immediate_report_2);
	printf("repeating immediate_report:\n%s\n", cJSON_Print(jsonimmediate_report_2));
}

int main() {
  test_immediate_report(1);
  test_immediate_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // immediate_report_MAIN
#endif // immediate_report_TEST
