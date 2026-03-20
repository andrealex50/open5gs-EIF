#ifndef options_response_TEST
#define options_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define options_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/options_response.h"
options_response_t* instantiate_options_response(int include_optional);



options_response_t* instantiate_options_response(int include_optional) {
  options_response_t* options_response = NULL;
  if (include_optional) {
    options_response = options_response_create(
      "a"
    );
  } else {
    options_response = options_response_create(
      "a"
    );
  }

  return options_response;
}


#ifdef options_response_MAIN

void test_options_response(int include_optional) {
    options_response_t* options_response_1 = instantiate_options_response(include_optional);

	cJSON* jsonoptions_response_1 = options_response_convertToJSON(options_response_1);
	printf("options_response :\n%s\n", cJSON_Print(jsonoptions_response_1));
	options_response_t* options_response_2 = options_response_parseFromJSON(jsonoptions_response_1);
	cJSON* jsonoptions_response_2 = options_response_convertToJSON(options_response_2);
	printf("repeating options_response:\n%s\n", cJSON_Print(jsonoptions_response_2));
}

int main() {
  test_options_response(1);
  test_options_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // options_response_MAIN
#endif // options_response_TEST
