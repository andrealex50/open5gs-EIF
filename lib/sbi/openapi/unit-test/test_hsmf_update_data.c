#ifndef hsmf_update_data_TEST
#define hsmf_update_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hsmf_update_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hsmf_update_data.h"
hsmf_update_data_t* instantiate_hsmf_update_data(int include_optional);

#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_plmn_id_nid.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_ng_ap_cause.c"
#include "test_ulcl_bp_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_roaming_charging_profile.c"
#include "test_mo_exp_data_counter.c"
#include "test_vplmn_qos.c"
#include "test_security_result.c"
#include "test_up_security_info.c"
#include "test_guami.c"
#include "test_pcf_ue_callback_info.c"


hsmf_update_data_t* instantiate_hsmf_update_data(int include_optional) {
  hsmf_update_data_t* hsmf_update_data = NULL;
  if (include_optional) {
    hsmf_update_data = hsmf_update_data_create(
      nsmf_pdusession_hsmf_update_data__UE_REQ_PDU_SES_MOD,
      "a",
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      nsmf_pdusession_hsmf_update_data__3GPP_ACCESS,
      nsmf_pdusession_hsmf_update_data__3GPP_ACCESS,
      nsmf_pdusession_hsmf_update_data__NR,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      1,
      0,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      nsmf_pdusession_hsmf_update_data__REL_DUE_TO_HO,
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
      1,
      nsmf_pdusession_hsmf_update_data__NONE,
      list_createList(),
      list_createList(),
      1,
      nsmf_pdusession_hsmf_update_data__REL_MAPDU_OVER_3GPP,
      1,
      1,
      nsmf_pdusession_hsmf_update_data__3GA_UNAVAILABLE,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ulcl_bp_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
      nsmf_pdusession_hsmf_update_data__IN_AREA,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      10,
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0),
       // false, not to have infinite recursion
      instantiate_mo_exp_data_counter(0),
       // false, not to have infinite recursion
      instantiate_vplmn_qos(0),
       // false, not to have infinite recursion
      instantiate_security_result(0),
       // false, not to have infinite recursion
      instantiate_up_security_info(0),
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
      list_createList(),
      nsmf_pdusession_hsmf_update_data_SMPOLICYNOTIFYIND_true,
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      nsmf_pdusession_hsmf_update_data__GEO,
      nsmf_pdusession_hsmf_update_data__64_KBPS,
      nsmf_pdusession_hsmf_update_data__64_KBPS,
      nsmf_pdusession_hsmf_update_data__ACTIVATED
    );
  } else {
    hsmf_update_data = hsmf_update_data_create(
      nsmf_pdusession_hsmf_update_data__UE_REQ_PDU_SES_MOD,
      "a",
      NULL,
      NULL,
      NULL,
      NULL,
      nsmf_pdusession_hsmf_update_data__3GPP_ACCESS,
      nsmf_pdusession_hsmf_update_data__3GPP_ACCESS,
      nsmf_pdusession_hsmf_update_data__NR,
      NULL,
      "-08:00+1",
      NULL,
      1,
      0,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      nsmf_pdusession_hsmf_update_data__REL_DUE_TO_HO,
      NULL,
      0,
      1,
      nsmf_pdusession_hsmf_update_data__NONE,
      list_createList(),
      list_createList(),
      1,
      nsmf_pdusession_hsmf_update_data__REL_MAPDU_OVER_3GPP,
      1,
      1,
      nsmf_pdusession_hsmf_update_data__3GA_UNAVAILABLE,
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL,
      nsmf_pdusession_hsmf_update_data__IN_AREA,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      10,
      list_createList(),
      "a",
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      list_createList(),
      nsmf_pdusession_hsmf_update_data_SMPOLICYNOTIFYIND_true,
      NULL,
      nsmf_pdusession_hsmf_update_data__GEO,
      nsmf_pdusession_hsmf_update_data__64_KBPS,
      nsmf_pdusession_hsmf_update_data__64_KBPS,
      nsmf_pdusession_hsmf_update_data__ACTIVATED
    );
  }

  return hsmf_update_data;
}


#ifdef hsmf_update_data_MAIN

void test_hsmf_update_data(int include_optional) {
    hsmf_update_data_t* hsmf_update_data_1 = instantiate_hsmf_update_data(include_optional);

	cJSON* jsonhsmf_update_data_1 = hsmf_update_data_convertToJSON(hsmf_update_data_1);
	printf("hsmf_update_data :\n%s\n", cJSON_Print(jsonhsmf_update_data_1));
	hsmf_update_data_t* hsmf_update_data_2 = hsmf_update_data_parseFromJSON(jsonhsmf_update_data_1);
	cJSON* jsonhsmf_update_data_2 = hsmf_update_data_convertToJSON(hsmf_update_data_2);
	printf("repeating hsmf_update_data:\n%s\n", cJSON_Print(jsonhsmf_update_data_2));
}

int main() {
  test_hsmf_update_data(1);
  test_hsmf_update_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // hsmf_update_data_MAIN
#endif // hsmf_update_data_TEST
