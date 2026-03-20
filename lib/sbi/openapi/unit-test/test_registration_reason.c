#ifndef registration_reason_TEST
#define registration_reason_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_reason_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_reason.h"
registration_reason_t* instantiate_registration_reason(int include_optional);



registration_reason_t* instantiate_registration_reason(int include_optional) {
  registration_reason_t* registration_reason = NULL;
  if (include_optional) {
    registration_reason = registration_reason_create(
    );
  } else {
    registration_reason = registration_reason_create(
    );
  }

  return registration_reason;
}


#ifdef registration_reason_MAIN

void test_registration_reason(int include_optional) {
    registration_reason_t* registration_reason_1 = instantiate_registration_reason(include_optional);

	cJSON* jsonregistration_reason_1 = registration_reason_convertToJSON(registration_reason_1);
	printf("registration_reason :\n%s\n", cJSON_Print(jsonregistration_reason_1));
	registration_reason_t* registration_reason_2 = registration_reason_parseFromJSON(jsonregistration_reason_1);
	cJSON* jsonregistration_reason_2 = registration_reason_convertToJSON(registration_reason_2);
	printf("repeating registration_reason:\n%s\n", cJSON_Print(jsonregistration_reason_2));
}

int main() {
  test_registration_reason(1);
  test_registration_reason(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_reason_MAIN
#endif // registration_reason_TEST
