#ifndef up_security_1_TEST
#define up_security_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_security_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_security_1.h"
up_security_1_t* instantiate_up_security_1(int include_optional);



up_security_1_t* instantiate_up_security_1(int include_optional) {
  up_security_1_t* up_security_1 = NULL;
  if (include_optional) {
    up_security_1 = up_security_1_create(
      nudr_datarepository_api_openapi_file_up_security_1__REQUIRED,
      nudr_datarepository_api_openapi_file_up_security_1__REQUIRED
    );
  } else {
    up_security_1 = up_security_1_create(
      nudr_datarepository_api_openapi_file_up_security_1__REQUIRED,
      nudr_datarepository_api_openapi_file_up_security_1__REQUIRED
    );
  }

  return up_security_1;
}


#ifdef up_security_1_MAIN

void test_up_security_1(int include_optional) {
    up_security_1_t* up_security_1_1 = instantiate_up_security_1(include_optional);

	cJSON* jsonup_security_1_1 = up_security_1_convertToJSON(up_security_1_1);
	printf("up_security_1 :\n%s\n", cJSON_Print(jsonup_security_1_1));
	up_security_1_t* up_security_1_2 = up_security_1_parseFromJSON(jsonup_security_1_1);
	cJSON* jsonup_security_1_2 = up_security_1_convertToJSON(up_security_1_2);
	printf("repeating up_security_1:\n%s\n", cJSON_Print(jsonup_security_1_2));
}

int main() {
  test_up_security_1(1);
  test_up_security_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_security_1_MAIN
#endif // up_security_1_TEST
