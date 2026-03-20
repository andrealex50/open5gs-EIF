#ifndef error_report_TEST
#define error_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define error_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/error_report.h"
error_report_t* instantiate_error_report(int include_optional);

#include "test_problem_details.c"


error_report_t* instantiate_error_report(int include_optional) {
  error_report_t* error_report = NULL;
  if (include_optional) {
    error_report = error_report_create(
       // false, not to have infinite recursion
      instantiate_problem_details(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    error_report = error_report_create(
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return error_report;
}


#ifdef error_report_MAIN

void test_error_report(int include_optional) {
    error_report_t* error_report_1 = instantiate_error_report(include_optional);

	cJSON* jsonerror_report_1 = error_report_convertToJSON(error_report_1);
	printf("error_report :\n%s\n", cJSON_Print(jsonerror_report_1));
	error_report_t* error_report_2 = error_report_parseFromJSON(jsonerror_report_1);
	cJSON* jsonerror_report_2 = error_report_convertToJSON(error_report_2);
	printf("repeating error_report:\n%s\n", cJSON_Print(jsonerror_report_2));
}

int main() {
  test_error_report(1);
  test_error_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // error_report_MAIN
#endif // error_report_TEST
