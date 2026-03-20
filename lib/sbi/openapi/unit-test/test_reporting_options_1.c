#ifndef reporting_options_1_TEST
#define reporting_options_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reporting_options_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reporting_options_1.h"
reporting_options_1_t* instantiate_reporting_options_1(int include_optional);

#include "test_event_report_mode.c"


reporting_options_1_t* instantiate_reporting_options_1(int include_optional) {
  reporting_options_1_t* reporting_options_1 = NULL;
  if (include_optional) {
    reporting_options_1 = reporting_options_1_create(
      null,
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      56,
      56,
      nudr_datarepository_api_openapi_file_reporting_options_1__ACTIVATE
    );
  } else {
    reporting_options_1 = reporting_options_1_create(
      null,
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      56,
      56,
      nudr_datarepository_api_openapi_file_reporting_options_1__ACTIVATE
    );
  }

  return reporting_options_1;
}


#ifdef reporting_options_1_MAIN

void test_reporting_options_1(int include_optional) {
    reporting_options_1_t* reporting_options_1_1 = instantiate_reporting_options_1(include_optional);

	cJSON* jsonreporting_options_1_1 = reporting_options_1_convertToJSON(reporting_options_1_1);
	printf("reporting_options_1 :\n%s\n", cJSON_Print(jsonreporting_options_1_1));
	reporting_options_1_t* reporting_options_1_2 = reporting_options_1_parseFromJSON(jsonreporting_options_1_1);
	cJSON* jsonreporting_options_1_2 = reporting_options_1_convertToJSON(reporting_options_1_2);
	printf("repeating reporting_options_1:\n%s\n", cJSON_Print(jsonreporting_options_1_2));
}

int main() {
  test_reporting_options_1(1);
  test_reporting_options_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // reporting_options_1_MAIN
#endif // reporting_options_1_TEST
