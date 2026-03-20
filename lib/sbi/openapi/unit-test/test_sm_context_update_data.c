#ifndef sm_context_update_data_TEST
#define sm_context_update_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_update_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_update_data.h"
sm_context_update_data_t* instantiate_sm_context_update_data(int include_optional);

#include "test_guami.c"
#include "test_plmn_id_nid.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_ng_ran_target_id.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_ng_ap_cause.c"
#include "test_snssai.c"
#include "test_trace_data.c"
#include "test_ref_to_binary_data.c"
#include "test_exemption_ind.c"
#include "test_mo_exp_data_counter.c"
#include "test_ddn_failure_subs.c"
#include "test_pcf_ue_callback_info.c"


sm_context_update_data_t* instantiate_sm_context_update_data(int include_optional) {
  sm_context_update_data_t* sm_context_update_data = NULL;
  if (include_optional) {
    sm_context_update_data = sm_context_update_data_create(
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      list_createList(),
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__NR,
      nsmf_pdusession_sm_context_update_data__IN_AREA,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      nsmf_pdusession_sm_context_update_data__ACTIVATED,
      nsmf_pdusession_sm_context_update_data__NONE,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_update_data__PDU_RES_SETUP_REQ,
       // false, not to have infinite recursion
      instantiate_ng_ran_target_id(0),
      "0",
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      56,
      list_createList(),
      list_createList(),
      1,
      nsmf_pdusession_sm_context_update_data__REL_DUE_TO_HO,
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      nsmf_pdusession_sm_context_update_data__NONE,
      1,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_update_data__PDU_RES_SETUP_REQ,
      nsmf_pdusession_sm_context_update_data__REL_MAPDU_OVER_3GPP,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_exemption_ind(0),
      "a",
       // false, not to have infinite recursion
      instantiate_mo_exp_data_counter(0),
      1,
      "YQ==",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ddn_failure_subs(0),
      1,
      list_createList(),
      nsmf_pdusession_sm_context_update_data_SMPOLICYNOTIFYIND_true,
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      nsmf_pdusession_sm_context_update_data__GEO
    );
  } else {
    sm_context_update_data = sm_context_update_data_create(
      "a",
      "0",
      NULL,
      NULL,
      list_createList(),
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_update_data__NR,
      nsmf_pdusession_sm_context_update_data__IN_AREA,
      NULL,
      "-08:00+1",
      NULL,
      nsmf_pdusession_sm_context_update_data__ACTIVATED,
      nsmf_pdusession_sm_context_update_data__NONE,
      1,
      1,
      NULL,
      NULL,
      nsmf_pdusession_sm_context_update_data__PDU_RES_SETUP_REQ,
      NULL,
      "0",
      "0",
      1,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      56,
      list_createList(),
      list_createList(),
      1,
      nsmf_pdusession_sm_context_update_data__REL_DUE_TO_HO,
      NULL,
      0,
      NULL,
      NULL,
      nsmf_pdusession_sm_context_update_data__NONE,
      1,
      NULL,
      nsmf_pdusession_sm_context_update_data__PDU_RES_SETUP_REQ,
      nsmf_pdusession_sm_context_update_data__REL_MAPDU_OVER_3GPP,
      1,
      1,
      NULL,
      "a",
      NULL,
      1,
      "YQ==",
      list_createList(),
      NULL,
      1,
      list_createList(),
      nsmf_pdusession_sm_context_update_data_SMPOLICYNOTIFYIND_true,
      NULL,
      nsmf_pdusession_sm_context_update_data__GEO
    );
  }

  return sm_context_update_data;
}


#ifdef sm_context_update_data_MAIN

void test_sm_context_update_data(int include_optional) {
    sm_context_update_data_t* sm_context_update_data_1 = instantiate_sm_context_update_data(include_optional);

	cJSON* jsonsm_context_update_data_1 = sm_context_update_data_convertToJSON(sm_context_update_data_1);
	printf("sm_context_update_data :\n%s\n", cJSON_Print(jsonsm_context_update_data_1));
	sm_context_update_data_t* sm_context_update_data_2 = sm_context_update_data_parseFromJSON(jsonsm_context_update_data_1);
	cJSON* jsonsm_context_update_data_2 = sm_context_update_data_convertToJSON(sm_context_update_data_2);
	printf("repeating sm_context_update_data:\n%s\n", cJSON_Print(jsonsm_context_update_data_2));
}

int main() {
  test_sm_context_update_data(1);
  test_sm_context_update_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_update_data_MAIN
#endif // sm_context_update_data_TEST
