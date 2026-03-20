#ifndef event_report_mode_any_of_TEST
#define event_report_mode_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_report_mode_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_report_mode_any_of.h"
event_report_mode_any_of_t* instantiate_event_report_mode_any_of(int include_optional);



event_report_mode_any_of_t* instantiate_event_report_mode_any_of(int include_optional) {
  event_report_mode_any_of_t* event_report_mode_any_of = NULL;
  if (include_optional) {
    event_report_mode_any_of = event_report_mode_any_of_create(
    );
  } else {
    event_report_mode_any_of = event_report_mode_any_of_create(
    );
  }

  return event_report_mode_any_of;
}


#ifdef event_report_mode_any_of_MAIN

void test_event_report_mode_any_of(int include_optional) {
    event_report_mode_any_of_t* event_report_mode_any_of_1 = instantiate_event_report_mode_any_of(include_optional);

	cJSON* jsonevent_report_mode_any_of_1 = event_report_mode_any_of_convertToJSON(event_report_mode_any_of_1);
	printf("event_report_mode_any_of :\n%s\n", cJSON_Print(jsonevent_report_mode_any_of_1));
	event_report_mode_any_of_t* event_report_mode_any_of_2 = event_report_mode_any_of_parseFromJSON(jsonevent_report_mode_any_of_1);
	cJSON* jsonevent_report_mode_any_of_2 = event_report_mode_any_of_convertToJSON(event_report_mode_any_of_2);
	printf("repeating event_report_mode_any_of:\n%s\n", cJSON_Print(jsonevent_report_mode_any_of_2));
}

int main() {
  test_event_report_mode_any_of(1);
  test_event_report_mode_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_report_mode_any_of_MAIN
#endif // event_report_mode_any_of_TEST
