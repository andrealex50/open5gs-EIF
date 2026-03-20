#ifndef event_id_TEST
#define event_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_id.h"
event_id_t* instantiate_event_id(int include_optional);



event_id_t* instantiate_event_id(int include_optional) {
  event_id_t* event_id = NULL;
  if (include_optional) {
    event_id = event_id_create(
    );
  } else {
    event_id = event_id_create(
    );
  }

  return event_id;
}


#ifdef event_id_MAIN

void test_event_id(int include_optional) {
    event_id_t* event_id_1 = instantiate_event_id(include_optional);

	cJSON* jsonevent_id_1 = event_id_convertToJSON(event_id_1);
	printf("event_id :\n%s\n", cJSON_Print(jsonevent_id_1));
	event_id_t* event_id_2 = event_id_parseFromJSON(jsonevent_id_1);
	cJSON* jsonevent_id_2 = event_id_convertToJSON(event_id_2);
	printf("repeating event_id:\n%s\n", cJSON_Print(jsonevent_id_2));
}

int main() {
  test_event_id(1);
  test_event_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_id_MAIN
#endif // event_id_TEST
