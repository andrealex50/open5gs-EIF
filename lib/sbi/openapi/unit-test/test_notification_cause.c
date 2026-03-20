#ifndef notification_cause_TEST
#define notification_cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_cause.h"
notification_cause_t* instantiate_notification_cause(int include_optional);



notification_cause_t* instantiate_notification_cause(int include_optional) {
  notification_cause_t* notification_cause = NULL;
  if (include_optional) {
    notification_cause = notification_cause_create(
    );
  } else {
    notification_cause = notification_cause_create(
    );
  }

  return notification_cause;
}


#ifdef notification_cause_MAIN

void test_notification_cause(int include_optional) {
    notification_cause_t* notification_cause_1 = instantiate_notification_cause(include_optional);

	cJSON* jsonnotification_cause_1 = notification_cause_convertToJSON(notification_cause_1);
	printf("notification_cause :\n%s\n", cJSON_Print(jsonnotification_cause_1));
	notification_cause_t* notification_cause_2 = notification_cause_parseFromJSON(jsonnotification_cause_1);
	cJSON* jsonnotification_cause_2 = notification_cause_convertToJSON(notification_cause_2);
	printf("repeating notification_cause:\n%s\n", cJSON_Print(jsonnotification_cause_2));
}

int main() {
  test_notification_cause(1);
  test_notification_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_cause_MAIN
#endif // notification_cause_TEST
