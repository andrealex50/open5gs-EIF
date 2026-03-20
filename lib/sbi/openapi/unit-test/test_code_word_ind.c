#ifndef code_word_ind_TEST
#define code_word_ind_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define code_word_ind_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/code_word_ind.h"
code_word_ind_t* instantiate_code_word_ind(int include_optional);



code_word_ind_t* instantiate_code_word_ind(int include_optional) {
  code_word_ind_t* code_word_ind = NULL;
  if (include_optional) {
    code_word_ind = code_word_ind_create(
    );
  } else {
    code_word_ind = code_word_ind_create(
    );
  }

  return code_word_ind;
}


#ifdef code_word_ind_MAIN

void test_code_word_ind(int include_optional) {
    code_word_ind_t* code_word_ind_1 = instantiate_code_word_ind(include_optional);

	cJSON* jsoncode_word_ind_1 = code_word_ind_convertToJSON(code_word_ind_1);
	printf("code_word_ind :\n%s\n", cJSON_Print(jsoncode_word_ind_1));
	code_word_ind_t* code_word_ind_2 = code_word_ind_parseFromJSON(jsoncode_word_ind_1);
	cJSON* jsoncode_word_ind_2 = code_word_ind_convertToJSON(code_word_ind_2);
	printf("repeating code_word_ind:\n%s\n", cJSON_Print(jsoncode_word_ind_2));
}

int main() {
  test_code_word_ind(1);
  test_code_word_ind(0);

  printf("Hello world \n");
  return 0;
}

#endif // code_word_ind_MAIN
#endif // code_word_ind_TEST
