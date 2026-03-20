#ifndef sm_context_create_data_TEST
#define sm_context_create_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_create_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_create_data.h"
sm_context_create_data_t* instantiate_sm_context_create_data(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"
#include "test_guami.c"
#include "test_plmn_id_nid.c"
#include "test_ref_to_binary_data.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_trace_data.c"
#include "test_ng_ran_target_id.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_plmn_id_nid.c"
#include "test_small_data_rate_status.c"
#include "test_apn_rate_status.c"
#include "test_ddn_failure_subs.c"
#include "test_w_agf_info.c"
#include "test_tngf_info.c"
#include "test_twif_info.c"
#include "test_pcf_ue_callback_info.c"


sm_context_create_data_t* instantiate_sm_context_create_data(int include_optional) {
  sm_context_create_data_t* sm_context_create_data = NULL;
  if (include_optional) {
    sm_context_create_data = sm_context_create_data_create(
      "a",
      1,
      "a",
      "a",
      0,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      nsmf_pdusession_sm_context_create_data__INITIAL_REQUEST,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_create_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_create_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_create_data__NR,
      nsmf_pdusession_sm_context_create_data__IN_AREA,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      list_createList(),
      "0",
      nsmf_pdusession_sm_context_create_data__NONE,
      "0",
      "0",
      "0",
      "0",
      "a",
      nsmf_pdusession_sm_context_create_data__VERIFIED,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      "0",
      "0",
      56,
      nsmf_pdusession_sm_context_create_data__NONE,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ng_ran_target_id(0),
      "a",
      1,
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_create_data__PDU_RES_SETUP_REQ,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_create_data__PDU_RES_SETUP_REQ,
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context_create_data__NF_INSTANCE_BINDING,
      nsmf_pdusession_sm_context_create_data__ACTIVATED,
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_apn_rate_status(0),
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ddn_failure_subs(0),
      1,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_w_agf_info(0),
       // false, not to have infinite recursion
      instantiate_tngf_info(0),
       // false, not to have infinite recursion
      instantiate_twif_info(0),
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      list_createList(),
      1,
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      nsmf_pdusession_sm_context_create_data__GEO,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    sm_context_create_data = sm_context_create_data_create(
      "a",
      1,
      "a",
      "a",
      0,
      "0",
      "0",
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      NULL,
      nsmf_pdusession_sm_context_create_data__INITIAL_REQUEST,
      NULL,
      nsmf_pdusession_sm_context_create_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_create_data__3GPP_ACCESS,
      nsmf_pdusession_sm_context_create_data__NR,
      nsmf_pdusession_sm_context_create_data__IN_AREA,
      NULL,
      "-08:00+1",
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      list_createList(),
      "0",
      nsmf_pdusession_sm_context_create_data__NONE,
      "0",
      "0",
      "0",
      "0",
      "a",
      nsmf_pdusession_sm_context_create_data__VERIFIED,
      list_createList(),
      NULL,
      "0",
      "0",
      56,
      nsmf_pdusession_sm_context_create_data__NONE,
      1,
      1,
      NULL,
      "a",
      1,
      1,
      1,
      1,
      1,
      NULL,
      nsmf_pdusession_sm_context_create_data__PDU_RES_SETUP_REQ,
      NULL,
      nsmf_pdusession_sm_context_create_data__PDU_RES_SETUP_REQ,
      "0",
      NULL,
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context_create_data__NF_INSTANCE_BINDING,
      nsmf_pdusession_sm_context_create_data__ACTIVATED,
      NULL,
      NULL,
      1,
      1,
      NULL,
      1,
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      list_createList(),
      1,
      "0",
      1,
      NULL,
      nsmf_pdusession_sm_context_create_data__GEO,
      1,
      1,
      1,
      1,
      1
    );
  }

  return sm_context_create_data;
}


#ifdef sm_context_create_data_MAIN

void test_sm_context_create_data(int include_optional) {
    sm_context_create_data_t* sm_context_create_data_1 = instantiate_sm_context_create_data(include_optional);

	cJSON* jsonsm_context_create_data_1 = sm_context_create_data_convertToJSON(sm_context_create_data_1);
	printf("sm_context_create_data :\n%s\n", cJSON_Print(jsonsm_context_create_data_1));
	sm_context_create_data_t* sm_context_create_data_2 = sm_context_create_data_parseFromJSON(jsonsm_context_create_data_1);
	cJSON* jsonsm_context_create_data_2 = sm_context_create_data_convertToJSON(sm_context_create_data_2);
	printf("repeating sm_context_create_data:\n%s\n", cJSON_Print(jsonsm_context_create_data_2));
}

int main() {
  test_sm_context_create_data(1);
  test_sm_context_create_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_create_data_MAIN
#endif // sm_context_create_data_TEST
