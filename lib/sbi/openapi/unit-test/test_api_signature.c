#ifndef api_signature_TEST
#define api_signature_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_signature_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_signature.h"
api_signature_t* instantiate_api_signature(int include_optional);



api_signature_t* instantiate_api_signature(int include_optional) {
  api_signature_t* api_signature = NULL;
  if (include_optional) {
    api_signature = api_signature_create(
      "0"
    );
  } else {
    api_signature = api_signature_create(
      "0"
    );
  }

  return api_signature;
}


#ifdef api_signature_MAIN

void test_api_signature(int include_optional) {
    api_signature_t* api_signature_1 = instantiate_api_signature(include_optional);

	cJSON* jsonapi_signature_1 = api_signature_convertToJSON(api_signature_1);
	printf("api_signature :\n%s\n", cJSON_Print(jsonapi_signature_1));
	api_signature_t* api_signature_2 = api_signature_parseFromJSON(jsonapi_signature_1);
	cJSON* jsonapi_signature_2 = api_signature_convertToJSON(api_signature_2);
	printf("repeating api_signature:\n%s\n", cJSON_Print(jsonapi_signature_2));
}

int main() {
  test_api_signature(1);
  test_api_signature(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_signature_MAIN
#endif // api_signature_TEST
