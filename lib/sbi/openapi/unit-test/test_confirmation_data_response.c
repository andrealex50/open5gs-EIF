#ifndef confirmation_data_response_TEST
#define confirmation_data_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define confirmation_data_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/confirmation_data_response.h"
confirmation_data_response_t* instantiate_confirmation_data_response(int include_optional);



confirmation_data_response_t* instantiate_confirmation_data_response(int include_optional) {
  confirmation_data_response_t* confirmation_data_response = NULL;
  if (include_optional) {
    confirmation_data_response = confirmation_data_response_create(
      ausf_api_confirmation_data_response__AUTHENTICATION_SUCCESS,
      "a",
      "a",
      list_createList()
    );
  } else {
    confirmation_data_response = confirmation_data_response_create(
      ausf_api_confirmation_data_response__AUTHENTICATION_SUCCESS,
      "a",
      "a",
      list_createList()
    );
  }

  return confirmation_data_response;
}


#ifdef confirmation_data_response_MAIN

void test_confirmation_data_response(int include_optional) {
    confirmation_data_response_t* confirmation_data_response_1 = instantiate_confirmation_data_response(include_optional);

	cJSON* jsonconfirmation_data_response_1 = confirmation_data_response_convertToJSON(confirmation_data_response_1);
	printf("confirmation_data_response :\n%s\n", cJSON_Print(jsonconfirmation_data_response_1));
	confirmation_data_response_t* confirmation_data_response_2 = confirmation_data_response_parseFromJSON(jsonconfirmation_data_response_1);
	cJSON* jsonconfirmation_data_response_2 = confirmation_data_response_convertToJSON(confirmation_data_response_2);
	printf("repeating confirmation_data_response:\n%s\n", cJSON_Print(jsonconfirmation_data_response_2));
}

int main() {
  test_confirmation_data_response(1);
  test_confirmation_data_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // confirmation_data_response_MAIN
#endif // confirmation_data_response_TEST
