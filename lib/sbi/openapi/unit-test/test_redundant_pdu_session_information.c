#ifndef redundant_pdu_session_information_TEST
#define redundant_pdu_session_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redundant_pdu_session_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redundant_pdu_session_information.h"
redundant_pdu_session_information_t* instantiate_redundant_pdu_session_information(int include_optional);



redundant_pdu_session_information_t* instantiate_redundant_pdu_session_information(int include_optional) {
  redundant_pdu_session_information_t* redundant_pdu_session_information = NULL;
  if (include_optional) {
    redundant_pdu_session_information = redundant_pdu_session_information_create(
      nsmf_pdusession_redundant_pdu_session_information__V1,
      0
    );
  } else {
    redundant_pdu_session_information = redundant_pdu_session_information_create(
      nsmf_pdusession_redundant_pdu_session_information__V1,
      0
    );
  }

  return redundant_pdu_session_information;
}


#ifdef redundant_pdu_session_information_MAIN

void test_redundant_pdu_session_information(int include_optional) {
    redundant_pdu_session_information_t* redundant_pdu_session_information_1 = instantiate_redundant_pdu_session_information(include_optional);

	cJSON* jsonredundant_pdu_session_information_1 = redundant_pdu_session_information_convertToJSON(redundant_pdu_session_information_1);
	printf("redundant_pdu_session_information :\n%s\n", cJSON_Print(jsonredundant_pdu_session_information_1));
	redundant_pdu_session_information_t* redundant_pdu_session_information_2 = redundant_pdu_session_information_parseFromJSON(jsonredundant_pdu_session_information_1);
	cJSON* jsonredundant_pdu_session_information_2 = redundant_pdu_session_information_convertToJSON(redundant_pdu_session_information_2);
	printf("repeating redundant_pdu_session_information:\n%s\n", cJSON_Print(jsonredundant_pdu_session_information_2));
}

int main() {
  test_redundant_pdu_session_information(1);
  test_redundant_pdu_session_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // redundant_pdu_session_information_MAIN
#endif // redundant_pdu_session_information_TEST
