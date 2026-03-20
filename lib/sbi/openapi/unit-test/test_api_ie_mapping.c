#ifndef api_ie_mapping_TEST
#define api_ie_mapping_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define api_ie_mapping_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/api_ie_mapping.h"
api_ie_mapping_t* instantiate_api_ie_mapping(int include_optional);

#include "test_api_signature.c"


api_ie_mapping_t* instantiate_api_ie_mapping(int include_optional) {
  api_ie_mapping_t* api_ie_mapping = NULL;
  if (include_optional) {
    api_ie_mapping = api_ie_mapping_create(
      null,
      n32_handshake_api_api_ie_mapping__GET,
      list_createList()
    );
  } else {
    api_ie_mapping = api_ie_mapping_create(
      null,
      n32_handshake_api_api_ie_mapping__GET,
      list_createList()
    );
  }

  return api_ie_mapping;
}


#ifdef api_ie_mapping_MAIN

void test_api_ie_mapping(int include_optional) {
    api_ie_mapping_t* api_ie_mapping_1 = instantiate_api_ie_mapping(include_optional);

	cJSON* jsonapi_ie_mapping_1 = api_ie_mapping_convertToJSON(api_ie_mapping_1);
	printf("api_ie_mapping :\n%s\n", cJSON_Print(jsonapi_ie_mapping_1));
	api_ie_mapping_t* api_ie_mapping_2 = api_ie_mapping_parseFromJSON(jsonapi_ie_mapping_1);
	cJSON* jsonapi_ie_mapping_2 = api_ie_mapping_convertToJSON(api_ie_mapping_2);
	printf("repeating api_ie_mapping:\n%s\n", cJSON_Print(jsonapi_ie_mapping_2));
}

int main() {
  test_api_ie_mapping(1);
  test_api_ie_mapping(0);

  printf("Hello world \n");
  return 0;
}

#endif // api_ie_mapping_MAIN
#endif // api_ie_mapping_TEST
