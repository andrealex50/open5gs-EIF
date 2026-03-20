#ifndef registration_data_set_name_TEST
#define registration_data_set_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_data_set_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_data_set_name.h"
registration_data_set_name_t* instantiate_registration_data_set_name(int include_optional);



registration_data_set_name_t* instantiate_registration_data_set_name(int include_optional) {
  registration_data_set_name_t* registration_data_set_name = NULL;
  if (include_optional) {
    registration_data_set_name = registration_data_set_name_create(
    );
  } else {
    registration_data_set_name = registration_data_set_name_create(
    );
  }

  return registration_data_set_name;
}


#ifdef registration_data_set_name_MAIN

void test_registration_data_set_name(int include_optional) {
    registration_data_set_name_t* registration_data_set_name_1 = instantiate_registration_data_set_name(include_optional);

	cJSON* jsonregistration_data_set_name_1 = registration_data_set_name_convertToJSON(registration_data_set_name_1);
	printf("registration_data_set_name :\n%s\n", cJSON_Print(jsonregistration_data_set_name_1));
	registration_data_set_name_t* registration_data_set_name_2 = registration_data_set_name_parseFromJSON(jsonregistration_data_set_name_1);
	cJSON* jsonregistration_data_set_name_2 = registration_data_set_name_convertToJSON(registration_data_set_name_2);
	printf("repeating registration_data_set_name:\n%s\n", cJSON_Print(jsonregistration_data_set_name_2));
}

int main() {
  test_registration_data_set_name(1);
  test_registration_data_set_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_data_set_name_MAIN
#endif // registration_data_set_name_TEST
