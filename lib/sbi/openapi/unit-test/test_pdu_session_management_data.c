#ifndef pdu_session_management_data_TEST
#define pdu_session_management_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_management_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_management_data.h"
pdu_session_management_data_t* instantiate_pdu_session_management_data(int include_optional);



pdu_session_management_data_t* instantiate_pdu_session_management_data(int include_optional) {
  pdu_session_management_data_t* pdu_session_management_data = NULL;
  if (include_optional) {
    pdu_session_management_data = pdu_session_management_data_create(
      nudr_datarepository_api_openapi_file_pdu_session_management_data__ACTIVE,
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "198.51.100.1",
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_pdu_session_management_data__IPV4,
      "2013-10-20T19:20:30+01:00",
      "0",
      0,
      "a",
      list_createList()
    );
  } else {
    pdu_session_management_data = pdu_session_management_data_create(
      nudr_datarepository_api_openapi_file_pdu_session_management_data__ACTIVE,
      "2013-10-20T19:20:30+01:00",
      "0",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "198.51.100.1",
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_pdu_session_management_data__IPV4,
      "2013-10-20T19:20:30+01:00",
      "0",
      0,
      "a",
      list_createList()
    );
  }

  return pdu_session_management_data;
}


#ifdef pdu_session_management_data_MAIN

void test_pdu_session_management_data(int include_optional) {
    pdu_session_management_data_t* pdu_session_management_data_1 = instantiate_pdu_session_management_data(include_optional);

	cJSON* jsonpdu_session_management_data_1 = pdu_session_management_data_convertToJSON(pdu_session_management_data_1);
	printf("pdu_session_management_data :\n%s\n", cJSON_Print(jsonpdu_session_management_data_1));
	pdu_session_management_data_t* pdu_session_management_data_2 = pdu_session_management_data_parseFromJSON(jsonpdu_session_management_data_1);
	cJSON* jsonpdu_session_management_data_2 = pdu_session_management_data_convertToJSON(pdu_session_management_data_2);
	printf("repeating pdu_session_management_data:\n%s\n", cJSON_Print(jsonpdu_session_management_data_2));
}

int main() {
  test_pdu_session_management_data(1);
  test_pdu_session_management_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_management_data_MAIN
#endif // pdu_session_management_data_TEST
