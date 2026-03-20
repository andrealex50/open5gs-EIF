#ifndef subscribed_event_TEST
#define subscribed_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscribed_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscribed_event.h"
subscribed_event_t* instantiate_subscribed_event(int include_optional);



subscribed_event_t* instantiate_subscribed_event(int include_optional) {
  subscribed_event_t* subscribed_event = NULL;
  if (include_optional) {
    subscribed_event = subscribed_event_create(
    );
  } else {
    subscribed_event = subscribed_event_create(
    );
  }

  return subscribed_event;
}


#ifdef subscribed_event_MAIN

void test_subscribed_event(int include_optional) {
    subscribed_event_t* subscribed_event_1 = instantiate_subscribed_event(include_optional);

	cJSON* jsonsubscribed_event_1 = subscribed_event_convertToJSON(subscribed_event_1);
	printf("subscribed_event :\n%s\n", cJSON_Print(jsonsubscribed_event_1));
	subscribed_event_t* subscribed_event_2 = subscribed_event_parseFromJSON(jsonsubscribed_event_1);
	cJSON* jsonsubscribed_event_2 = subscribed_event_convertToJSON(subscribed_event_2);
	printf("repeating subscribed_event:\n%s\n", cJSON_Print(jsonsubscribed_event_2));
}

int main() {
  test_subscribed_event(1);
  test_subscribed_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscribed_event_MAIN
#endif // subscribed_event_TEST
