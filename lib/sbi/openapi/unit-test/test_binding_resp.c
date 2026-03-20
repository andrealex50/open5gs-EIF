#ifndef binding_resp_TEST
#define binding_resp_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define binding_resp_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/binding_resp.h"
binding_resp_t* instantiate_binding_resp(int include_optional);



binding_resp_t* instantiate_binding_resp(int include_optional) {
  binding_resp_t* binding_resp = NULL;
  if (include_optional) {
    binding_resp = binding_resp_create(
      "a",
      list_createList()
    );
  } else {
    binding_resp = binding_resp_create(
      "a",
      list_createList()
    );
  }

  return binding_resp;
}


#ifdef binding_resp_MAIN

void test_binding_resp(int include_optional) {
    binding_resp_t* binding_resp_1 = instantiate_binding_resp(include_optional);

	cJSON* jsonbinding_resp_1 = binding_resp_convertToJSON(binding_resp_1);
	printf("binding_resp :\n%s\n", cJSON_Print(jsonbinding_resp_1));
	binding_resp_t* binding_resp_2 = binding_resp_parseFromJSON(jsonbinding_resp_1);
	cJSON* jsonbinding_resp_2 = binding_resp_convertToJSON(binding_resp_2);
	printf("repeating binding_resp:\n%s\n", cJSON_Print(jsonbinding_resp_2));
}

int main() {
  test_binding_resp(1);
  test_binding_resp(0);

  printf("Hello world \n");
  return 0;
}

#endif // binding_resp_MAIN
#endif // binding_resp_TEST
