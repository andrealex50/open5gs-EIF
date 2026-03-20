#ifndef session_rule_report_TEST
#define session_rule_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_rule_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_rule_report.h"
session_rule_report_t* instantiate_session_rule_report(int include_optional);



session_rule_report_t* instantiate_session_rule_report(int include_optional) {
  session_rule_report_t* session_rule_report = NULL;
  if (include_optional) {
    session_rule_report = session_rule_report_create(
      list_createList(),
      npcf_smpolicycontrol_api_session_rule_report__ACTIVE,
      npcf_smpolicycontrol_api_session_rule_report__NF_MAL,
      list_createList()
    );
  } else {
    session_rule_report = session_rule_report_create(
      list_createList(),
      npcf_smpolicycontrol_api_session_rule_report__ACTIVE,
      npcf_smpolicycontrol_api_session_rule_report__NF_MAL,
      list_createList()
    );
  }

  return session_rule_report;
}


#ifdef session_rule_report_MAIN

void test_session_rule_report(int include_optional) {
    session_rule_report_t* session_rule_report_1 = instantiate_session_rule_report(include_optional);

	cJSON* jsonsession_rule_report_1 = session_rule_report_convertToJSON(session_rule_report_1);
	printf("session_rule_report :\n%s\n", cJSON_Print(jsonsession_rule_report_1));
	session_rule_report_t* session_rule_report_2 = session_rule_report_parseFromJSON(jsonsession_rule_report_1);
	cJSON* jsonsession_rule_report_2 = session_rule_report_convertToJSON(session_rule_report_2);
	printf("repeating session_rule_report:\n%s\n", cJSON_Print(jsonsession_rule_report_2));
}

int main() {
  test_session_rule_report(1);
  test_session_rule_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_rule_report_MAIN
#endif // session_rule_report_TEST
