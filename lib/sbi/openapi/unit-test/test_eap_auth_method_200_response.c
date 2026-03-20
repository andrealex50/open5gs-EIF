#ifndef eap_auth_method_200_response_TEST
#define eap_auth_method_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eap_auth_method_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eap_auth_method_200_response.h"
eap_auth_method_200_response_t* instantiate_eap_auth_method_200_response(int include_optional);



eap_auth_method_200_response_t* instantiate_eap_auth_method_200_response(int include_optional) {
  eap_auth_method_200_response_t* eap_auth_method_200_response = NULL;
  if (include_optional) {
    eap_auth_method_200_response = eap_auth_method_200_response_create(
      "YQ==",
      list_createList()
    );
  } else {
    eap_auth_method_200_response = eap_auth_method_200_response_create(
      "YQ==",
      list_createList()
    );
  }

  return eap_auth_method_200_response;
}


#ifdef eap_auth_method_200_response_MAIN

void test_eap_auth_method_200_response(int include_optional) {
    eap_auth_method_200_response_t* eap_auth_method_200_response_1 = instantiate_eap_auth_method_200_response(include_optional);

	cJSON* jsoneap_auth_method_200_response_1 = eap_auth_method_200_response_convertToJSON(eap_auth_method_200_response_1);
	printf("eap_auth_method_200_response :\n%s\n", cJSON_Print(jsoneap_auth_method_200_response_1));
	eap_auth_method_200_response_t* eap_auth_method_200_response_2 = eap_auth_method_200_response_parseFromJSON(jsoneap_auth_method_200_response_1);
	cJSON* jsoneap_auth_method_200_response_2 = eap_auth_method_200_response_convertToJSON(eap_auth_method_200_response_2);
	printf("repeating eap_auth_method_200_response:\n%s\n", cJSON_Print(jsoneap_auth_method_200_response_2));
}

int main() {
  test_eap_auth_method_200_response(1);
  test_eap_auth_method_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // eap_auth_method_200_response_MAIN
#endif // eap_auth_method_200_response_TEST
