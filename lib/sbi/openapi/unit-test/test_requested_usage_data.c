#ifndef requested_usage_data_TEST
#define requested_usage_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_usage_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_usage_data.h"
requested_usage_data_t* instantiate_requested_usage_data(int include_optional);



requested_usage_data_t* instantiate_requested_usage_data(int include_optional) {
  requested_usage_data_t* requested_usage_data = NULL;
  if (include_optional) {
    requested_usage_data = requested_usage_data_create(
      list_createList(),
      1
    );
  } else {
    requested_usage_data = requested_usage_data_create(
      list_createList(),
      1
    );
  }

  return requested_usage_data;
}


#ifdef requested_usage_data_MAIN

void test_requested_usage_data(int include_optional) {
    requested_usage_data_t* requested_usage_data_1 = instantiate_requested_usage_data(include_optional);

	cJSON* jsonrequested_usage_data_1 = requested_usage_data_convertToJSON(requested_usage_data_1);
	printf("requested_usage_data :\n%s\n", cJSON_Print(jsonrequested_usage_data_1));
	requested_usage_data_t* requested_usage_data_2 = requested_usage_data_parseFromJSON(jsonrequested_usage_data_1);
	cJSON* jsonrequested_usage_data_2 = requested_usage_data_convertToJSON(requested_usage_data_2);
	printf("repeating requested_usage_data:\n%s\n", cJSON_Print(jsonrequested_usage_data_2));
}

int main() {
  test_requested_usage_data(1);
  test_requested_usage_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_usage_data_MAIN
#endif // requested_usage_data_TEST
