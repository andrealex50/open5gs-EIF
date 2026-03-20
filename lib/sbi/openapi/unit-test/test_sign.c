#ifndef sign_TEST
#define sign_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sign_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sign.h"
sign_t* instantiate_sign(int include_optional);



sign_t* instantiate_sign(int include_optional) {
  sign_t* sign = NULL;
  if (include_optional) {
    sign = sign_create(
    );
  } else {
    sign = sign_create(
    );
  }

  return sign;
}


#ifdef sign_MAIN

void test_sign(int include_optional) {
    sign_t* sign_1 = instantiate_sign(include_optional);

	cJSON* jsonsign_1 = sign_convertToJSON(sign_1);
	printf("sign :\n%s\n", cJSON_Print(jsonsign_1));
	sign_t* sign_2 = sign_parseFromJSON(jsonsign_1);
	cJSON* jsonsign_2 = sign_convertToJSON(sign_2);
	printf("repeating sign:\n%s\n", cJSON_Print(jsonsign_2));
}

int main() {
  test_sign(1);
  test_sign(0);

  printf("Hello world \n");
  return 0;
}

#endif // sign_MAIN
#endif // sign_TEST
