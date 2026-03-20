#ifndef requested_rule_data_type_TEST
#define requested_rule_data_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_rule_data_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_rule_data_type.h"
requested_rule_data_type_t* instantiate_requested_rule_data_type(int include_optional);



requested_rule_data_type_t* instantiate_requested_rule_data_type(int include_optional) {
  requested_rule_data_type_t* requested_rule_data_type = NULL;
  if (include_optional) {
    requested_rule_data_type = requested_rule_data_type_create(
    );
  } else {
    requested_rule_data_type = requested_rule_data_type_create(
    );
  }

  return requested_rule_data_type;
}


#ifdef requested_rule_data_type_MAIN

void test_requested_rule_data_type(int include_optional) {
    requested_rule_data_type_t* requested_rule_data_type_1 = instantiate_requested_rule_data_type(include_optional);

	cJSON* jsonrequested_rule_data_type_1 = requested_rule_data_type_convertToJSON(requested_rule_data_type_1);
	printf("requested_rule_data_type :\n%s\n", cJSON_Print(jsonrequested_rule_data_type_1));
	requested_rule_data_type_t* requested_rule_data_type_2 = requested_rule_data_type_parseFromJSON(jsonrequested_rule_data_type_1);
	cJSON* jsonrequested_rule_data_type_2 = requested_rule_data_type_convertToJSON(requested_rule_data_type_2);
	printf("repeating requested_rule_data_type:\n%s\n", cJSON_Print(jsonrequested_rule_data_type_2));
}

int main() {
  test_requested_rule_data_type(1);
  test_requested_rule_data_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_rule_data_type_MAIN
#endif // requested_rule_data_type_TEST
