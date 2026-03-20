#ifndef operation_mode_TEST
#define operation_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define operation_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/operation_mode.h"
operation_mode_t* instantiate_operation_mode(int include_optional);



operation_mode_t* instantiate_operation_mode(int include_optional) {
  operation_mode_t* operation_mode = NULL;
  if (include_optional) {
    operation_mode = operation_mode_create(
    );
  } else {
    operation_mode = operation_mode_create(
    );
  }

  return operation_mode;
}


#ifdef operation_mode_MAIN

void test_operation_mode(int include_optional) {
    operation_mode_t* operation_mode_1 = instantiate_operation_mode(include_optional);

	cJSON* jsonoperation_mode_1 = operation_mode_convertToJSON(operation_mode_1);
	printf("operation_mode :\n%s\n", cJSON_Print(jsonoperation_mode_1));
	operation_mode_t* operation_mode_2 = operation_mode_parseFromJSON(jsonoperation_mode_1);
	cJSON* jsonoperation_mode_2 = operation_mode_convertToJSON(operation_mode_2);
	printf("repeating operation_mode:\n%s\n", cJSON_Print(jsonoperation_mode_2));
}

int main() {
  test_operation_mode(1);
  test_operation_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // operation_mode_MAIN
#endif // operation_mode_TEST
