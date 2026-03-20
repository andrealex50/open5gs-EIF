#ifndef report_type_mdt_TEST
#define report_type_mdt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define report_type_mdt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/report_type_mdt.h"
report_type_mdt_t* instantiate_report_type_mdt(int include_optional);



report_type_mdt_t* instantiate_report_type_mdt(int include_optional) {
  report_type_mdt_t* report_type_mdt = NULL;
  if (include_optional) {
    report_type_mdt = report_type_mdt_create(
    );
  } else {
    report_type_mdt = report_type_mdt_create(
    );
  }

  return report_type_mdt;
}


#ifdef report_type_mdt_MAIN

void test_report_type_mdt(int include_optional) {
    report_type_mdt_t* report_type_mdt_1 = instantiate_report_type_mdt(include_optional);

	cJSON* jsonreport_type_mdt_1 = report_type_mdt_convertToJSON(report_type_mdt_1);
	printf("report_type_mdt :\n%s\n", cJSON_Print(jsonreport_type_mdt_1));
	report_type_mdt_t* report_type_mdt_2 = report_type_mdt_parseFromJSON(jsonreport_type_mdt_1);
	cJSON* jsonreport_type_mdt_2 = report_type_mdt_convertToJSON(report_type_mdt_2);
	printf("repeating report_type_mdt:\n%s\n", cJSON_Print(jsonreport_type_mdt_2));
}

int main() {
  test_report_type_mdt(1);
  test_report_type_mdt(0);

  printf("Hello world \n");
  return 0;
}

#endif // report_type_mdt_MAIN
#endif // report_type_mdt_TEST
