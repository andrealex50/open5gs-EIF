#ifndef prose_service_auth_TEST
#define prose_service_auth_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_service_auth_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_service_auth.h"
prose_service_auth_t* instantiate_prose_service_auth(int include_optional);



prose_service_auth_t* instantiate_prose_service_auth(int include_optional) {
  prose_service_auth_t* prose_service_auth = NULL;
  if (include_optional) {
    prose_service_auth = prose_service_auth_create(
      nudr_datarepository_api_openapi_file_prose_service_auth__AUTHORIZED,
      nudr_datarepository_api_openapi_file_prose_service_auth__AUTHORIZED
    );
  } else {
    prose_service_auth = prose_service_auth_create(
      nudr_datarepository_api_openapi_file_prose_service_auth__AUTHORIZED,
      nudr_datarepository_api_openapi_file_prose_service_auth__AUTHORIZED
    );
  }

  return prose_service_auth;
}


#ifdef prose_service_auth_MAIN

void test_prose_service_auth(int include_optional) {
    prose_service_auth_t* prose_service_auth_1 = instantiate_prose_service_auth(include_optional);

	cJSON* jsonprose_service_auth_1 = prose_service_auth_convertToJSON(prose_service_auth_1);
	printf("prose_service_auth :\n%s\n", cJSON_Print(jsonprose_service_auth_1));
	prose_service_auth_t* prose_service_auth_2 = prose_service_auth_parseFromJSON(jsonprose_service_auth_1);
	cJSON* jsonprose_service_auth_2 = prose_service_auth_convertToJSON(prose_service_auth_2);
	printf("repeating prose_service_auth:\n%s\n", cJSON_Print(jsonprose_service_auth_2));
}

int main() {
  test_prose_service_auth(1);
  test_prose_service_auth(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_service_auth_MAIN
#endif // prose_service_auth_TEST
