#ifndef pdu_session_created_data_TEST
#define pdu_session_created_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_created_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_created_data.h"
pdu_session_created_data_t* instantiate_pdu_session_created_data(int include_optional);

#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_tunnel_info.c"
#include "test_ambr.c"
#include "test_snssai.c"
#include "test_ref_to_binary_data.c"
#include "test_eps_pdn_cnx_info.c"
#include "test_up_security.c"
#include "test_roaming_charging_profile.c"
#include "test_ip_address.c"
#include "test_redundant_pdu_session_information.c"


pdu_session_created_data_t* instantiate_pdu_session_created_data(int include_optional) {
  pdu_session_created_data_t* pdu_session_created_data = NULL;
  if (include_optional) {
    pdu_session_created_data = pdu_session_created_data_create(
      nsmf_pdusession_pdu_session_created_data__IPV4,
      "a",
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
      list_createList(),
      "0",
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_snssai(0),
      1,
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_eps_pdn_cnx_info(0),
      list_createList(),
      "a",
      nsmf_pdusession_pdu_session_created_data__64_KBPS,
      nsmf_pdusession_pdu_session_created_data__64_KBPS,
      1,
      "a",
       // false, not to have infinite recursion
      instantiate_up_security(0),
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0),
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1,
      1,
      "a",
      1,
      1,
      "a",
      56,
       // false, not to have infinite recursion
      instantiate_ip_address(0),
       // false, not to have infinite recursion
      instantiate_redundant_pdu_session_information(0),
      1,
      "0",
      "0"
    );
  } else {
    pdu_session_created_data = pdu_session_created_data_create(
      nsmf_pdusession_pdu_session_created_data__IPV4,
      "a",
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      "0",
      "0",
      0,
      NULL,
      1,
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      NULL,
      NULL,
      list_createList(),
      "a",
      nsmf_pdusession_pdu_session_created_data__64_KBPS,
      nsmf_pdusession_pdu_session_created_data__64_KBPS,
      1,
      "a",
      NULL,
      NULL,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1,
      1,
      "a",
      1,
      1,
      "a",
      56,
      NULL,
      NULL,
      1,
      "0",
      "0"
    );
  }

  return pdu_session_created_data;
}


#ifdef pdu_session_created_data_MAIN

void test_pdu_session_created_data(int include_optional) {
    pdu_session_created_data_t* pdu_session_created_data_1 = instantiate_pdu_session_created_data(include_optional);

	cJSON* jsonpdu_session_created_data_1 = pdu_session_created_data_convertToJSON(pdu_session_created_data_1);
	printf("pdu_session_created_data :\n%s\n", cJSON_Print(jsonpdu_session_created_data_1));
	pdu_session_created_data_t* pdu_session_created_data_2 = pdu_session_created_data_parseFromJSON(jsonpdu_session_created_data_1);
	cJSON* jsonpdu_session_created_data_2 = pdu_session_created_data_convertToJSON(pdu_session_created_data_2);
	printf("repeating pdu_session_created_data:\n%s\n", cJSON_Print(jsonpdu_session_created_data_2));
}

int main() {
  test_pdu_session_created_data(1);
  test_pdu_session_created_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_created_data_MAIN
#endif // pdu_session_created_data_TEST
