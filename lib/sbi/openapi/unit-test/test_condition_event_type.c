#ifndef condition_event_type_TEST
#define condition_event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define condition_event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/condition_event_type.h"
condition_event_type_t* instantiate_condition_event_type(int include_optional);



condition_event_type_t* instantiate_condition_event_type(int include_optional) {
  condition_event_type_t* condition_event_type = NULL;
  if (include_optional) {
    condition_event_type = condition_event_type_create(
    );
  } else {
    condition_event_type = condition_event_type_create(
    );
  }

  return condition_event_type;
}


#ifdef condition_event_type_MAIN

void test_condition_event_type(int include_optional) {
    condition_event_type_t* condition_event_type_1 = instantiate_condition_event_type(include_optional);

	cJSON* jsoncondition_event_type_1 = condition_event_type_convertToJSON(condition_event_type_1);
	printf("condition_event_type :\n%s\n", cJSON_Print(jsoncondition_event_type_1));
	condition_event_type_t* condition_event_type_2 = condition_event_type_parseFromJSON(jsoncondition_event_type_1);
	cJSON* jsoncondition_event_type_2 = condition_event_type_convertToJSON(condition_event_type_2);
	printf("repeating condition_event_type:\n%s\n", cJSON_Print(jsoncondition_event_type_2));
}

int main() {
  test_condition_event_type(1);
  test_condition_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // condition_event_type_MAIN
#endif // condition_event_type_TEST
