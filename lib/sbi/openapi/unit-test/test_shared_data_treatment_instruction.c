#ifndef shared_data_treatment_instruction_TEST
#define shared_data_treatment_instruction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shared_data_treatment_instruction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shared_data_treatment_instruction.h"
shared_data_treatment_instruction_t* instantiate_shared_data_treatment_instruction(int include_optional);



shared_data_treatment_instruction_t* instantiate_shared_data_treatment_instruction(int include_optional) {
  shared_data_treatment_instruction_t* shared_data_treatment_instruction = NULL;
  if (include_optional) {
    shared_data_treatment_instruction = shared_data_treatment_instruction_create(
    );
  } else {
    shared_data_treatment_instruction = shared_data_treatment_instruction_create(
    );
  }

  return shared_data_treatment_instruction;
}


#ifdef shared_data_treatment_instruction_MAIN

void test_shared_data_treatment_instruction(int include_optional) {
    shared_data_treatment_instruction_t* shared_data_treatment_instruction_1 = instantiate_shared_data_treatment_instruction(include_optional);

	cJSON* jsonshared_data_treatment_instruction_1 = shared_data_treatment_instruction_convertToJSON(shared_data_treatment_instruction_1);
	printf("shared_data_treatment_instruction :\n%s\n", cJSON_Print(jsonshared_data_treatment_instruction_1));
	shared_data_treatment_instruction_t* shared_data_treatment_instruction_2 = shared_data_treatment_instruction_parseFromJSON(jsonshared_data_treatment_instruction_1);
	cJSON* jsonshared_data_treatment_instruction_2 = shared_data_treatment_instruction_convertToJSON(shared_data_treatment_instruction_2);
	printf("repeating shared_data_treatment_instruction:\n%s\n", cJSON_Print(jsonshared_data_treatment_instruction_2));
}

int main() {
  test_shared_data_treatment_instruction(1);
  test_shared_data_treatment_instruction(0);

  printf("Hello world \n");
  return 0;
}

#endif // shared_data_treatment_instruction_MAIN
#endif // shared_data_treatment_instruction_TEST
