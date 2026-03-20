#ifndef auth_type_TEST
#define auth_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auth_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auth_type.h"
auth_type_t* instantiate_auth_type(int include_optional);



auth_type_t* instantiate_auth_type(int include_optional) {
  auth_type_t* auth_type = NULL;
  if (include_optional) {
    auth_type = auth_type_create(
    );
  } else {
    auth_type = auth_type_create(
    );
  }

  return auth_type;
}


#ifdef auth_type_MAIN

void test_auth_type(int include_optional) {
    auth_type_t* auth_type_1 = instantiate_auth_type(include_optional);

	cJSON* jsonauth_type_1 = auth_type_convertToJSON(auth_type_1);
	printf("auth_type :\n%s\n", cJSON_Print(jsonauth_type_1));
	auth_type_t* auth_type_2 = auth_type_parseFromJSON(jsonauth_type_1);
	cJSON* jsonauth_type_2 = auth_type_convertToJSON(auth_type_2);
	printf("repeating auth_type:\n%s\n", cJSON_Print(jsonauth_type_2));
}

int main() {
  test_auth_type(1);
  test_auth_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // auth_type_MAIN
#endif // auth_type_TEST
