#ifndef supi_range_TEST
#define supi_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supi_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supi_range.h"
supi_range_t* instantiate_supi_range(int include_optional);



supi_range_t* instantiate_supi_range(int include_optional) {
  supi_range_t* supi_range = NULL;
  if (include_optional) {
    supi_range = supi_range_create(
      "a",
      "a",
      "0"
    );
  } else {
    supi_range = supi_range_create(
      "a",
      "a",
      "0"
    );
  }

  return supi_range;
}


#ifdef supi_range_MAIN

void test_supi_range(int include_optional) {
    supi_range_t* supi_range_1 = instantiate_supi_range(include_optional);

	cJSON* jsonsupi_range_1 = supi_range_convertToJSON(supi_range_1);
	printf("supi_range :\n%s\n", cJSON_Print(jsonsupi_range_1));
	supi_range_t* supi_range_2 = supi_range_parseFromJSON(jsonsupi_range_1);
	cJSON* jsonsupi_range_2 = supi_range_convertToJSON(supi_range_2);
	printf("repeating supi_range:\n%s\n", cJSON_Print(jsonsupi_range_2));
}

int main() {
  test_supi_range(1);
  test_supi_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // supi_range_MAIN
#endif // supi_range_TEST
