#ifndef reporting_options_TEST
#define reporting_options_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reporting_options_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reporting_options.h"
reporting_options_t* instantiate_reporting_options(int include_optional);

#include "test_event_report_mode.c"


reporting_options_t* instantiate_reporting_options(int include_optional) {
  reporting_options_t* reporting_options = NULL;
  if (include_optional) {
    reporting_options = reporting_options_create(
      null,
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      56,
      56,
      nudr_datarepository_api_openapi_file_reporting_options__ACTIVATE
    );
  } else {
    reporting_options = reporting_options_create(
      null,
      56,
      "2013-10-20T19:20:30+01:00",
      1,
      56,
      56,
      nudr_datarepository_api_openapi_file_reporting_options__ACTIVATE
    );
  }

  return reporting_options;
}


#ifdef reporting_options_MAIN

void test_reporting_options(int include_optional) {
    reporting_options_t* reporting_options_1 = instantiate_reporting_options(include_optional);

	cJSON* jsonreporting_options_1 = reporting_options_convertToJSON(reporting_options_1);
	printf("reporting_options :\n%s\n", cJSON_Print(jsonreporting_options_1));
	reporting_options_t* reporting_options_2 = reporting_options_parseFromJSON(jsonreporting_options_1);
	cJSON* jsonreporting_options_2 = reporting_options_convertToJSON(reporting_options_2);
	printf("repeating reporting_options:\n%s\n", cJSON_Print(jsonreporting_options_2));
}

int main() {
  test_reporting_options(1);
  test_reporting_options(0);

  printf("Hello world \n");
  return 0;
}

#endif // reporting_options_MAIN
#endif // reporting_options_TEST
