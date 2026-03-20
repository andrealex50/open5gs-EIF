#ifndef collocated_nf_type_TEST
#define collocated_nf_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define collocated_nf_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/collocated_nf_type.h"
collocated_nf_type_t* instantiate_collocated_nf_type(int include_optional);



collocated_nf_type_t* instantiate_collocated_nf_type(int include_optional) {
  collocated_nf_type_t* collocated_nf_type = NULL;
  if (include_optional) {
    collocated_nf_type = collocated_nf_type_create(
    );
  } else {
    collocated_nf_type = collocated_nf_type_create(
    );
  }

  return collocated_nf_type;
}


#ifdef collocated_nf_type_MAIN

void test_collocated_nf_type(int include_optional) {
    collocated_nf_type_t* collocated_nf_type_1 = instantiate_collocated_nf_type(include_optional);

	cJSON* jsoncollocated_nf_type_1 = collocated_nf_type_convertToJSON(collocated_nf_type_1);
	printf("collocated_nf_type :\n%s\n", cJSON_Print(jsoncollocated_nf_type_1));
	collocated_nf_type_t* collocated_nf_type_2 = collocated_nf_type_parseFromJSON(jsoncollocated_nf_type_1);
	cJSON* jsoncollocated_nf_type_2 = collocated_nf_type_convertToJSON(collocated_nf_type_2);
	printf("repeating collocated_nf_type:\n%s\n", cJSON_Print(jsoncollocated_nf_type_2));
}

int main() {
  test_collocated_nf_type(1);
  test_collocated_nf_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // collocated_nf_type_MAIN
#endif // collocated_nf_type_TEST
