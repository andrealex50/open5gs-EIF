#ifndef pdu_session_status_TEST
#define pdu_session_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_status.h"
pdu_session_status_t* instantiate_pdu_session_status(int include_optional);



pdu_session_status_t* instantiate_pdu_session_status(int include_optional) {
  pdu_session_status_t* pdu_session_status = NULL;
  if (include_optional) {
    pdu_session_status = pdu_session_status_create(
    );
  } else {
    pdu_session_status = pdu_session_status_create(
    );
  }

  return pdu_session_status;
}


#ifdef pdu_session_status_MAIN

void test_pdu_session_status(int include_optional) {
    pdu_session_status_t* pdu_session_status_1 = instantiate_pdu_session_status(include_optional);

	cJSON* jsonpdu_session_status_1 = pdu_session_status_convertToJSON(pdu_session_status_1);
	printf("pdu_session_status :\n%s\n", cJSON_Print(jsonpdu_session_status_1));
	pdu_session_status_t* pdu_session_status_2 = pdu_session_status_parseFromJSON(jsonpdu_session_status_1);
	cJSON* jsonpdu_session_status_2 = pdu_session_status_convertToJSON(pdu_session_status_2);
	printf("repeating pdu_session_status:\n%s\n", cJSON_Print(jsonpdu_session_status_2));
}

int main() {
  test_pdu_session_status(1);
  test_pdu_session_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_status_MAIN
#endif // pdu_session_status_TEST
