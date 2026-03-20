#ifndef operator_specific_data_container_value_TEST
#define operator_specific_data_container_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define operator_specific_data_container_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/operator_specific_data_container_value.h"
operator_specific_data_container_value_t* instantiate_operator_specific_data_container_value(int include_optional);



operator_specific_data_container_value_t* instantiate_operator_specific_data_container_value(int include_optional) {
  operator_specific_data_container_value_t* operator_specific_data_container_value = NULL;
  if (include_optional) {
    operator_specific_data_container_value = operator_specific_data_container_value_create(
    );
  } else {
    operator_specific_data_container_value = operator_specific_data_container_value_create(
    );
  }

  return operator_specific_data_container_value;
}


#ifdef operator_specific_data_container_value_MAIN

void test_operator_specific_data_container_value(int include_optional) {
    operator_specific_data_container_value_t* operator_specific_data_container_value_1 = instantiate_operator_specific_data_container_value(include_optional);

	cJSON* jsonoperator_specific_data_container_value_1 = operator_specific_data_container_value_convertToJSON(operator_specific_data_container_value_1);
	printf("operator_specific_data_container_value :\n%s\n", cJSON_Print(jsonoperator_specific_data_container_value_1));
	operator_specific_data_container_value_t* operator_specific_data_container_value_2 = operator_specific_data_container_value_parseFromJSON(jsonoperator_specific_data_container_value_1);
	cJSON* jsonoperator_specific_data_container_value_2 = operator_specific_data_container_value_convertToJSON(operator_specific_data_container_value_2);
	printf("repeating operator_specific_data_container_value:\n%s\n", cJSON_Print(jsonoperator_specific_data_container_value_2));
}

int main() {
  test_operator_specific_data_container_value(1);
  test_operator_specific_data_container_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // operator_specific_data_container_value_MAIN
#endif // operator_specific_data_container_value_TEST
