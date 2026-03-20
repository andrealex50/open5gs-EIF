#ifndef rule_operation_TEST
#define rule_operation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rule_operation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rule_operation.h"
rule_operation_t* instantiate_rule_operation(int include_optional);



rule_operation_t* instantiate_rule_operation(int include_optional) {
  rule_operation_t* rule_operation = NULL;
  if (include_optional) {
    rule_operation = rule_operation_create(
    );
  } else {
    rule_operation = rule_operation_create(
    );
  }

  return rule_operation;
}


#ifdef rule_operation_MAIN

void test_rule_operation(int include_optional) {
    rule_operation_t* rule_operation_1 = instantiate_rule_operation(include_optional);

	cJSON* jsonrule_operation_1 = rule_operation_convertToJSON(rule_operation_1);
	printf("rule_operation :\n%s\n", cJSON_Print(jsonrule_operation_1));
	rule_operation_t* rule_operation_2 = rule_operation_parseFromJSON(jsonrule_operation_1);
	cJSON* jsonrule_operation_2 = rule_operation_convertToJSON(rule_operation_2);
	printf("repeating rule_operation:\n%s\n", cJSON_Print(jsonrule_operation_2));
}

int main() {
  test_rule_operation(1);
  test_rule_operation(0);

  printf("Hello world \n");
  return 0;
}

#endif // rule_operation_MAIN
#endif // rule_operation_TEST
