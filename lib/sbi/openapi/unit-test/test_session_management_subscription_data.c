#ifndef session_management_subscription_data_TEST
#define session_management_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_management_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_management_subscription_data.h"
session_management_subscription_data_t* instantiate_session_management_subscription_data(int include_optional);

#include "test_snssai.c"
#include "test_trace_data_1.c"


session_management_subscription_data_t* instantiate_session_management_subscription_data(int include_optional) {
  session_management_subscription_data_t* session_management_subscription_data = NULL;
  if (include_optional) {
    session_management_subscription_data = session_management_subscription_data_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      nudr_datarepository_api_openapi_file_session_management_subscription_data__ALL_PACKET_SERVICES,
       // false, not to have infinite recursion
      instantiate_trace_data_1(0),
      "a",
      list_createList(),
      list_createList(),
      "0",
      "a"
    );
  } else {
    session_management_subscription_data = session_management_subscription_data_create(
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      nudr_datarepository_api_openapi_file_session_management_subscription_data__ALL_PACKET_SERVICES,
      NULL,
      "a",
      list_createList(),
      list_createList(),
      "0",
      "a"
    );
  }

  return session_management_subscription_data;
}


#ifdef session_management_subscription_data_MAIN

void test_session_management_subscription_data(int include_optional) {
    session_management_subscription_data_t* session_management_subscription_data_1 = instantiate_session_management_subscription_data(include_optional);

	cJSON* jsonsession_management_subscription_data_1 = session_management_subscription_data_convertToJSON(session_management_subscription_data_1);
	printf("session_management_subscription_data :\n%s\n", cJSON_Print(jsonsession_management_subscription_data_1));
	session_management_subscription_data_t* session_management_subscription_data_2 = session_management_subscription_data_parseFromJSON(jsonsession_management_subscription_data_1);
	cJSON* jsonsession_management_subscription_data_2 = session_management_subscription_data_convertToJSON(session_management_subscription_data_2);
	printf("repeating session_management_subscription_data:\n%s\n", cJSON_Print(jsonsession_management_subscription_data_2));
}

int main() {
  test_session_management_subscription_data(1);
  test_session_management_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_management_subscription_data_MAIN
#endif // session_management_subscription_data_TEST
