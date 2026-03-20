#ifndef reporting_frequency_TEST
#define reporting_frequency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reporting_frequency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reporting_frequency.h"
reporting_frequency_t* instantiate_reporting_frequency(int include_optional);



reporting_frequency_t* instantiate_reporting_frequency(int include_optional) {
  reporting_frequency_t* reporting_frequency = NULL;
  if (include_optional) {
    reporting_frequency = reporting_frequency_create(
    );
  } else {
    reporting_frequency = reporting_frequency_create(
    );
  }

  return reporting_frequency;
}


#ifdef reporting_frequency_MAIN

void test_reporting_frequency(int include_optional) {
    reporting_frequency_t* reporting_frequency_1 = instantiate_reporting_frequency(include_optional);

	cJSON* jsonreporting_frequency_1 = reporting_frequency_convertToJSON(reporting_frequency_1);
	printf("reporting_frequency :\n%s\n", cJSON_Print(jsonreporting_frequency_1));
	reporting_frequency_t* reporting_frequency_2 = reporting_frequency_parseFromJSON(jsonreporting_frequency_1);
	cJSON* jsonreporting_frequency_2 = reporting_frequency_convertToJSON(reporting_frequency_2);
	printf("repeating reporting_frequency:\n%s\n", cJSON_Print(jsonreporting_frequency_2));
}

int main() {
  test_reporting_frequency(1);
  test_reporting_frequency(0);

  printf("Hello world \n");
  return 0;
}

#endif // reporting_frequency_MAIN
#endif // reporting_frequency_TEST
