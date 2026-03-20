#ifndef sequence_number_TEST
#define sequence_number_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequence_number_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequence_number.h"
sequence_number_t* instantiate_sequence_number(int include_optional);



sequence_number_t* instantiate_sequence_number(int include_optional) {
  sequence_number_t* sequence_number = NULL;
  if (include_optional) {
    sequence_number = sequence_number_create(
      nudr_datarepository_api_openapi_file_sequence_number__GENERAL,
      "a",
      list_createList(),
      0,
      nudr_datarepository_api_openapi_file_sequence_number__POSITIVE
    );
  } else {
    sequence_number = sequence_number_create(
      nudr_datarepository_api_openapi_file_sequence_number__GENERAL,
      "a",
      list_createList(),
      0,
      nudr_datarepository_api_openapi_file_sequence_number__POSITIVE
    );
  }

  return sequence_number;
}


#ifdef sequence_number_MAIN

void test_sequence_number(int include_optional) {
    sequence_number_t* sequence_number_1 = instantiate_sequence_number(include_optional);

	cJSON* jsonsequence_number_1 = sequence_number_convertToJSON(sequence_number_1);
	printf("sequence_number :\n%s\n", cJSON_Print(jsonsequence_number_1));
	sequence_number_t* sequence_number_2 = sequence_number_parseFromJSON(jsonsequence_number_1);
	cJSON* jsonsequence_number_2 = sequence_number_convertToJSON(sequence_number_2);
	printf("repeating sequence_number:\n%s\n", cJSON_Print(jsonsequence_number_2));
}

int main() {
  test_sequence_number(1);
  test_sequence_number(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequence_number_MAIN
#endif // sequence_number_TEST
