#ifndef subscribed_event_any_of_TEST
#define subscribed_event_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscribed_event_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscribed_event_any_of.h"
subscribed_event_any_of_t* instantiate_subscribed_event_any_of(int include_optional);



subscribed_event_any_of_t* instantiate_subscribed_event_any_of(int include_optional) {
  subscribed_event_any_of_t* subscribed_event_any_of = NULL;
  if (include_optional) {
    subscribed_event_any_of = subscribed_event_any_of_create(
    );
  } else {
    subscribed_event_any_of = subscribed_event_any_of_create(
    );
  }

  return subscribed_event_any_of;
}


#ifdef subscribed_event_any_of_MAIN

void test_subscribed_event_any_of(int include_optional) {
    subscribed_event_any_of_t* subscribed_event_any_of_1 = instantiate_subscribed_event_any_of(include_optional);

	cJSON* jsonsubscribed_event_any_of_1 = subscribed_event_any_of_convertToJSON(subscribed_event_any_of_1);
	printf("subscribed_event_any_of :\n%s\n", cJSON_Print(jsonsubscribed_event_any_of_1));
	subscribed_event_any_of_t* subscribed_event_any_of_2 = subscribed_event_any_of_parseFromJSON(jsonsubscribed_event_any_of_1);
	cJSON* jsonsubscribed_event_any_of_2 = subscribed_event_any_of_convertToJSON(subscribed_event_any_of_2);
	printf("repeating subscribed_event_any_of:\n%s\n", cJSON_Print(jsonsubscribed_event_any_of_2));
}

int main() {
  test_subscribed_event_any_of(1);
  test_subscribed_event_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscribed_event_any_of_MAIN
#endif // subscribed_event_any_of_TEST
