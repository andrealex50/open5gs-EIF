#ifndef identity_range_TEST
#define identity_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define identity_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/identity_range.h"
identity_range_t* instantiate_identity_range(int include_optional);



identity_range_t* instantiate_identity_range(int include_optional) {
  identity_range_t* identity_range = NULL;
  if (include_optional) {
    identity_range = identity_range_create(
      "a",
      "a",
      "0"
    );
  } else {
    identity_range = identity_range_create(
      "a",
      "a",
      "0"
    );
  }

  return identity_range;
}


#ifdef identity_range_MAIN

void test_identity_range(int include_optional) {
    identity_range_t* identity_range_1 = instantiate_identity_range(include_optional);

	cJSON* jsonidentity_range_1 = identity_range_convertToJSON(identity_range_1);
	printf("identity_range :\n%s\n", cJSON_Print(jsonidentity_range_1));
	identity_range_t* identity_range_2 = identity_range_parseFromJSON(jsonidentity_range_1);
	cJSON* jsonidentity_range_2 = identity_range_convertToJSON(identity_range_2);
	printf("repeating identity_range:\n%s\n", cJSON_Print(jsonidentity_range_2));
}

int main() {
  test_identity_range(1);
  test_identity_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // identity_range_MAIN
#endif // identity_range_TEST
