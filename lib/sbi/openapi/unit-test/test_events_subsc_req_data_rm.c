#ifndef events_subsc_req_data_rm_TEST
#define events_subsc_req_data_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define events_subsc_req_data_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/events_subsc_req_data_rm.h"
events_subsc_req_data_rm_t* instantiate_events_subsc_req_data_rm(int include_optional);

#include "test_qos_monitoring_information_rm.c"
#include "test_usage_threshold_rm.c"


events_subsc_req_data_rm_t* instantiate_events_subsc_req_data_rm(int include_optional) {
  events_subsc_req_data_rm_t* events_subsc_req_data_rm = NULL;
  if (include_optional) {
    events_subsc_req_data_rm = events_subsc_req_data_rm_create(
      list_createList(),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_qos_monitoring_information_rm(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_usage_threshold_rm(0),
      "0",
      1
    );
  } else {
    events_subsc_req_data_rm = events_subsc_req_data_rm_create(
      list_createList(),
      "0",
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      "0",
      1
    );
  }

  return events_subsc_req_data_rm;
}


#ifdef events_subsc_req_data_rm_MAIN

void test_events_subsc_req_data_rm(int include_optional) {
    events_subsc_req_data_rm_t* events_subsc_req_data_rm_1 = instantiate_events_subsc_req_data_rm(include_optional);

	cJSON* jsonevents_subsc_req_data_rm_1 = events_subsc_req_data_rm_convertToJSON(events_subsc_req_data_rm_1);
	printf("events_subsc_req_data_rm :\n%s\n", cJSON_Print(jsonevents_subsc_req_data_rm_1));
	events_subsc_req_data_rm_t* events_subsc_req_data_rm_2 = events_subsc_req_data_rm_parseFromJSON(jsonevents_subsc_req_data_rm_1);
	cJSON* jsonevents_subsc_req_data_rm_2 = events_subsc_req_data_rm_convertToJSON(events_subsc_req_data_rm_2);
	printf("repeating events_subsc_req_data_rm:\n%s\n", cJSON_Print(jsonevents_subsc_req_data_rm_2));
}

int main() {
  test_events_subsc_req_data_rm(1);
  test_events_subsc_req_data_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // events_subsc_req_data_rm_MAIN
#endif // events_subsc_req_data_rm_TEST
