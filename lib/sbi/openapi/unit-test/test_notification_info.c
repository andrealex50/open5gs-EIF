#ifndef notification_info_TEST
#define notification_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_info.h"
notification_info_t* instantiate_notification_info(int include_optional);



notification_info_t* instantiate_notification_info(int include_optional) {
  notification_info_t* notification_info = NULL;
  if (include_optional) {
    notification_info = notification_info_create(
      "0",
      "0",
      1
    );
  } else {
    notification_info = notification_info_create(
      "0",
      "0",
      1
    );
  }

  return notification_info;
}


#ifdef notification_info_MAIN

void test_notification_info(int include_optional) {
    notification_info_t* notification_info_1 = instantiate_notification_info(include_optional);

	cJSON* jsonnotification_info_1 = notification_info_convertToJSON(notification_info_1);
	printf("notification_info :\n%s\n", cJSON_Print(jsonnotification_info_1));
	notification_info_t* notification_info_2 = notification_info_parseFromJSON(jsonnotification_info_1);
	cJSON* jsonnotification_info_2 = notification_info_convertToJSON(notification_info_2);
	printf("repeating notification_info:\n%s\n", cJSON_Print(jsonnotification_info_2));
}

int main() {
  test_notification_info(1);
  test_notification_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_info_MAIN
#endif // notification_info_TEST
