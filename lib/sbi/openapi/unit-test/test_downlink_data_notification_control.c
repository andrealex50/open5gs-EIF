#ifndef downlink_data_notification_control_TEST
#define downlink_data_notification_control_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define downlink_data_notification_control_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/downlink_data_notification_control.h"
downlink_data_notification_control_t* instantiate_downlink_data_notification_control(int include_optional);



downlink_data_notification_control_t* instantiate_downlink_data_notification_control(int include_optional) {
  downlink_data_notification_control_t* downlink_data_notification_control = NULL;
  if (include_optional) {
    downlink_data_notification_control = downlink_data_notification_control_create(
      list_createList(),
      list_createList()
    );
  } else {
    downlink_data_notification_control = downlink_data_notification_control_create(
      list_createList(),
      list_createList()
    );
  }

  return downlink_data_notification_control;
}


#ifdef downlink_data_notification_control_MAIN

void test_downlink_data_notification_control(int include_optional) {
    downlink_data_notification_control_t* downlink_data_notification_control_1 = instantiate_downlink_data_notification_control(include_optional);

	cJSON* jsondownlink_data_notification_control_1 = downlink_data_notification_control_convertToJSON(downlink_data_notification_control_1);
	printf("downlink_data_notification_control :\n%s\n", cJSON_Print(jsondownlink_data_notification_control_1));
	downlink_data_notification_control_t* downlink_data_notification_control_2 = downlink_data_notification_control_parseFromJSON(jsondownlink_data_notification_control_1);
	cJSON* jsondownlink_data_notification_control_2 = downlink_data_notification_control_convertToJSON(downlink_data_notification_control_2);
	printf("repeating downlink_data_notification_control:\n%s\n", cJSON_Print(jsondownlink_data_notification_control_2));
}

int main() {
  test_downlink_data_notification_control(1);
  test_downlink_data_notification_control(0);

  printf("Hello world \n");
  return 0;
}

#endif // downlink_data_notification_control_MAIN
#endif // downlink_data_notification_control_TEST
