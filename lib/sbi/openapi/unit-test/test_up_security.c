#ifndef up_security_TEST
#define up_security_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_security_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_security.h"
up_security_t* instantiate_up_security(int include_optional);



up_security_t* instantiate_up_security(int include_optional) {
  up_security_t* up_security = NULL;
  if (include_optional) {
    up_security = up_security_create(
      nudr_datarepository_api_openapi_file_up_security__REQUIRED,
      nudr_datarepository_api_openapi_file_up_security__REQUIRED
    );
  } else {
    up_security = up_security_create(
      nudr_datarepository_api_openapi_file_up_security__REQUIRED,
      nudr_datarepository_api_openapi_file_up_security__REQUIRED
    );
  }

  return up_security;
}


#ifdef up_security_MAIN

void test_up_security(int include_optional) {
    up_security_t* up_security_1 = instantiate_up_security(include_optional);

	cJSON* jsonup_security_1 = up_security_convertToJSON(up_security_1);
	printf("up_security :\n%s\n", cJSON_Print(jsonup_security_1));
	up_security_t* up_security_2 = up_security_parseFromJSON(jsonup_security_1);
	cJSON* jsonup_security_2 = up_security_convertToJSON(up_security_2);
	printf("repeating up_security:\n%s\n", cJSON_Print(jsonup_security_2));
}

int main() {
  test_up_security(1);
  test_up_security(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_security_MAIN
#endif // up_security_TEST
