#ifndef accu_usage_report_TEST
#define accu_usage_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define accu_usage_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/accu_usage_report.h"
accu_usage_report_t* instantiate_accu_usage_report(int include_optional);



accu_usage_report_t* instantiate_accu_usage_report(int include_optional) {
  accu_usage_report_t* accu_usage_report = NULL;
  if (include_optional) {
    accu_usage_report = accu_usage_report_create(
      "0",
      0,
      0,
      0,
      56,
      0,
      0,
      0,
      56
    );
  } else {
    accu_usage_report = accu_usage_report_create(
      "0",
      0,
      0,
      0,
      56,
      0,
      0,
      0,
      56
    );
  }

  return accu_usage_report;
}


#ifdef accu_usage_report_MAIN

void test_accu_usage_report(int include_optional) {
    accu_usage_report_t* accu_usage_report_1 = instantiate_accu_usage_report(include_optional);

	cJSON* jsonaccu_usage_report_1 = accu_usage_report_convertToJSON(accu_usage_report_1);
	printf("accu_usage_report :\n%s\n", cJSON_Print(jsonaccu_usage_report_1));
	accu_usage_report_t* accu_usage_report_2 = accu_usage_report_parseFromJSON(jsonaccu_usage_report_1);
	cJSON* jsonaccu_usage_report_2 = accu_usage_report_convertToJSON(accu_usage_report_2);
	printf("repeating accu_usage_report:\n%s\n", cJSON_Print(jsonaccu_usage_report_2));
}

int main() {
  test_accu_usage_report(1);
  test_accu_usage_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // accu_usage_report_MAIN
#endif // accu_usage_report_TEST
