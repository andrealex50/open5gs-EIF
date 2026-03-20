#ifndef auth_result_TEST
#define auth_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auth_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auth_result.h"
auth_result_t* instantiate_auth_result(int include_optional);



auth_result_t* instantiate_auth_result(int include_optional) {
  auth_result_t* auth_result = NULL;
  if (include_optional) {
    auth_result = auth_result_create(
    );
  } else {
    auth_result = auth_result_create(
    );
  }

  return auth_result;
}


#ifdef auth_result_MAIN

void test_auth_result(int include_optional) {
    auth_result_t* auth_result_1 = instantiate_auth_result(include_optional);

	cJSON* jsonauth_result_1 = auth_result_convertToJSON(auth_result_1);
	printf("auth_result :\n%s\n", cJSON_Print(jsonauth_result_1));
	auth_result_t* auth_result_2 = auth_result_parseFromJSON(jsonauth_result_1);
	cJSON* jsonauth_result_2 = auth_result_convertToJSON(auth_result_2);
	printf("repeating auth_result:\n%s\n", cJSON_Print(jsonauth_result_2));
}

int main() {
  test_auth_result(1);
  test_auth_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // auth_result_MAIN
#endif // auth_result_TEST
