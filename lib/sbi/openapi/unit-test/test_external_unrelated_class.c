#ifndef external_unrelated_class_TEST
#define external_unrelated_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define external_unrelated_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/external_unrelated_class.h"
external_unrelated_class_t* instantiate_external_unrelated_class(int include_optional);



external_unrelated_class_t* instantiate_external_unrelated_class(int include_optional) {
  external_unrelated_class_t* external_unrelated_class = NULL;
  if (include_optional) {
    external_unrelated_class = external_unrelated_class_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    external_unrelated_class = external_unrelated_class_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return external_unrelated_class;
}


#ifdef external_unrelated_class_MAIN

void test_external_unrelated_class(int include_optional) {
    external_unrelated_class_t* external_unrelated_class_1 = instantiate_external_unrelated_class(include_optional);

	cJSON* jsonexternal_unrelated_class_1 = external_unrelated_class_convertToJSON(external_unrelated_class_1);
	printf("external_unrelated_class :\n%s\n", cJSON_Print(jsonexternal_unrelated_class_1));
	external_unrelated_class_t* external_unrelated_class_2 = external_unrelated_class_parseFromJSON(jsonexternal_unrelated_class_1);
	cJSON* jsonexternal_unrelated_class_2 = external_unrelated_class_convertToJSON(external_unrelated_class_2);
	printf("repeating external_unrelated_class:\n%s\n", cJSON_Print(jsonexternal_unrelated_class_2));
}

int main() {
  test_external_unrelated_class(1);
  test_external_unrelated_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // external_unrelated_class_MAIN
#endif // external_unrelated_class_TEST
