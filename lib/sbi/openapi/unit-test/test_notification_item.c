#ifndef notification_item_TEST
#define notification_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notification_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notification_item.h"
notification_item_t* instantiate_notification_item(int include_optional);



notification_item_t* instantiate_notification_item(int include_optional) {
  notification_item_t* notification_item = NULL;
  if (include_optional) {
    notification_item = notification_item_create(
      "0",
      list_createList()
    );
  } else {
    notification_item = notification_item_create(
      "0",
      list_createList()
    );
  }

  return notification_item;
}


#ifdef notification_item_MAIN

void test_notification_item(int include_optional) {
    notification_item_t* notification_item_1 = instantiate_notification_item(include_optional);

	cJSON* jsonnotification_item_1 = notification_item_convertToJSON(notification_item_1);
	printf("notification_item :\n%s\n", cJSON_Print(jsonnotification_item_1));
	notification_item_t* notification_item_2 = notification_item_parseFromJSON(jsonnotification_item_1);
	cJSON* jsonnotification_item_2 = notification_item_convertToJSON(notification_item_2);
	printf("repeating notification_item:\n%s\n", cJSON_Print(jsonnotification_item_2));
}

int main() {
  test_notification_item(1);
  test_notification_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // notification_item_MAIN
#endif // notification_item_TEST
