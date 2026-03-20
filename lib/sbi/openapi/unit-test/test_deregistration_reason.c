#ifndef deregistration_reason_TEST
#define deregistration_reason_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deregistration_reason_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deregistration_reason.h"
deregistration_reason_t* instantiate_deregistration_reason(int include_optional);



deregistration_reason_t* instantiate_deregistration_reason(int include_optional) {
  deregistration_reason_t* deregistration_reason = NULL;
  if (include_optional) {
    deregistration_reason = deregistration_reason_create(
    );
  } else {
    deregistration_reason = deregistration_reason_create(
    );
  }

  return deregistration_reason;
}


#ifdef deregistration_reason_MAIN

void test_deregistration_reason(int include_optional) {
    deregistration_reason_t* deregistration_reason_1 = instantiate_deregistration_reason(include_optional);

	cJSON* jsonderegistration_reason_1 = deregistration_reason_convertToJSON(deregistration_reason_1);
	printf("deregistration_reason :\n%s\n", cJSON_Print(jsonderegistration_reason_1));
	deregistration_reason_t* deregistration_reason_2 = deregistration_reason_parseFromJSON(jsonderegistration_reason_1);
	cJSON* jsonderegistration_reason_2 = deregistration_reason_convertToJSON(deregistration_reason_2);
	printf("repeating deregistration_reason:\n%s\n", cJSON_Print(jsonderegistration_reason_2));
}

int main() {
  test_deregistration_reason(1);
  test_deregistration_reason(0);

  printf("Hello world \n");
  return 0;
}

#endif // deregistration_reason_MAIN
#endif // deregistration_reason_TEST
