#ifndef user_consent_TEST
#define user_consent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define user_consent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/user_consent.h"
user_consent_t* instantiate_user_consent(int include_optional);



user_consent_t* instantiate_user_consent(int include_optional) {
  user_consent_t* user_consent = NULL;
  if (include_optional) {
    user_consent = user_consent_create(
    );
  } else {
    user_consent = user_consent_create(
    );
  }

  return user_consent;
}


#ifdef user_consent_MAIN

void test_user_consent(int include_optional) {
    user_consent_t* user_consent_1 = instantiate_user_consent(include_optional);

	cJSON* jsonuser_consent_1 = user_consent_convertToJSON(user_consent_1);
	printf("user_consent :\n%s\n", cJSON_Print(jsonuser_consent_1));
	user_consent_t* user_consent_2 = user_consent_parseFromJSON(jsonuser_consent_1);
	cJSON* jsonuser_consent_2 = user_consent_convertToJSON(user_consent_2);
	printf("repeating user_consent:\n%s\n", cJSON_Print(jsonuser_consent_2));
}

int main() {
  test_user_consent(1);
  test_user_consent(0);

  printf("Hello world \n");
  return 0;
}

#endif // user_consent_MAIN
#endif // user_consent_TEST
