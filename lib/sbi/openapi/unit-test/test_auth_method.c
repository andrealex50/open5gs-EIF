#ifndef auth_method_TEST
#define auth_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auth_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auth_method.h"
auth_method_t* instantiate_auth_method(int include_optional);



auth_method_t* instantiate_auth_method(int include_optional) {
  auth_method_t* auth_method = NULL;
  if (include_optional) {
    auth_method = auth_method_create(
    );
  } else {
    auth_method = auth_method_create(
    );
  }

  return auth_method;
}


#ifdef auth_method_MAIN

void test_auth_method(int include_optional) {
    auth_method_t* auth_method_1 = instantiate_auth_method(include_optional);

	cJSON* jsonauth_method_1 = auth_method_convertToJSON(auth_method_1);
	printf("auth_method :\n%s\n", cJSON_Print(jsonauth_method_1));
	auth_method_t* auth_method_2 = auth_method_parseFromJSON(jsonauth_method_1);
	cJSON* jsonauth_method_2 = auth_method_convertToJSON(auth_method_2);
	printf("repeating auth_method:\n%s\n", cJSON_Print(jsonauth_method_2));
}

int main() {
  test_auth_method(1);
  test_auth_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // auth_method_MAIN
#endif // auth_method_TEST
