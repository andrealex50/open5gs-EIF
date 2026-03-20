#ifndef default_unrelated_class_TEST
#define default_unrelated_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define default_unrelated_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/default_unrelated_class.h"
default_unrelated_class_t* instantiate_default_unrelated_class(int include_optional);

#include "test_valid_time_period.c"


default_unrelated_class_t* instantiate_default_unrelated_class(int include_optional) {
  default_unrelated_class_t* default_unrelated_class = NULL;
  if (include_optional) {
    default_unrelated_class = default_unrelated_class_create(
      list_createList(),
      nudr_datarepository_api_openapi_file_default_unrelated_class__LOCATION_NOT_ALLOWED,
      nudr_datarepository_api_openapi_file_default_unrelated_class__CODEWORD_CHECK_IN_UE,
       // false, not to have infinite recursion
      instantiate_valid_time_period(0),
      list_createList()
    );
  } else {
    default_unrelated_class = default_unrelated_class_create(
      list_createList(),
      nudr_datarepository_api_openapi_file_default_unrelated_class__LOCATION_NOT_ALLOWED,
      nudr_datarepository_api_openapi_file_default_unrelated_class__CODEWORD_CHECK_IN_UE,
      NULL,
      list_createList()
    );
  }

  return default_unrelated_class;
}


#ifdef default_unrelated_class_MAIN

void test_default_unrelated_class(int include_optional) {
    default_unrelated_class_t* default_unrelated_class_1 = instantiate_default_unrelated_class(include_optional);

	cJSON* jsondefault_unrelated_class_1 = default_unrelated_class_convertToJSON(default_unrelated_class_1);
	printf("default_unrelated_class :\n%s\n", cJSON_Print(jsondefault_unrelated_class_1));
	default_unrelated_class_t* default_unrelated_class_2 = default_unrelated_class_parseFromJSON(jsondefault_unrelated_class_1);
	cJSON* jsondefault_unrelated_class_2 = default_unrelated_class_convertToJSON(default_unrelated_class_2);
	printf("repeating default_unrelated_class:\n%s\n", cJSON_Print(jsondefault_unrelated_class_2));
}

int main() {
  test_default_unrelated_class(1);
  test_default_unrelated_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // default_unrelated_class_MAIN
#endif // default_unrelated_class_TEST
