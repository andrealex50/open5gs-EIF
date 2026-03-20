#ifndef parameter_combination_TEST
#define parameter_combination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define parameter_combination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/parameter_combination.h"
parameter_combination_t* instantiate_parameter_combination(int include_optional);

#include "test_snssai.c"


parameter_combination_t* instantiate_parameter_combination(int include_optional) {
  parameter_combination_t* parameter_combination = NULL;
  if (include_optional) {
    parameter_combination = parameter_combination_create(
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    parameter_combination = parameter_combination_create(
      "a",
      "0",
      NULL
    );
  }

  return parameter_combination;
}


#ifdef parameter_combination_MAIN

void test_parameter_combination(int include_optional) {
    parameter_combination_t* parameter_combination_1 = instantiate_parameter_combination(include_optional);

	cJSON* jsonparameter_combination_1 = parameter_combination_convertToJSON(parameter_combination_1);
	printf("parameter_combination :\n%s\n", cJSON_Print(jsonparameter_combination_1));
	parameter_combination_t* parameter_combination_2 = parameter_combination_parseFromJSON(jsonparameter_combination_1);
	cJSON* jsonparameter_combination_2 = parameter_combination_convertToJSON(parameter_combination_2);
	printf("repeating parameter_combination:\n%s\n", cJSON_Print(jsonparameter_combination_2));
}

int main() {
  test_parameter_combination(1);
  test_parameter_combination(0);

  printf("Hello world \n");
  return 0;
}

#endif // parameter_combination_MAIN
#endif // parameter_combination_TEST
