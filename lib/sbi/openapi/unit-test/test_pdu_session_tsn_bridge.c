#ifndef pdu_session_tsn_bridge_TEST
#define pdu_session_tsn_bridge_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_tsn_bridge_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_tsn_bridge.h"
pdu_session_tsn_bridge_t* instantiate_pdu_session_tsn_bridge(int include_optional);

#include "test_tsn_bridge_info.c"
#include "test_bridge_management_container.c"
#include "test_port_management_container.c"
#include "test_snssai.c"


pdu_session_tsn_bridge_t* instantiate_pdu_session_tsn_bridge(int include_optional) {
  pdu_session_tsn_bridge_t* pdu_session_tsn_bridge = NULL;
  if (include_optional) {
    pdu_session_tsn_bridge = pdu_session_tsn_bridge_create(
       // false, not to have infinite recursion
      instantiate_tsn_bridge_info(0),
       // false, not to have infinite recursion
      instantiate_bridge_management_container(0),
       // false, not to have infinite recursion
      instantiate_port_management_container(0),
      list_createList(),
      "198.51.100.1",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      "2001:db8:abcd:12::0/64"
    );
  } else {
    pdu_session_tsn_bridge = pdu_session_tsn_bridge_create(
      NULL,
      NULL,
      NULL,
      list_createList(),
      "198.51.100.1",
      "0",
      NULL,
      "0",
      "2001:db8:abcd:12::0/64"
    );
  }

  return pdu_session_tsn_bridge;
}


#ifdef pdu_session_tsn_bridge_MAIN

void test_pdu_session_tsn_bridge(int include_optional) {
    pdu_session_tsn_bridge_t* pdu_session_tsn_bridge_1 = instantiate_pdu_session_tsn_bridge(include_optional);

	cJSON* jsonpdu_session_tsn_bridge_1 = pdu_session_tsn_bridge_convertToJSON(pdu_session_tsn_bridge_1);
	printf("pdu_session_tsn_bridge :\n%s\n", cJSON_Print(jsonpdu_session_tsn_bridge_1));
	pdu_session_tsn_bridge_t* pdu_session_tsn_bridge_2 = pdu_session_tsn_bridge_parseFromJSON(jsonpdu_session_tsn_bridge_1);
	cJSON* jsonpdu_session_tsn_bridge_2 = pdu_session_tsn_bridge_convertToJSON(pdu_session_tsn_bridge_2);
	printf("repeating pdu_session_tsn_bridge:\n%s\n", cJSON_Print(jsonpdu_session_tsn_bridge_2));
}

int main() {
  test_pdu_session_tsn_bridge(1);
  test_pdu_session_tsn_bridge(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_tsn_bridge_MAIN
#endif // pdu_session_tsn_bridge_TEST
