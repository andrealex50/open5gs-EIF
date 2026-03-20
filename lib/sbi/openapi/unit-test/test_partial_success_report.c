#ifndef partial_success_report_TEST
#define partial_success_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define partial_success_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/partial_success_report.h"
partial_success_report_t* instantiate_partial_success_report(int include_optional);

#include "test_ue_camping_rep.c"


partial_success_report_t* instantiate_partial_success_report(int include_optional) {
  partial_success_report_t* partial_success_report = NULL;
  if (include_optional) {
    partial_success_report = partial_success_report_create(
      npcf_smpolicycontrol_api_partial_success_report__PCC_RULE_EVENT,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ue_camping_rep(0),
      list_createList(),
      list_createList()
    );
  } else {
    partial_success_report = partial_success_report_create(
      npcf_smpolicycontrol_api_partial_success_report__PCC_RULE_EVENT,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return partial_success_report;
}


#ifdef partial_success_report_MAIN

void test_partial_success_report(int include_optional) {
    partial_success_report_t* partial_success_report_1 = instantiate_partial_success_report(include_optional);

	cJSON* jsonpartial_success_report_1 = partial_success_report_convertToJSON(partial_success_report_1);
	printf("partial_success_report :\n%s\n", cJSON_Print(jsonpartial_success_report_1));
	partial_success_report_t* partial_success_report_2 = partial_success_report_parseFromJSON(jsonpartial_success_report_1);
	cJSON* jsonpartial_success_report_2 = partial_success_report_convertToJSON(partial_success_report_2);
	printf("repeating partial_success_report:\n%s\n", cJSON_Print(jsonpartial_success_report_2));
}

int main() {
  test_partial_success_report(1);
  test_partial_success_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // partial_success_report_MAIN
#endif // partial_success_report_TEST
