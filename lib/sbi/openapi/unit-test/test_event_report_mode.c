#ifndef event_report_mode_TEST
#define event_report_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_report_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_report_mode.h"
event_report_mode_t* instantiate_event_report_mode(int include_optional);



event_report_mode_t* instantiate_event_report_mode(int include_optional) {
  event_report_mode_t* event_report_mode = NULL;
  if (include_optional) {
    event_report_mode = event_report_mode_create(
    );
  } else {
    event_report_mode = event_report_mode_create(
    );
  }

  return event_report_mode;
}


#ifdef event_report_mode_MAIN

void test_event_report_mode(int include_optional) {
    event_report_mode_t* event_report_mode_1 = instantiate_event_report_mode(include_optional);

	cJSON* jsonevent_report_mode_1 = event_report_mode_convertToJSON(event_report_mode_1);
	printf("event_report_mode :\n%s\n", cJSON_Print(jsonevent_report_mode_1));
	event_report_mode_t* event_report_mode_2 = event_report_mode_parseFromJSON(jsonevent_report_mode_1);
	cJSON* jsonevent_report_mode_2 = event_report_mode_convertToJSON(event_report_mode_2);
	printf("repeating event_report_mode:\n%s\n", cJSON_Print(jsonevent_report_mode_2));
}

int main() {
  test_event_report_mode(1);
  test_event_report_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_report_mode_MAIN
#endif // event_report_mode_TEST
