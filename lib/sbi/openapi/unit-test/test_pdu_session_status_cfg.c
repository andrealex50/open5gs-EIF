#ifndef pdu_session_status_cfg_TEST
#define pdu_session_status_cfg_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_status_cfg_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_status_cfg.h"
pdu_session_status_cfg_t* instantiate_pdu_session_status_cfg(int include_optional);



pdu_session_status_cfg_t* instantiate_pdu_session_status_cfg(int include_optional) {
  pdu_session_status_cfg_t* pdu_session_status_cfg = NULL;
  if (include_optional) {
    pdu_session_status_cfg = pdu_session_status_cfg_create(
      "0"
    );
  } else {
    pdu_session_status_cfg = pdu_session_status_cfg_create(
      "0"
    );
  }

  return pdu_session_status_cfg;
}


#ifdef pdu_session_status_cfg_MAIN

void test_pdu_session_status_cfg(int include_optional) {
    pdu_session_status_cfg_t* pdu_session_status_cfg_1 = instantiate_pdu_session_status_cfg(include_optional);

	cJSON* jsonpdu_session_status_cfg_1 = pdu_session_status_cfg_convertToJSON(pdu_session_status_cfg_1);
	printf("pdu_session_status_cfg :\n%s\n", cJSON_Print(jsonpdu_session_status_cfg_1));
	pdu_session_status_cfg_t* pdu_session_status_cfg_2 = pdu_session_status_cfg_parseFromJSON(jsonpdu_session_status_cfg_1);
	cJSON* jsonpdu_session_status_cfg_2 = pdu_session_status_cfg_convertToJSON(pdu_session_status_cfg_2);
	printf("repeating pdu_session_status_cfg:\n%s\n", cJSON_Print(jsonpdu_session_status_cfg_2));
}

int main() {
  test_pdu_session_status_cfg(1);
  test_pdu_session_status_cfg(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_status_cfg_MAIN
#endif // pdu_session_status_cfg_TEST
