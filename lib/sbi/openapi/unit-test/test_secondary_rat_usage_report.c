#ifndef secondary_rat_usage_report_TEST
#define secondary_rat_usage_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secondary_rat_usage_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secondary_rat_usage_report.h"
secondary_rat_usage_report_t* instantiate_secondary_rat_usage_report(int include_optional);



secondary_rat_usage_report_t* instantiate_secondary_rat_usage_report(int include_optional) {
  secondary_rat_usage_report_t* secondary_rat_usage_report = NULL;
  if (include_optional) {
    secondary_rat_usage_report = secondary_rat_usage_report_create(
      nsmf_pdusession_secondary_rat_usage_report__NR,
      list_createList()
    );
  } else {
    secondary_rat_usage_report = secondary_rat_usage_report_create(
      nsmf_pdusession_secondary_rat_usage_report__NR,
      list_createList()
    );
  }

  return secondary_rat_usage_report;
}


#ifdef secondary_rat_usage_report_MAIN

void test_secondary_rat_usage_report(int include_optional) {
    secondary_rat_usage_report_t* secondary_rat_usage_report_1 = instantiate_secondary_rat_usage_report(include_optional);

	cJSON* jsonsecondary_rat_usage_report_1 = secondary_rat_usage_report_convertToJSON(secondary_rat_usage_report_1);
	printf("secondary_rat_usage_report :\n%s\n", cJSON_Print(jsonsecondary_rat_usage_report_1));
	secondary_rat_usage_report_t* secondary_rat_usage_report_2 = secondary_rat_usage_report_parseFromJSON(jsonsecondary_rat_usage_report_1);
	cJSON* jsonsecondary_rat_usage_report_2 = secondary_rat_usage_report_convertToJSON(secondary_rat_usage_report_2);
	printf("repeating secondary_rat_usage_report:\n%s\n", cJSON_Print(jsonsecondary_rat_usage_report_2));
}

int main() {
  test_secondary_rat_usage_report(1);
  test_secondary_rat_usage_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // secondary_rat_usage_report_MAIN
#endif // secondary_rat_usage_report_TEST
