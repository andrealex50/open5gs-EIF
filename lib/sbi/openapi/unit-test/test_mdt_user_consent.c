#ifndef mdt_user_consent_TEST
#define mdt_user_consent_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mdt_user_consent_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mdt_user_consent.h"
mdt_user_consent_t* instantiate_mdt_user_consent(int include_optional);



mdt_user_consent_t* instantiate_mdt_user_consent(int include_optional) {
  mdt_user_consent_t* mdt_user_consent = NULL;
  if (include_optional) {
    mdt_user_consent = mdt_user_consent_create(
    );
  } else {
    mdt_user_consent = mdt_user_consent_create(
    );
  }

  return mdt_user_consent;
}


#ifdef mdt_user_consent_MAIN

void test_mdt_user_consent(int include_optional) {
    mdt_user_consent_t* mdt_user_consent_1 = instantiate_mdt_user_consent(include_optional);

	cJSON* jsonmdt_user_consent_1 = mdt_user_consent_convertToJSON(mdt_user_consent_1);
	printf("mdt_user_consent :\n%s\n", cJSON_Print(jsonmdt_user_consent_1));
	mdt_user_consent_t* mdt_user_consent_2 = mdt_user_consent_parseFromJSON(jsonmdt_user_consent_1);
	cJSON* jsonmdt_user_consent_2 = mdt_user_consent_convertToJSON(mdt_user_consent_2);
	printf("repeating mdt_user_consent:\n%s\n", cJSON_Print(jsonmdt_user_consent_2));
}

int main() {
  test_mdt_user_consent(1);
  test_mdt_user_consent(0);

  printf("Hello world \n");
  return 0;
}

#endif // mdt_user_consent_MAIN
#endif // mdt_user_consent_TEST
