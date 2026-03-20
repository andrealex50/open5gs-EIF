#ifndef eap_session_TEST
#define eap_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eap_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eap_session.h"
eap_session_t* instantiate_eap_session(int include_optional);



eap_session_t* instantiate_eap_session(int include_optional) {
  eap_session_t* eap_session = NULL;
  if (include_optional) {
    eap_session = eap_session_create(
      "YQ==",
      "a",
      list_createList(),
      ausf_api_eap_session__AUTHENTICATION_SUCCESS,
      "a",
      "a",
      list_createList(),
      "a"
    );
  } else {
    eap_session = eap_session_create(
      "YQ==",
      "a",
      list_createList(),
      ausf_api_eap_session__AUTHENTICATION_SUCCESS,
      "a",
      "a",
      list_createList(),
      "a"
    );
  }

  return eap_session;
}


#ifdef eap_session_MAIN

void test_eap_session(int include_optional) {
    eap_session_t* eap_session_1 = instantiate_eap_session(include_optional);

	cJSON* jsoneap_session_1 = eap_session_convertToJSON(eap_session_1);
	printf("eap_session :\n%s\n", cJSON_Print(jsoneap_session_1));
	eap_session_t* eap_session_2 = eap_session_parseFromJSON(jsoneap_session_1);
	cJSON* jsoneap_session_2 = eap_session_convertToJSON(eap_session_2);
	printf("repeating eap_session:\n%s\n", cJSON_Print(jsoneap_session_2));
}

int main() {
  test_eap_session(1);
  test_eap_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // eap_session_MAIN
#endif // eap_session_TEST
