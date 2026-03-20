#ifndef lpi_TEST
#define lpi_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lpi_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lpi.h"
lpi_t* instantiate_lpi(int include_optional);

#include "test_valid_time_period.c"


lpi_t* instantiate_lpi(int include_optional) {
  lpi_t* lpi = NULL;
  if (include_optional) {
    lpi = lpi_create(
      nudr_datarepository_api_openapi_file_lpi__LOCATION_DISALLOWED,
       // false, not to have infinite recursion
      instantiate_valid_time_period(0)
    );
  } else {
    lpi = lpi_create(
      nudr_datarepository_api_openapi_file_lpi__LOCATION_DISALLOWED,
      NULL
    );
  }

  return lpi;
}


#ifdef lpi_MAIN

void test_lpi(int include_optional) {
    lpi_t* lpi_1 = instantiate_lpi(include_optional);

	cJSON* jsonlpi_1 = lpi_convertToJSON(lpi_1);
	printf("lpi :\n%s\n", cJSON_Print(jsonlpi_1));
	lpi_t* lpi_2 = lpi_parseFromJSON(jsonlpi_1);
	cJSON* jsonlpi_2 = lpi_convertToJSON(lpi_2);
	printf("repeating lpi:\n%s\n", cJSON_Print(jsonlpi_2));
}

int main() {
  test_lpi(1);
  test_lpi(0);

  printf("Hello world \n");
  return 0;
}

#endif // lpi_MAIN
#endif // lpi_TEST
