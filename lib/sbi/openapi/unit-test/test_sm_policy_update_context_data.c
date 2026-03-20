#ifndef sm_policy_update_context_data_TEST
#define sm_policy_update_context_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_update_context_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_update_context_data.h"
sm_policy_update_context_data_t* instantiate_sm_policy_update_context_data(int include_optional);

#include "test_additional_access_info.c"
#include "test_additional_access_info.c"
#include "test_plmn_id_nid.c"
#include "test_user_location.c"
#include "test_ambr.c"
#include "test_subscribed_default_qos.c"
#include "test_vplmn_qos.c"
#include "test_ue_initiated_resource_request.c"
#include "test_serving_nf_identity.c"
#include "test_trace_data.c"
#include "test_tsn_bridge_info.c"
#include "test_bridge_management_container.c"
#include "test_port_management_container.c"
#include "test_pcf_ue_callback_info.c"


sm_policy_update_context_data_t* instantiate_sm_policy_update_context_data(int include_optional) {
  sm_policy_update_context_data_t* sm_policy_update_context_data = NULL;
  if (include_optional) {
    sm_policy_update_context_data = sm_policy_update_context_data_create(
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_update_context_data__3GPP_ACCESS,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__NR,
       // false, not to have infinite recursion
      instantiate_additional_access_info(0),
       // false, not to have infinite recursion
      instantiate_additional_access_info(0),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      "198.51.100.1",
      "198.51.100.1",
      "0",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_ambr(0),
      "0",
       // false, not to have infinite recursion
      instantiate_subscribed_default_qos(0),
       // false, not to have infinite recursion
      instantiate_vplmn_qos(0),
      1,
      56,
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ue_initiated_resource_request(0),
      1,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__GENERAL,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__END_USER_SER_DENIED,
       // false, not to have infinite recursion
      instantiate_serving_nf_identity(0),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      npcf_smpolicycontrol_api_sm_policy_update_context_data__MA_PDU_REQUEST,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__MPTCP_ATSSS_LL_WITH_ASMODE_UL,
       // false, not to have infinite recursion
      instantiate_tsn_bridge_info(0),
       // false, not to have infinite recursion
      instantiate_bridge_management_container(0),
       // false, not to have infinite recursion
      instantiate_port_management_container(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_update_context_data__GEO,
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      list_createList(),
      1
    );
  } else {
    sm_policy_update_context_data = sm_policy_update_context_data_create(
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_update_context_data__3GPP_ACCESS,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__NR,
      NULL,
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      "198.51.100.1",
      "198.51.100.1",
      "0",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64",
      "a",
      "a",
      NULL,
      "0",
      NULL,
      NULL,
      1,
      56,
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      NULL,
      1,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__GENERAL,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__END_USER_SER_DENIED,
      NULL,
      NULL,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__MA_PDU_REQUEST,
      npcf_smpolicycontrol_api_sm_policy_update_context_data__MPTCP_ATSSS_LL_WITH_ASMODE_UL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_update_context_data__GEO,
      NULL,
      list_createList(),
      1
    );
  }

  return sm_policy_update_context_data;
}


#ifdef sm_policy_update_context_data_MAIN

void test_sm_policy_update_context_data(int include_optional) {
    sm_policy_update_context_data_t* sm_policy_update_context_data_1 = instantiate_sm_policy_update_context_data(include_optional);

	cJSON* jsonsm_policy_update_context_data_1 = sm_policy_update_context_data_convertToJSON(sm_policy_update_context_data_1);
	printf("sm_policy_update_context_data :\n%s\n", cJSON_Print(jsonsm_policy_update_context_data_1));
	sm_policy_update_context_data_t* sm_policy_update_context_data_2 = sm_policy_update_context_data_parseFromJSON(jsonsm_policy_update_context_data_1);
	cJSON* jsonsm_policy_update_context_data_2 = sm_policy_update_context_data_convertToJSON(sm_policy_update_context_data_2);
	printf("repeating sm_policy_update_context_data:\n%s\n", cJSON_Print(jsonsm_policy_update_context_data_2));
}

int main() {
  test_sm_policy_update_context_data(1);
  test_sm_policy_update_context_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_update_context_data_MAIN
#endif // sm_policy_update_context_data_TEST
