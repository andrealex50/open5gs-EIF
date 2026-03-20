#ifndef pdu_session_types_TEST
#define pdu_session_types_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_types_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_types.h"
pdu_session_types_t* instantiate_pdu_session_types(int include_optional);



pdu_session_types_t* instantiate_pdu_session_types(int include_optional) {
  pdu_session_types_t* pdu_session_types = NULL;
  if (include_optional) {
    pdu_session_types = pdu_session_types_create(
      nudr_datarepository_api_openapi_file_pdu_session_types__IPV4,
      list_createList()
    );
  } else {
    pdu_session_types = pdu_session_types_create(
      nudr_datarepository_api_openapi_file_pdu_session_types__IPV4,
      list_createList()
    );
  }

  return pdu_session_types;
}


#ifdef pdu_session_types_MAIN

void test_pdu_session_types(int include_optional) {
    pdu_session_types_t* pdu_session_types_1 = instantiate_pdu_session_types(include_optional);

	cJSON* jsonpdu_session_types_1 = pdu_session_types_convertToJSON(pdu_session_types_1);
	printf("pdu_session_types :\n%s\n", cJSON_Print(jsonpdu_session_types_1));
	pdu_session_types_t* pdu_session_types_2 = pdu_session_types_parseFromJSON(jsonpdu_session_types_1);
	cJSON* jsonpdu_session_types_2 = pdu_session_types_convertToJSON(pdu_session_types_2);
	printf("repeating pdu_session_types:\n%s\n", cJSON_Print(jsonpdu_session_types_2));
}

int main() {
  test_pdu_session_types(1);
  test_pdu_session_types(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_types_MAIN
#endif // pdu_session_types_TEST
