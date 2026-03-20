#ifndef scheduled_communication_time_rm_TEST
#define scheduled_communication_time_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scheduled_communication_time_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scheduled_communication_time_rm.h"
scheduled_communication_time_rm_t* instantiate_scheduled_communication_time_rm(int include_optional);



scheduled_communication_time_rm_t* instantiate_scheduled_communication_time_rm(int include_optional) {
  scheduled_communication_time_rm_t* scheduled_communication_time_rm = NULL;
  if (include_optional) {
    scheduled_communication_time_rm = scheduled_communication_time_rm_create(
      list_createList(),
      "0",
      "0"
    );
  } else {
    scheduled_communication_time_rm = scheduled_communication_time_rm_create(
      list_createList(),
      "0",
      "0"
    );
  }

  return scheduled_communication_time_rm;
}


#ifdef scheduled_communication_time_rm_MAIN

void test_scheduled_communication_time_rm(int include_optional) {
    scheduled_communication_time_rm_t* scheduled_communication_time_rm_1 = instantiate_scheduled_communication_time_rm(include_optional);

	cJSON* jsonscheduled_communication_time_rm_1 = scheduled_communication_time_rm_convertToJSON(scheduled_communication_time_rm_1);
	printf("scheduled_communication_time_rm :\n%s\n", cJSON_Print(jsonscheduled_communication_time_rm_1));
	scheduled_communication_time_rm_t* scheduled_communication_time_rm_2 = scheduled_communication_time_rm_parseFromJSON(jsonscheduled_communication_time_rm_1);
	cJSON* jsonscheduled_communication_time_rm_2 = scheduled_communication_time_rm_convertToJSON(scheduled_communication_time_rm_2);
	printf("repeating scheduled_communication_time_rm:\n%s\n", cJSON_Print(jsonscheduled_communication_time_rm_2));
}

int main() {
  test_scheduled_communication_time_rm(1);
  test_scheduled_communication_time_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // scheduled_communication_time_rm_MAIN
#endif // scheduled_communication_time_rm_TEST
