#ifndef report_item_TEST
#define report_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define report_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/report_item.h"
report_item_t* instantiate_report_item(int include_optional);



report_item_t* instantiate_report_item(int include_optional) {
  report_item_t* report_item = NULL;
  if (include_optional) {
    report_item = report_item_create(
      "0",
      "0"
    );
  } else {
    report_item = report_item_create(
      "0",
      "0"
    );
  }

  return report_item;
}


#ifdef report_item_MAIN

void test_report_item(int include_optional) {
    report_item_t* report_item_1 = instantiate_report_item(include_optional);

	cJSON* jsonreport_item_1 = report_item_convertToJSON(report_item_1);
	printf("report_item :\n%s\n", cJSON_Print(jsonreport_item_1));
	report_item_t* report_item_2 = report_item_parseFromJSON(jsonreport_item_1);
	cJSON* jsonreport_item_2 = report_item_convertToJSON(report_item_2);
	printf("repeating report_item:\n%s\n", cJSON_Print(jsonreport_item_2));
}

int main() {
  test_report_item(1);
  test_report_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // report_item_MAIN
#endif // report_item_TEST
