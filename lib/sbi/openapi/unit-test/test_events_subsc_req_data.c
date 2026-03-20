#ifndef events_subsc_req_data_TEST
#define events_subsc_req_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define events_subsc_req_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/events_subsc_req_data.h"
events_subsc_req_data_t* instantiate_events_subsc_req_data(int include_optional);

#include "test_qos_monitoring_information.c"
#include "test_usage_threshold.c"


events_subsc_req_data_t* instantiate_events_subsc_req_data(int include_optional) {
  events_subsc_req_data_t* events_subsc_req_data = NULL;
  if (include_optional) {
    events_subsc_req_data = events_subsc_req_data_create(
      list_createList(),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_qos_monitoring_information(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_usage_threshold(0),
      "0",
      list_createList(),
      1
    );
  } else {
    events_subsc_req_data = events_subsc_req_data_create(
      list_createList(),
      "0",
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      "0",
      list_createList(),
      1
    );
  }

  return events_subsc_req_data;
}


#ifdef events_subsc_req_data_MAIN

void test_events_subsc_req_data(int include_optional) {
    events_subsc_req_data_t* events_subsc_req_data_1 = instantiate_events_subsc_req_data(include_optional);

	cJSON* jsonevents_subsc_req_data_1 = events_subsc_req_data_convertToJSON(events_subsc_req_data_1);
	printf("events_subsc_req_data :\n%s\n", cJSON_Print(jsonevents_subsc_req_data_1));
	events_subsc_req_data_t* events_subsc_req_data_2 = events_subsc_req_data_parseFromJSON(jsonevents_subsc_req_data_1);
	cJSON* jsonevents_subsc_req_data_2 = events_subsc_req_data_convertToJSON(events_subsc_req_data_2);
	printf("repeating events_subsc_req_data:\n%s\n", cJSON_Print(jsonevents_subsc_req_data_2));
}

int main() {
  test_events_subsc_req_data(1);
  test_events_subsc_req_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // events_subsc_req_data_MAIN
#endif // events_subsc_req_data_TEST
