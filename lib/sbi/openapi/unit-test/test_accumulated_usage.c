#ifndef accumulated_usage_TEST
#define accumulated_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accumulated_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accumulated_usage.h"
accumulated_usage_t* instantiate_accumulated_usage(int include_optional);



accumulated_usage_t* instantiate_accumulated_usage(int include_optional) {
  accumulated_usage_t* accumulated_usage = NULL;
  if (include_optional) {
    accumulated_usage = accumulated_usage_create(
      0,
      0,
      0,
      0
    );
  } else {
    accumulated_usage = accumulated_usage_create(
      0,
      0,
      0,
      0
    );
  }

  return accumulated_usage;
}


#ifdef accumulated_usage_MAIN

void test_accumulated_usage(int include_optional) {
    accumulated_usage_t* accumulated_usage_1 = instantiate_accumulated_usage(include_optional);

	cJSON* jsonaccumulated_usage_1 = accumulated_usage_convertToJSON(accumulated_usage_1);
	printf("accumulated_usage :\n%s\n", cJSON_Print(jsonaccumulated_usage_1));
	accumulated_usage_t* accumulated_usage_2 = accumulated_usage_parseFromJSON(jsonaccumulated_usage_1);
	cJSON* jsonaccumulated_usage_2 = accumulated_usage_convertToJSON(accumulated_usage_2);
	printf("repeating accumulated_usage:\n%s\n", cJSON_Print(jsonaccumulated_usage_2));
}

int main() {
  test_accumulated_usage(1);
  test_accumulated_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // accumulated_usage_MAIN
#endif // accumulated_usage_TEST
