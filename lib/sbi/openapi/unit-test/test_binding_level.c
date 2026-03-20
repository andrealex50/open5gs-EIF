#ifndef binding_level_TEST
#define binding_level_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define binding_level_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/binding_level.h"
binding_level_t* instantiate_binding_level(int include_optional);



binding_level_t* instantiate_binding_level(int include_optional) {
  binding_level_t* binding_level = NULL;
  if (include_optional) {
    binding_level = binding_level_create(
    );
  } else {
    binding_level = binding_level_create(
    );
  }

  return binding_level;
}


#ifdef binding_level_MAIN

void test_binding_level(int include_optional) {
    binding_level_t* binding_level_1 = instantiate_binding_level(include_optional);

	cJSON* jsonbinding_level_1 = binding_level_convertToJSON(binding_level_1);
	printf("binding_level :\n%s\n", cJSON_Print(jsonbinding_level_1));
	binding_level_t* binding_level_2 = binding_level_parseFromJSON(jsonbinding_level_1);
	cJSON* jsonbinding_level_2 = binding_level_convertToJSON(binding_level_2);
	printf("repeating binding_level:\n%s\n", cJSON_Print(jsonbinding_level_2));
}

int main() {
  test_binding_level(1);
  test_binding_level(0);

  printf("Hello world \n");
  return 0;
}

#endif // binding_level_MAIN
#endif // binding_level_TEST
