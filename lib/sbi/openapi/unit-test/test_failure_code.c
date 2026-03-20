#ifndef failure_code_TEST
#define failure_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define failure_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/failure_code.h"
failure_code_t* instantiate_failure_code(int include_optional);



failure_code_t* instantiate_failure_code(int include_optional) {
  failure_code_t* failure_code = NULL;
  if (include_optional) {
    failure_code = failure_code_create(
    );
  } else {
    failure_code = failure_code_create(
    );
  }

  return failure_code;
}


#ifdef failure_code_MAIN

void test_failure_code(int include_optional) {
    failure_code_t* failure_code_1 = instantiate_failure_code(include_optional);

	cJSON* jsonfailure_code_1 = failure_code_convertToJSON(failure_code_1);
	printf("failure_code :\n%s\n", cJSON_Print(jsonfailure_code_1));
	failure_code_t* failure_code_2 = failure_code_parseFromJSON(jsonfailure_code_1);
	cJSON* jsonfailure_code_2 = failure_code_convertToJSON(failure_code_2);
	printf("repeating failure_code:\n%s\n", cJSON_Print(jsonfailure_code_2));
}

int main() {
  test_failure_code(1);
  test_failure_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // failure_code_MAIN
#endif // failure_code_TEST
