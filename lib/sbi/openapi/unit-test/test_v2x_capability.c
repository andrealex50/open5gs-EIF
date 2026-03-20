#ifndef v2x_capability_TEST
#define v2x_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v2x_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v2x_capability.h"
v2x_capability_t* instantiate_v2x_capability(int include_optional);



v2x_capability_t* instantiate_v2x_capability(int include_optional) {
  v2x_capability_t* v2x_capability = NULL;
  if (include_optional) {
    v2x_capability = v2x_capability_create(
      1,
      1
    );
  } else {
    v2x_capability = v2x_capability_create(
      1,
      1
    );
  }

  return v2x_capability;
}


#ifdef v2x_capability_MAIN

void test_v2x_capability(int include_optional) {
    v2x_capability_t* v2x_capability_1 = instantiate_v2x_capability(include_optional);

	cJSON* jsonv2x_capability_1 = v2x_capability_convertToJSON(v2x_capability_1);
	printf("v2x_capability :\n%s\n", cJSON_Print(jsonv2x_capability_1));
	v2x_capability_t* v2x_capability_2 = v2x_capability_parseFromJSON(jsonv2x_capability_1);
	cJSON* jsonv2x_capability_2 = v2x_capability_convertToJSON(v2x_capability_2);
	printf("repeating v2x_capability:\n%s\n", cJSON_Print(jsonv2x_capability_2));
}

int main() {
  test_v2x_capability(1);
  test_v2x_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // v2x_capability_MAIN
#endif // v2x_capability_TEST
