#ifndef session_rule_failure_code_TEST
#define session_rule_failure_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define session_rule_failure_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/session_rule_failure_code.h"
session_rule_failure_code_t* instantiate_session_rule_failure_code(int include_optional);



session_rule_failure_code_t* instantiate_session_rule_failure_code(int include_optional) {
  session_rule_failure_code_t* session_rule_failure_code = NULL;
  if (include_optional) {
    session_rule_failure_code = session_rule_failure_code_create(
    );
  } else {
    session_rule_failure_code = session_rule_failure_code_create(
    );
  }

  return session_rule_failure_code;
}


#ifdef session_rule_failure_code_MAIN

void test_session_rule_failure_code(int include_optional) {
    session_rule_failure_code_t* session_rule_failure_code_1 = instantiate_session_rule_failure_code(include_optional);

	cJSON* jsonsession_rule_failure_code_1 = session_rule_failure_code_convertToJSON(session_rule_failure_code_1);
	printf("session_rule_failure_code :\n%s\n", cJSON_Print(jsonsession_rule_failure_code_1));
	session_rule_failure_code_t* session_rule_failure_code_2 = session_rule_failure_code_parseFromJSON(jsonsession_rule_failure_code_1);
	cJSON* jsonsession_rule_failure_code_2 = session_rule_failure_code_convertToJSON(session_rule_failure_code_2);
	printf("repeating session_rule_failure_code:\n%s\n", cJSON_Print(jsonsession_rule_failure_code_2));
}

int main() {
  test_session_rule_failure_code(1);
  test_session_rule_failure_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // session_rule_failure_code_MAIN
#endif // session_rule_failure_code_TEST
