#ifndef event_for_mdt_TEST
#define event_for_mdt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_for_mdt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_for_mdt.h"
event_for_mdt_t* instantiate_event_for_mdt(int include_optional);



event_for_mdt_t* instantiate_event_for_mdt(int include_optional) {
  event_for_mdt_t* event_for_mdt = NULL;
  if (include_optional) {
    event_for_mdt = event_for_mdt_create(
    );
  } else {
    event_for_mdt = event_for_mdt_create(
    );
  }

  return event_for_mdt;
}


#ifdef event_for_mdt_MAIN

void test_event_for_mdt(int include_optional) {
    event_for_mdt_t* event_for_mdt_1 = instantiate_event_for_mdt(include_optional);

	cJSON* jsonevent_for_mdt_1 = event_for_mdt_convertToJSON(event_for_mdt_1);
	printf("event_for_mdt :\n%s\n", cJSON_Print(jsonevent_for_mdt_1));
	event_for_mdt_t* event_for_mdt_2 = event_for_mdt_parseFromJSON(jsonevent_for_mdt_1);
	cJSON* jsonevent_for_mdt_2 = event_for_mdt_convertToJSON(event_for_mdt_2);
	printf("repeating event_for_mdt:\n%s\n", cJSON_Print(jsonevent_for_mdt_2));
}

int main() {
  test_event_for_mdt(1);
  test_event_for_mdt(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_for_mdt_MAIN
#endif // event_for_mdt_TEST
