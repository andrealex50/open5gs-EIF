#ifndef alternative_service_requirements_data_TEST
#define alternative_service_requirements_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alternative_service_requirements_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alternative_service_requirements_data.h"
alternative_service_requirements_data_t* instantiate_alternative_service_requirements_data(int include_optional);



alternative_service_requirements_data_t* instantiate_alternative_service_requirements_data(int include_optional) {
  alternative_service_requirements_data_t* alternative_service_requirements_data = NULL;
  if (include_optional) {
    alternative_service_requirements_data = alternative_service_requirements_data_create(
      "0",
      "a",
      "a",
      1
    );
  } else {
    alternative_service_requirements_data = alternative_service_requirements_data_create(
      "0",
      "a",
      "a",
      1
    );
  }

  return alternative_service_requirements_data;
}


#ifdef alternative_service_requirements_data_MAIN

void test_alternative_service_requirements_data(int include_optional) {
    alternative_service_requirements_data_t* alternative_service_requirements_data_1 = instantiate_alternative_service_requirements_data(include_optional);

	cJSON* jsonalternative_service_requirements_data_1 = alternative_service_requirements_data_convertToJSON(alternative_service_requirements_data_1);
	printf("alternative_service_requirements_data :\n%s\n", cJSON_Print(jsonalternative_service_requirements_data_1));
	alternative_service_requirements_data_t* alternative_service_requirements_data_2 = alternative_service_requirements_data_parseFromJSON(jsonalternative_service_requirements_data_1);
	cJSON* jsonalternative_service_requirements_data_2 = alternative_service_requirements_data_convertToJSON(alternative_service_requirements_data_2);
	printf("repeating alternative_service_requirements_data:\n%s\n", cJSON_Print(jsonalternative_service_requirements_data_2));
}

int main() {
  test_alternative_service_requirements_data(1);
  test_alternative_service_requirements_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // alternative_service_requirements_data_MAIN
#endif // alternative_service_requirements_data_TEST
