#ifndef notification_control_indication_TEST
#define notification_control_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_control_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_control_indication.h"
notification_control_indication_t* instantiate_notification_control_indication(int include_optional);



notification_control_indication_t* instantiate_notification_control_indication(int include_optional) {
  notification_control_indication_t* notification_control_indication = NULL;
  if (include_optional) {
    notification_control_indication = notification_control_indication_create(
    );
  } else {
    notification_control_indication = notification_control_indication_create(
    );
  }

  return notification_control_indication;
}


#ifdef notification_control_indication_MAIN

void test_notification_control_indication(int include_optional) {
    notification_control_indication_t* notification_control_indication_1 = instantiate_notification_control_indication(include_optional);

	cJSON* jsonnotification_control_indication_1 = notification_control_indication_convertToJSON(notification_control_indication_1);
	printf("notification_control_indication :\n%s\n", cJSON_Print(jsonnotification_control_indication_1));
	notification_control_indication_t* notification_control_indication_2 = notification_control_indication_parseFromJSON(jsonnotification_control_indication_1);
	cJSON* jsonnotification_control_indication_2 = notification_control_indication_convertToJSON(notification_control_indication_2);
	printf("repeating notification_control_indication:\n%s\n", cJSON_Print(jsonnotification_control_indication_2));
}

int main() {
  test_notification_control_indication(1);
  test_notification_control_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_control_indication_MAIN
#endif // notification_control_indication_TEST
