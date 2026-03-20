#ifndef notify_item_TEST
#define notify_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notify_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notify_item.h"
notify_item_t* instantiate_notify_item(int include_optional);



notify_item_t* instantiate_notify_item(int include_optional) {
  notify_item_t* notify_item = NULL;
  if (include_optional) {
    notify_item = notify_item_create(
      "0",
      list_createList()
    );
  } else {
    notify_item = notify_item_create(
      "0",
      list_createList()
    );
  }

  return notify_item;
}


#ifdef notify_item_MAIN

void test_notify_item(int include_optional) {
    notify_item_t* notify_item_1 = instantiate_notify_item(include_optional);

	cJSON* jsonnotify_item_1 = notify_item_convertToJSON(notify_item_1);
	printf("notify_item :\n%s\n", cJSON_Print(jsonnotify_item_1));
	notify_item_t* notify_item_2 = notify_item_parseFromJSON(jsonnotify_item_1);
	cJSON* jsonnotify_item_2 = notify_item_convertToJSON(notify_item_2);
	printf("repeating notify_item:\n%s\n", cJSON_Print(jsonnotify_item_2));
}

int main() {
  test_notify_item(1);
  test_notify_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // notify_item_MAIN
#endif // notify_item_TEST
