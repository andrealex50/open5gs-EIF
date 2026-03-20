#ifndef session_rule_TEST
#define session_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_rule.h"
session_rule_t* instantiate_session_rule(int include_optional);

#include "test_ambr.c"
#include "test_authorized_default_qos.c"


session_rule_t* instantiate_session_rule(int include_optional) {
  session_rule_t* session_rule = NULL;
  if (include_optional) {
    session_rule = session_rule_create(
       // false, not to have infinite recursion
      instantiate_ambr(0),
       // false, not to have infinite recursion
      instantiate_authorized_default_qos(0),
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    session_rule = session_rule_create(
      NULL,
      NULL,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return session_rule;
}


#ifdef session_rule_MAIN

void test_session_rule(int include_optional) {
    session_rule_t* session_rule_1 = instantiate_session_rule(include_optional);

	cJSON* jsonsession_rule_1 = session_rule_convertToJSON(session_rule_1);
	printf("session_rule :\n%s\n", cJSON_Print(jsonsession_rule_1));
	session_rule_t* session_rule_2 = session_rule_parseFromJSON(jsonsession_rule_1);
	cJSON* jsonsession_rule_2 = session_rule_convertToJSON(session_rule_2);
	printf("repeating session_rule:\n%s\n", cJSON_Print(jsonsession_rule_2));
}

int main() {
  test_session_rule(1);
  test_session_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_rule_MAIN
#endif // session_rule_TEST
