#ifndef event_type_TEST
#define event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_type.h"
event_type_t* instantiate_event_type(int include_optional);



event_type_t* instantiate_event_type(int include_optional) {
  event_type_t* event_type = NULL;
  if (include_optional) {
    event_type = event_type_create(
    );
  } else {
    event_type = event_type_create(
    );
  }

  return event_type;
}


#ifdef event_type_MAIN

void test_event_type(int include_optional) {
    event_type_t* event_type_1 = instantiate_event_type(include_optional);

	cJSON* jsonevent_type_1 = event_type_convertToJSON(event_type_1);
	printf("event_type :\n%s\n", cJSON_Print(jsonevent_type_1));
	event_type_t* event_type_2 = event_type_parseFromJSON(jsonevent_type_1);
	cJSON* jsonevent_type_2 = event_type_convertToJSON(event_type_2);
	printf("repeating event_type:\n%s\n", cJSON_Print(jsonevent_type_2));
}

int main() {
  test_event_type(1);
  test_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_type_MAIN
#endif // event_type_TEST
