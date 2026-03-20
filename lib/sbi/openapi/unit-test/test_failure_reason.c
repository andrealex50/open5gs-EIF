#ifndef failure_reason_TEST
#define failure_reason_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define failure_reason_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/failure_reason.h"
failure_reason_t* instantiate_failure_reason(int include_optional);



failure_reason_t* instantiate_failure_reason(int include_optional) {
  failure_reason_t* failure_reason = NULL;
  if (include_optional) {
    failure_reason = failure_reason_create(
    );
  } else {
    failure_reason = failure_reason_create(
    );
  }

  return failure_reason;
}


#ifdef failure_reason_MAIN

void test_failure_reason(int include_optional) {
    failure_reason_t* failure_reason_1 = instantiate_failure_reason(include_optional);

	cJSON* jsonfailure_reason_1 = failure_reason_convertToJSON(failure_reason_1);
	printf("failure_reason :\n%s\n", cJSON_Print(jsonfailure_reason_1));
	failure_reason_t* failure_reason_2 = failure_reason_parseFromJSON(jsonfailure_reason_1);
	cJSON* jsonfailure_reason_2 = failure_reason_convertToJSON(failure_reason_2);
	printf("repeating failure_reason:\n%s\n", cJSON_Print(jsonfailure_reason_2));
}

int main() {
  test_failure_reason(1);
  test_failure_reason(0);

  printf("Hello world \n");
  return 0;
}

#endif // failure_reason_MAIN
#endif // failure_reason_TEST
