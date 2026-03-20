#ifndef rule_report_TEST
#define rule_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rule_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rule_report.h"
rule_report_t* instantiate_rule_report(int include_optional);

#include "test_final_unit_action.c"


rule_report_t* instantiate_rule_report(int include_optional) {
  rule_report_t* rule_report = NULL;
  if (include_optional) {
    rule_report = rule_report_create(
      list_createList(),
      npcf_smpolicycontrol_api_rule_report__ACTIVE,
      list_createList(),
      npcf_smpolicycontrol_api_rule_report__UNK_RULE_ID,
      null,
      list_createList(),
      "0"
    );
  } else {
    rule_report = rule_report_create(
      list_createList(),
      npcf_smpolicycontrol_api_rule_report__ACTIVE,
      list_createList(),
      npcf_smpolicycontrol_api_rule_report__UNK_RULE_ID,
      null,
      list_createList(),
      "0"
    );
  }

  return rule_report;
}


#ifdef rule_report_MAIN

void test_rule_report(int include_optional) {
    rule_report_t* rule_report_1 = instantiate_rule_report(include_optional);

	cJSON* jsonrule_report_1 = rule_report_convertToJSON(rule_report_1);
	printf("rule_report :\n%s\n", cJSON_Print(jsonrule_report_1));
	rule_report_t* rule_report_2 = rule_report_parseFromJSON(jsonrule_report_1);
	cJSON* jsonrule_report_2 = rule_report_convertToJSON(rule_report_2);
	printf("repeating rule_report:\n%s\n", cJSON_Print(jsonrule_report_2));
}

int main() {
  test_rule_report(1);
  test_rule_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // rule_report_MAIN
#endif // rule_report_TEST
