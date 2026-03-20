#ifndef operator_specific_data_container_TEST
#define operator_specific_data_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define operator_specific_data_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/operator_specific_data_container.h"
operator_specific_data_container_t* instantiate_operator_specific_data_container(int include_optional);

#include "test_operator_specific_data_container_value.c"


operator_specific_data_container_t* instantiate_operator_specific_data_container(int include_optional) {
  operator_specific_data_container_t* operator_specific_data_container = NULL;
  if (include_optional) {
    operator_specific_data_container = operator_specific_data_container_create(
      nudr_datarepository_api_openapi_file_operator_specific_data_container_DATATYPE_string,
      "0",
      null,
      "a",
      list_createList()
    );
  } else {
    operator_specific_data_container = operator_specific_data_container_create(
      nudr_datarepository_api_openapi_file_operator_specific_data_container_DATATYPE_string,
      "0",
      null,
      "a",
      list_createList()
    );
  }

  return operator_specific_data_container;
}


#ifdef operator_specific_data_container_MAIN

void test_operator_specific_data_container(int include_optional) {
    operator_specific_data_container_t* operator_specific_data_container_1 = instantiate_operator_specific_data_container(include_optional);

	cJSON* jsonoperator_specific_data_container_1 = operator_specific_data_container_convertToJSON(operator_specific_data_container_1);
	printf("operator_specific_data_container :\n%s\n", cJSON_Print(jsonoperator_specific_data_container_1));
	operator_specific_data_container_t* operator_specific_data_container_2 = operator_specific_data_container_parseFromJSON(jsonoperator_specific_data_container_1);
	cJSON* jsonoperator_specific_data_container_2 = operator_specific_data_container_convertToJSON(operator_specific_data_container_2);
	printf("repeating operator_specific_data_container:\n%s\n", cJSON_Print(jsonoperator_specific_data_container_2));
}

int main() {
  test_operator_specific_data_container(1);
  test_operator_specific_data_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // operator_specific_data_container_MAIN
#endif // operator_specific_data_container_TEST
