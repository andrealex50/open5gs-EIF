#ifndef confirmation_data_TEST
#define confirmation_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define confirmation_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/confirmation_data.h"
confirmation_data_t* instantiate_confirmation_data(int include_optional);



confirmation_data_t* instantiate_confirmation_data(int include_optional) {
  confirmation_data_t* confirmation_data = NULL;
  if (include_optional) {
    confirmation_data = confirmation_data_create(
      "a",
      "a"
    );
  } else {
    confirmation_data = confirmation_data_create(
      "a",
      "a"
    );
  }

  return confirmation_data;
}


#ifdef confirmation_data_MAIN

void test_confirmation_data(int include_optional) {
    confirmation_data_t* confirmation_data_1 = instantiate_confirmation_data(include_optional);

	cJSON* jsonconfirmation_data_1 = confirmation_data_convertToJSON(confirmation_data_1);
	printf("confirmation_data :\n%s\n", cJSON_Print(jsonconfirmation_data_1));
	confirmation_data_t* confirmation_data_2 = confirmation_data_parseFromJSON(jsonconfirmation_data_1);
	cJSON* jsonconfirmation_data_2 = confirmation_data_convertToJSON(confirmation_data_2);
	printf("repeating confirmation_data:\n%s\n", cJSON_Print(jsonconfirmation_data_2));
}

int main() {
  test_confirmation_data(1);
  test_confirmation_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // confirmation_data_MAIN
#endif // confirmation_data_TEST
