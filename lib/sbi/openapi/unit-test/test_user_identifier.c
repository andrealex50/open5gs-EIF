#ifndef user_identifier_TEST
#define user_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_identifier.h"
user_identifier_t* instantiate_user_identifier(int include_optional);



user_identifier_t* instantiate_user_identifier(int include_optional) {
  user_identifier_t* user_identifier = NULL;
  if (include_optional) {
    user_identifier = user_identifier_create(
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    user_identifier = user_identifier_create(
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return user_identifier;
}


#ifdef user_identifier_MAIN

void test_user_identifier(int include_optional) {
    user_identifier_t* user_identifier_1 = instantiate_user_identifier(include_optional);

	cJSON* jsonuser_identifier_1 = user_identifier_convertToJSON(user_identifier_1);
	printf("user_identifier :\n%s\n", cJSON_Print(jsonuser_identifier_1));
	user_identifier_t* user_identifier_2 = user_identifier_parseFromJSON(jsonuser_identifier_1);
	cJSON* jsonuser_identifier_2 = user_identifier_convertToJSON(user_identifier_2);
	printf("repeating user_identifier:\n%s\n", cJSON_Print(jsonuser_identifier_2));
}

int main() {
  test_user_identifier(1);
  test_user_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_identifier_MAIN
#endif // user_identifier_TEST
