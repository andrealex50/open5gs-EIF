#ifndef unrelated_class_TEST
#define unrelated_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unrelated_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unrelated_class.h"
unrelated_class_t* instantiate_unrelated_class(int include_optional);

#include "test_default_unrelated_class.c"
#include "test_external_unrelated_class.c"


unrelated_class_t* instantiate_unrelated_class(int include_optional) {
  unrelated_class_t* unrelated_class = NULL;
  if (include_optional) {
    unrelated_class = unrelated_class_create(
       // false, not to have infinite recursion
      instantiate_default_unrelated_class(0),
       // false, not to have infinite recursion
      instantiate_external_unrelated_class(0),
      list_createList()
    );
  } else {
    unrelated_class = unrelated_class_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return unrelated_class;
}


#ifdef unrelated_class_MAIN

void test_unrelated_class(int include_optional) {
    unrelated_class_t* unrelated_class_1 = instantiate_unrelated_class(include_optional);

	cJSON* jsonunrelated_class_1 = unrelated_class_convertToJSON(unrelated_class_1);
	printf("unrelated_class :\n%s\n", cJSON_Print(jsonunrelated_class_1));
	unrelated_class_t* unrelated_class_2 = unrelated_class_parseFromJSON(jsonunrelated_class_1);
	cJSON* jsonunrelated_class_2 = unrelated_class_convertToJSON(unrelated_class_2);
	printf("repeating unrelated_class:\n%s\n", cJSON_Print(jsonunrelated_class_2));
}

int main() {
  test_unrelated_class(1);
  test_unrelated_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // unrelated_class_MAIN
#endif // unrelated_class_TEST
