#ifndef pdu_session_rel_cause_TEST
#define pdu_session_rel_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_rel_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_rel_cause.h"
pdu_session_rel_cause_t* instantiate_pdu_session_rel_cause(int include_optional);



pdu_session_rel_cause_t* instantiate_pdu_session_rel_cause(int include_optional) {
  pdu_session_rel_cause_t* pdu_session_rel_cause = NULL;
  if (include_optional) {
    pdu_session_rel_cause = pdu_session_rel_cause_create(
    );
  } else {
    pdu_session_rel_cause = pdu_session_rel_cause_create(
    );
  }

  return pdu_session_rel_cause;
}


#ifdef pdu_session_rel_cause_MAIN

void test_pdu_session_rel_cause(int include_optional) {
    pdu_session_rel_cause_t* pdu_session_rel_cause_1 = instantiate_pdu_session_rel_cause(include_optional);

	cJSON* jsonpdu_session_rel_cause_1 = pdu_session_rel_cause_convertToJSON(pdu_session_rel_cause_1);
	printf("pdu_session_rel_cause :\n%s\n", cJSON_Print(jsonpdu_session_rel_cause_1));
	pdu_session_rel_cause_t* pdu_session_rel_cause_2 = pdu_session_rel_cause_parseFromJSON(jsonpdu_session_rel_cause_1);
	cJSON* jsonpdu_session_rel_cause_2 = pdu_session_rel_cause_convertToJSON(pdu_session_rel_cause_2);
	printf("repeating pdu_session_rel_cause:\n%s\n", cJSON_Print(jsonpdu_session_rel_cause_2));
}

int main() {
  test_pdu_session_rel_cause(1);
  test_pdu_session_rel_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_rel_cause_MAIN
#endif // pdu_session_rel_cause_TEST
