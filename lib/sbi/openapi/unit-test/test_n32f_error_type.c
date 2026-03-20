#ifndef n32f_error_type_TEST
#define n32f_error_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n32f_error_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n32f_error_type.h"
n32f_error_type_t* instantiate_n32f_error_type(int include_optional);



n32f_error_type_t* instantiate_n32f_error_type(int include_optional) {
  n32f_error_type_t* n32f_error_type = NULL;
  if (include_optional) {
    n32f_error_type = n32f_error_type_create(
    );
  } else {
    n32f_error_type = n32f_error_type_create(
    );
  }

  return n32f_error_type;
}


#ifdef n32f_error_type_MAIN

void test_n32f_error_type(int include_optional) {
    n32f_error_type_t* n32f_error_type_1 = instantiate_n32f_error_type(include_optional);

	cJSON* jsonn32f_error_type_1 = n32f_error_type_convertToJSON(n32f_error_type_1);
	printf("n32f_error_type :\n%s\n", cJSON_Print(jsonn32f_error_type_1));
	n32f_error_type_t* n32f_error_type_2 = n32f_error_type_parseFromJSON(jsonn32f_error_type_1);
	cJSON* jsonn32f_error_type_2 = n32f_error_type_convertToJSON(n32f_error_type_2);
	printf("repeating n32f_error_type:\n%s\n", cJSON_Print(jsonn32f_error_type_2));
}

int main() {
  test_n32f_error_type(1);
  test_n32f_error_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // n32f_error_type_MAIN
#endif // n32f_error_type_TEST
