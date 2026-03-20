#ifndef pdu_session_create_error_TEST
#define pdu_session_create_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_create_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_create_error.h"
pdu_session_create_error_t* instantiate_pdu_session_create_error(int include_optional);

#include "test_problem_details.c"
#include "test_ref_to_binary_data.c"


pdu_session_create_error_t* instantiate_pdu_session_create_error(int include_optional) {
  pdu_session_create_error_t* pdu_session_create_error = NULL;
  if (include_optional) {
    pdu_session_create_error = pdu_session_create_error_create(
       // false, not to have infinite recursion
      instantiate_problem_details(0),
      "a",
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      56,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    pdu_session_create_error = pdu_session_create_error_create(
      NULL,
      "a",
      NULL,
      56,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return pdu_session_create_error;
}


#ifdef pdu_session_create_error_MAIN

void test_pdu_session_create_error(int include_optional) {
    pdu_session_create_error_t* pdu_session_create_error_1 = instantiate_pdu_session_create_error(include_optional);

	cJSON* jsonpdu_session_create_error_1 = pdu_session_create_error_convertToJSON(pdu_session_create_error_1);
	printf("pdu_session_create_error :\n%s\n", cJSON_Print(jsonpdu_session_create_error_1));
	pdu_session_create_error_t* pdu_session_create_error_2 = pdu_session_create_error_parseFromJSON(jsonpdu_session_create_error_1);
	cJSON* jsonpdu_session_create_error_2 = pdu_session_create_error_convertToJSON(pdu_session_create_error_2);
	printf("repeating pdu_session_create_error:\n%s\n", cJSON_Print(jsonpdu_session_create_error_2));
}

int main() {
  test_pdu_session_create_error(1);
  test_pdu_session_create_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_create_error_MAIN
#endif // pdu_session_create_error_TEST
