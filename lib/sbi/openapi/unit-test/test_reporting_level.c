#ifndef reporting_level_TEST
#define reporting_level_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reporting_level_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reporting_level.h"
reporting_level_t* instantiate_reporting_level(int include_optional);



reporting_level_t* instantiate_reporting_level(int include_optional) {
  reporting_level_t* reporting_level = NULL;
  if (include_optional) {
    reporting_level = reporting_level_create(
    );
  } else {
    reporting_level = reporting_level_create(
    );
  }

  return reporting_level;
}


#ifdef reporting_level_MAIN

void test_reporting_level(int include_optional) {
    reporting_level_t* reporting_level_1 = instantiate_reporting_level(include_optional);

	cJSON* jsonreporting_level_1 = reporting_level_convertToJSON(reporting_level_1);
	printf("reporting_level :\n%s\n", cJSON_Print(jsonreporting_level_1));
	reporting_level_t* reporting_level_2 = reporting_level_parseFromJSON(jsonreporting_level_1);
	cJSON* jsonreporting_level_2 = reporting_level_convertToJSON(reporting_level_2);
	printf("repeating reporting_level:\n%s\n", cJSON_Print(jsonreporting_level_2));
}

int main() {
  test_reporting_level(1);
  test_reporting_level(0);

  printf("Hello world \n");
  return 0;
}

#endif // reporting_level_MAIN
#endif // reporting_level_TEST
