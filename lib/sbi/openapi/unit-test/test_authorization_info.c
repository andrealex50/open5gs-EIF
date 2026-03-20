#ifndef authorization_info_TEST
#define authorization_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization_info.h"
authorization_info_t* instantiate_authorization_info(int include_optional);

#include "test_snssai.c"
#include "test_context_info.c"


authorization_info_t* instantiate_authorization_info(int include_optional) {
  authorization_info_t* authorization_info = NULL;
  if (include_optional) {
    authorization_info = authorization_info_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_context_info(0)
    );
  } else {
    authorization_info = authorization_info_create(
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL
    );
  }

  return authorization_info;
}


#ifdef authorization_info_MAIN

void test_authorization_info(int include_optional) {
    authorization_info_t* authorization_info_1 = instantiate_authorization_info(include_optional);

	cJSON* jsonauthorization_info_1 = authorization_info_convertToJSON(authorization_info_1);
	printf("authorization_info :\n%s\n", cJSON_Print(jsonauthorization_info_1));
	authorization_info_t* authorization_info_2 = authorization_info_parseFromJSON(jsonauthorization_info_1);
	cJSON* jsonauthorization_info_2 = authorization_info_convertToJSON(authorization_info_2);
	printf("repeating authorization_info:\n%s\n", cJSON_Print(jsonauthorization_info_2));
}

int main() {
  test_authorization_info(1);
  test_authorization_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_info_MAIN
#endif // authorization_info_TEST
