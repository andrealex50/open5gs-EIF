#ifndef pdu_session_create_data_TEST
#define pdu_session_create_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_create_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_create_data.h"
pdu_session_create_data_t* instantiate_pdu_session_create_data(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"
#include "test_plmn_id_nid.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_roaming_charging_profile.c"
#include "test_guami.c"
#include "test_small_data_rate_status.c"
#include "test_apn_rate_status.c"
#include "test_up_security_info.c"
#include "test_vplmn_qos.c"
#include "test_redundant_pdu_session_information.c"
#include "test_pcf_ue_callback_info.c"


pdu_session_create_data_t* instantiate_pdu_session_create_data(int include_optional) {
  pdu_session_create_data_t* pdu_session_create_data = NULL;
  if (include_optional) {
    pdu_session_create_data = pdu_session_create_data_create(
      "a",
      1,
      "a",
      0,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      nsmf_pdusession_pdu_session_create_data__INITIAL_REQUEST,
      list_createList(),
      "YQ==",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      nsmf_pdusession_pdu_session_create_data__3GPP_ACCESS,
      nsmf_pdusession_pdu_session_create_data__3GPP_ACCESS,
      nsmf_pdusession_pdu_session_create_data__NR,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "a",
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      "a",
      "0",
      "0",
      "0",
      "0",
      1,
      nsmf_pdusession_pdu_session_create_data__VERIFIED,
      1,
      "0",
      "0",
      56,
      nsmf_pdusession_pdu_session_create_data__NONE,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0),
      "a",
      0,
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
      nsmf_pdusession_pdu_session_create_data__64_KBPS,
      nsmf_pdusession_pdu_session_create_data__64_KBPS,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      nsmf_pdusession_pdu_session_create_data__IN_AREA,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_apn_rate_status(0),
      10,
       // false, not to have infinite recursion
      instantiate_up_security_info(0),
       // false, not to have infinite recursion
      instantiate_vplmn_qos(0),
      "0",
       // false, not to have infinite recursion
      instantiate_redundant_pdu_session_information(0),
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_pcf_ue_callback_info(0),
      nsmf_pdusession_pdu_session_create_data__GEO,
      1,
      nsmf_pdusession_pdu_session_create_data__ACTIVATED,
      1
    );
  } else {
    pdu_session_create_data = pdu_session_create_data_create(
      "a",
      1,
      "a",
      0,
      "0",
      "0",
      NULL,
      NULL,
      "0",
      "0",
      NULL,
      nsmf_pdusession_pdu_session_create_data__INITIAL_REQUEST,
      list_createList(),
      "YQ==",
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL,
      nsmf_pdusession_pdu_session_create_data__3GPP_ACCESS,
      nsmf_pdusession_pdu_session_create_data__3GPP_ACCESS,
      nsmf_pdusession_pdu_session_create_data__NR,
      NULL,
      "-08:00+1",
      NULL,
      "a",
      NULL,
      NULL,
      "a",
      "0",
      "0",
      "0",
      "0",
      1,
      nsmf_pdusession_pdu_session_create_data__VERIFIED,
      1,
      "0",
      "0",
      56,
      nsmf_pdusession_pdu_session_create_data__NONE,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "a",
      0,
      "a",
      "0",
      NULL,
      nsmf_pdusession_pdu_session_create_data__64_KBPS,
      nsmf_pdusession_pdu_session_create_data__64_KBPS,
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      nsmf_pdusession_pdu_session_create_data__IN_AREA,
      list_createList(),
      NULL,
      NULL,
      10,
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      1,
      NULL,
      nsmf_pdusession_pdu_session_create_data__GEO,
      1,
      nsmf_pdusession_pdu_session_create_data__ACTIVATED,
      1
    );
  }

  return pdu_session_create_data;
}


#ifdef pdu_session_create_data_MAIN

void test_pdu_session_create_data(int include_optional) {
    pdu_session_create_data_t* pdu_session_create_data_1 = instantiate_pdu_session_create_data(include_optional);

	cJSON* jsonpdu_session_create_data_1 = pdu_session_create_data_convertToJSON(pdu_session_create_data_1);
	printf("pdu_session_create_data :\n%s\n", cJSON_Print(jsonpdu_session_create_data_1));
	pdu_session_create_data_t* pdu_session_create_data_2 = pdu_session_create_data_parseFromJSON(jsonpdu_session_create_data_1);
	cJSON* jsonpdu_session_create_data_2 = pdu_session_create_data_convertToJSON(pdu_session_create_data_2);
	printf("repeating pdu_session_create_data:\n%s\n", cJSON_Print(jsonpdu_session_create_data_2));
}

int main() {
  test_pdu_session_create_data(1);
  test_pdu_session_create_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_create_data_MAIN
#endif // pdu_session_create_data_TEST
