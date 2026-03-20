#ifndef exposure_data_change_notification_TEST
#define exposure_data_change_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define exposure_data_change_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/exposure_data_change_notification.h"
exposure_data_change_notification_t* instantiate_exposure_data_change_notification(int include_optional);

#include "test_access_and_mobility_data.c"


exposure_data_change_notification_t* instantiate_exposure_data_change_notification(int include_optional) {
  exposure_data_change_notification_t* exposure_data_change_notification = NULL;
  if (include_optional) {
    exposure_data_change_notification = exposure_data_change_notification_create(
      "a",
       // false, not to have infinite recursion
      instantiate_access_and_mobility_data(0),
      list_createList(),
      list_createList()
    );
  } else {
    exposure_data_change_notification = exposure_data_change_notification_create(
      "a",
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return exposure_data_change_notification;
}


#ifdef exposure_data_change_notification_MAIN

void test_exposure_data_change_notification(int include_optional) {
    exposure_data_change_notification_t* exposure_data_change_notification_1 = instantiate_exposure_data_change_notification(include_optional);

	cJSON* jsonexposure_data_change_notification_1 = exposure_data_change_notification_convertToJSON(exposure_data_change_notification_1);
	printf("exposure_data_change_notification :\n%s\n", cJSON_Print(jsonexposure_data_change_notification_1));
	exposure_data_change_notification_t* exposure_data_change_notification_2 = exposure_data_change_notification_parseFromJSON(jsonexposure_data_change_notification_1);
	cJSON* jsonexposure_data_change_notification_2 = exposure_data_change_notification_convertToJSON(exposure_data_change_notification_2);
	printf("repeating exposure_data_change_notification:\n%s\n", cJSON_Print(jsonexposure_data_change_notification_2));
}

int main() {
  test_exposure_data_change_notification(1);
  test_exposure_data_change_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // exposure_data_change_notification_MAIN
#endif // exposure_data_change_notification_TEST
