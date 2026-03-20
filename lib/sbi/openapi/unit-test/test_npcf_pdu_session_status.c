#ifndef npcf_pdu_session_status_TEST
#define npcf_pdu_session_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define npcf_pdu_session_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/npcf_pdu_session_status.h"
npcf_pdu_session_status_t* instantiate_npcf_pdu_session_status(int include_optional);



npcf_pdu_session_status_t* instantiate_npcf_pdu_session_status(int include_optional) {
  npcf_pdu_session_status_t* npcf_pdu_session_status = NULL;
  if (include_optional) {
    npcf_pdu_session_status = npcf_pdu_session_status_create(
    );
  } else {
    npcf_pdu_session_status = npcf_pdu_session_status_create(
    );
  }

  return npcf_pdu_session_status;
}


#ifdef npcf_pdu_session_status_MAIN

void test_npcf_pdu_session_status(int include_optional) {
    npcf_pdu_session_status_t* npcf_pdu_session_status_1 = instantiate_npcf_pdu_session_status(include_optional);

	cJSON* jsonnpcf_pdu_session_status_1 = npcf_pdu_session_status_convertToJSON(npcf_pdu_session_status_1);
	printf("npcf_pdu_session_status :\n%s\n", cJSON_Print(jsonnpcf_pdu_session_status_1));
	npcf_pdu_session_status_t* npcf_pdu_session_status_2 = npcf_pdu_session_status_parseFromJSON(jsonnpcf_pdu_session_status_1);
	cJSON* jsonnpcf_pdu_session_status_2 = npcf_pdu_session_status_convertToJSON(npcf_pdu_session_status_2);
	printf("repeating npcf_pdu_session_status:\n%s\n", cJSON_Print(jsonnpcf_pdu_session_status_2));
}

int main() {
  test_npcf_pdu_session_status(1);
  test_npcf_pdu_session_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // npcf_pdu_session_status_MAIN
#endif // npcf_pdu_session_status_TEST
