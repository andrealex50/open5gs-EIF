#ifndef notification_event_type_TEST
#define notification_event_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_event_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_event_type.h"
notification_event_type_t* instantiate_notification_event_type(int include_optional);



notification_event_type_t* instantiate_notification_event_type(int include_optional) {
  notification_event_type_t* notification_event_type = NULL;
  if (include_optional) {
    notification_event_type = notification_event_type_create(
    );
  } else {
    notification_event_type = notification_event_type_create(
    );
  }

  return notification_event_type;
}


#ifdef notification_event_type_MAIN

void test_notification_event_type(int include_optional) {
    notification_event_type_t* notification_event_type_1 = instantiate_notification_event_type(include_optional);

	cJSON* jsonnotification_event_type_1 = notification_event_type_convertToJSON(notification_event_type_1);
	printf("notification_event_type :\n%s\n", cJSON_Print(jsonnotification_event_type_1));
	notification_event_type_t* notification_event_type_2 = notification_event_type_parseFromJSON(jsonnotification_event_type_1);
	cJSON* jsonnotification_event_type_2 = notification_event_type_convertToJSON(notification_event_type_2);
	printf("repeating notification_event_type:\n%s\n", cJSON_Print(jsonnotification_event_type_2));
}

int main() {
  test_notification_event_type(1);
  test_notification_event_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_event_type_MAIN
#endif // notification_event_type_TEST
