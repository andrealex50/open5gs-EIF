#ifndef notification_control_TEST
#define notification_control_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_control_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_control.h"
notification_control_t* instantiate_notification_control(int include_optional);



notification_control_t* instantiate_notification_control(int include_optional) {
  notification_control_t* notification_control = NULL;
  if (include_optional) {
    notification_control = notification_control_create(
    );
  } else {
    notification_control = notification_control_create(
    );
  }

  return notification_control;
}


#ifdef notification_control_MAIN

void test_notification_control(int include_optional) {
    notification_control_t* notification_control_1 = instantiate_notification_control(include_optional);

	cJSON* jsonnotification_control_1 = notification_control_convertToJSON(notification_control_1);
	printf("notification_control :\n%s\n", cJSON_Print(jsonnotification_control_1));
	notification_control_t* notification_control_2 = notification_control_parseFromJSON(jsonnotification_control_1);
	cJSON* jsonnotification_control_2 = notification_control_convertToJSON(notification_control_2);
	printf("repeating notification_control:\n%s\n", cJSON_Print(jsonnotification_control_2));
}

int main() {
  test_notification_control(1);
  test_notification_control(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_control_MAIN
#endif // notification_control_TEST
