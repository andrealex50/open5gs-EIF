#ifndef authentication_info_request_TEST
#define authentication_info_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_info_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_info_request.h"
authentication_info_request_t* instantiate_authentication_info_request(int include_optional);

#include "test_resynchronization_info.c"


authentication_info_request_t* instantiate_authentication_info_request(int include_optional) {
  authentication_info_request_t* authentication_info_request = NULL;
  if (include_optional) {
    authentication_info_request = authentication_info_request_create(
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_resynchronization_info(0),
      "0",
      list_createList(),
      1,
      1,
      1
    );
  } else {
    authentication_info_request = authentication_info_request_create(
      "a",
      "a",
      NULL,
      "0",
      list_createList(),
      1,
      1,
      1
    );
  }

  return authentication_info_request;
}


#ifdef authentication_info_request_MAIN

void test_authentication_info_request(int include_optional) {
    authentication_info_request_t* authentication_info_request_1 = instantiate_authentication_info_request(include_optional);

	cJSON* jsonauthentication_info_request_1 = authentication_info_request_convertToJSON(authentication_info_request_1);
	printf("authentication_info_request :\n%s\n", cJSON_Print(jsonauthentication_info_request_1));
	authentication_info_request_t* authentication_info_request_2 = authentication_info_request_parseFromJSON(jsonauthentication_info_request_1);
	cJSON* jsonauthentication_info_request_2 = authentication_info_request_convertToJSON(authentication_info_request_2);
	printf("repeating authentication_info_request:\n%s\n", cJSON_Print(jsonauthentication_info_request_2));
}

int main() {
  test_authentication_info_request(1);
  test_authentication_info_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_info_request_MAIN
#endif // authentication_info_request_TEST
