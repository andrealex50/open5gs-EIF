#ifndef data_restoration_notification_TEST
#define data_restoration_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_restoration_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_restoration_notification.h"
data_restoration_notification_t* instantiate_data_restoration_notification(int include_optional);



data_restoration_notification_t* instantiate_data_restoration_notification(int include_optional) {
  data_restoration_notification_t* data_restoration_notification = NULL;
  if (include_optional) {
    data_restoration_notification = data_restoration_notification_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    data_restoration_notification = data_restoration_notification_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return data_restoration_notification;
}


#ifdef data_restoration_notification_MAIN

void test_data_restoration_notification(int include_optional) {
    data_restoration_notification_t* data_restoration_notification_1 = instantiate_data_restoration_notification(include_optional);

	cJSON* jsondata_restoration_notification_1 = data_restoration_notification_convertToJSON(data_restoration_notification_1);
	printf("data_restoration_notification :\n%s\n", cJSON_Print(jsondata_restoration_notification_1));
	data_restoration_notification_t* data_restoration_notification_2 = data_restoration_notification_parseFromJSON(jsondata_restoration_notification_1);
	cJSON* jsondata_restoration_notification_2 = data_restoration_notification_convertToJSON(data_restoration_notification_2);
	printf("repeating data_restoration_notification:\n%s\n", cJSON_Print(jsondata_restoration_notification_2));
}

int main() {
  test_data_restoration_notification(1);
  test_data_restoration_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_restoration_notification_MAIN
#endif // data_restoration_notification_TEST
