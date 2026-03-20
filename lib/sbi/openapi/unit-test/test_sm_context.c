#ifndef sm_context_TEST
#define sm_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context.h"
sm_context_t* instantiate_sm_context(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"
#include "test_ambr.c"
#include "test_eps_pdn_cnx_info.c"
#include "test_up_security.c"
#include "test_tunnel_info.c"
#include "test_charging_information.c"
#include "test_roaming_charging_profile.c"
#include "test_ip_address.c"
#include "test_redundant_pdu_session_information.c"
#include "test_qos_flow_tunnel.c"
#include "test_qos_flow_tunnel.c"


sm_context_t* instantiate_sm_context(int include_optional) {
  sm_context_t* sm_context = NULL;
  if (include_optional) {
    sm_context = sm_context_create(
      0,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      nsmf_pdusession_sm_context__IPV4,
      "a",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context__VERIFIED,
      "0",
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_ambr(0),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context__NF_INSTANCE_BINDING,
      1,
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
       // false, not to have infinite recursion
      instantiate_eps_pdn_cnx_info(0),
      list_createList(),
      nsmf_pdusession_sm_context__64_KBPS,
      nsmf_pdusession_sm_context__64_KBPS,
      1,
       // false, not to have infinite recursion
      instantiate_up_security(0),
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      "a",
       // false, not to have infinite recursion
      instantiate_charging_information(0),
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0),
      1,
      56,
       // false, not to have infinite recursion
      instantiate_ip_address(0),
       // false, not to have infinite recursion
      instantiate_redundant_pdu_session_information(0),
       // false, not to have infinite recursion
      instantiate_qos_flow_tunnel(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_qos_flow_tunnel(0),
      list_createList(),
      1,
      "0",
      nsmf_pdusession_sm_context__GEO,
      "a",
      1,
      1,
      1,
      1
    );
  } else {
    sm_context = sm_context_create(
      0,
      "0",
      "0",
      NULL,
      NULL,
      nsmf_pdusession_sm_context__IPV4,
      "a",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context__VERIFIED,
      "0",
      "0",
      56,
      NULL,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      nsmf_pdusession_sm_context__NF_INSTANCE_BINDING,
      1,
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      NULL,
      list_createList(),
      nsmf_pdusession_sm_context__64_KBPS,
      nsmf_pdusession_sm_context__64_KBPS,
      1,
      NULL,
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      1,
      NULL,
      "a",
      NULL,
      NULL,
      1,
      56,
      NULL,
      NULL,
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      1,
      "0",
      nsmf_pdusession_sm_context__GEO,
      "a",
      1,
      1,
      1,
      1
    );
  }

  return sm_context;
}


#ifdef sm_context_MAIN

void test_sm_context(int include_optional) {
    sm_context_t* sm_context_1 = instantiate_sm_context(include_optional);

	cJSON* jsonsm_context_1 = sm_context_convertToJSON(sm_context_1);
	printf("sm_context :\n%s\n", cJSON_Print(jsonsm_context_1));
	sm_context_t* sm_context_2 = sm_context_parseFromJSON(jsonsm_context_1);
	cJSON* jsonsm_context_2 = sm_context_convertToJSON(sm_context_2);
	printf("repeating sm_context:\n%s\n", cJSON_Print(jsonsm_context_2));
}

int main() {
  test_sm_context(1);
  test_sm_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_MAIN
#endif // sm_context_TEST
