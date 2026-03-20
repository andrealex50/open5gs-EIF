#ifndef modification_notification_TEST
#define modification_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modification_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modification_notification.h"
modification_notification_t* instantiate_modification_notification(int include_optional);



modification_notification_t* instantiate_modification_notification(int include_optional) {
  modification_notification_t* modification_notification = NULL;
  if (include_optional) {
    modification_notification = modification_notification_create(
      list_createList()
    );
  } else {
    modification_notification = modification_notification_create(
      list_createList()
    );
  }

  return modification_notification;
}


#ifdef modification_notification_MAIN

void test_modification_notification(int include_optional) {
    modification_notification_t* modification_notification_1 = instantiate_modification_notification(include_optional);

	cJSON* jsonmodification_notification_1 = modification_notification_convertToJSON(modification_notification_1);
	printf("modification_notification :\n%s\n", cJSON_Print(jsonmodification_notification_1));
	modification_notification_t* modification_notification_2 = modification_notification_parseFromJSON(jsonmodification_notification_1);
	cJSON* jsonmodification_notification_2 = modification_notification_convertToJSON(modification_notification_2);
	printf("repeating modification_notification:\n%s\n", cJSON_Print(jsonmodification_notification_2));
}

int main() {
  test_modification_notification(1);
  test_modification_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // modification_notification_MAIN
#endif // modification_notification_TEST
