#ifndef requested_rule_data_TEST
#define requested_rule_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_rule_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_rule_data.h"
requested_rule_data_t* instantiate_requested_rule_data(int include_optional);



requested_rule_data_t* instantiate_requested_rule_data(int include_optional) {
  requested_rule_data_t* requested_rule_data = NULL;
  if (include_optional) {
    requested_rule_data = requested_rule_data_create(
      list_createList(),
      list_createList()
    );
  } else {
    requested_rule_data = requested_rule_data_create(
      list_createList(),
      list_createList()
    );
  }

  return requested_rule_data;
}


#ifdef requested_rule_data_MAIN

void test_requested_rule_data(int include_optional) {
    requested_rule_data_t* requested_rule_data_1 = instantiate_requested_rule_data(include_optional);

	cJSON* jsonrequested_rule_data_1 = requested_rule_data_convertToJSON(requested_rule_data_1);
	printf("requested_rule_data :\n%s\n", cJSON_Print(jsonrequested_rule_data_1));
	requested_rule_data_t* requested_rule_data_2 = requested_rule_data_parseFromJSON(jsonrequested_rule_data_1);
	cJSON* jsonrequested_rule_data_2 = requested_rule_data_convertToJSON(requested_rule_data_2);
	printf("repeating requested_rule_data:\n%s\n", cJSON_Print(jsonrequested_rule_data_2));
}

int main() {
  test_requested_rule_data(1);
  test_requested_rule_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_rule_data_MAIN
#endif // requested_rule_data_TEST
