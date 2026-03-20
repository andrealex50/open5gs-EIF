#ifndef pdu_session_TEST
#define pdu_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session.h"
pdu_session_t* instantiate_pdu_session(int include_optional);

#include "test_plmn_id.c"
#include "test_snssai.c"


pdu_session_t* instantiate_pdu_session(int include_optional) {
  pdu_session_t* pdu_session = NULL;
  if (include_optional) {
    pdu_session = pdu_session_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    pdu_session = pdu_session_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return pdu_session;
}


#ifdef pdu_session_MAIN

void test_pdu_session(int include_optional) {
    pdu_session_t* pdu_session_1 = instantiate_pdu_session(include_optional);

	cJSON* jsonpdu_session_1 = pdu_session_convertToJSON(pdu_session_1);
	printf("pdu_session :\n%s\n", cJSON_Print(jsonpdu_session_1));
	pdu_session_t* pdu_session_2 = pdu_session_parseFromJSON(jsonpdu_session_1);
	cJSON* jsonpdu_session_2 = pdu_session_convertToJSON(pdu_session_2);
	printf("repeating pdu_session:\n%s\n", cJSON_Print(jsonpdu_session_2));
}

int main() {
  test_pdu_session(1);
  test_pdu_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_MAIN
#endif // pdu_session_TEST
