#ifndef rule_status_TEST
#define rule_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rule_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rule_status.h"
rule_status_t* instantiate_rule_status(int include_optional);



rule_status_t* instantiate_rule_status(int include_optional) {
  rule_status_t* rule_status = NULL;
  if (include_optional) {
    rule_status = rule_status_create(
    );
  } else {
    rule_status = rule_status_create(
    );
  }

  return rule_status;
}


#ifdef rule_status_MAIN

void test_rule_status(int include_optional) {
    rule_status_t* rule_status_1 = instantiate_rule_status(include_optional);

	cJSON* jsonrule_status_1 = rule_status_convertToJSON(rule_status_1);
	printf("rule_status :\n%s\n", cJSON_Print(jsonrule_status_1));
	rule_status_t* rule_status_2 = rule_status_parseFromJSON(jsonrule_status_1);
	cJSON* jsonrule_status_2 = rule_status_convertToJSON(rule_status_2);
	printf("repeating rule_status:\n%s\n", cJSON_Print(jsonrule_status_2));
}

int main() {
  test_rule_status(1);
  test_rule_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // rule_status_MAIN
#endif // rule_status_TEST
