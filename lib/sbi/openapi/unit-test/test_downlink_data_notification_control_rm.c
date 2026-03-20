#ifndef downlink_data_notification_control_rm_TEST
#define downlink_data_notification_control_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define downlink_data_notification_control_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/downlink_data_notification_control_rm.h"
downlink_data_notification_control_rm_t* instantiate_downlink_data_notification_control_rm(int include_optional);



downlink_data_notification_control_rm_t* instantiate_downlink_data_notification_control_rm(int include_optional) {
  downlink_data_notification_control_rm_t* downlink_data_notification_control_rm = NULL;
  if (include_optional) {
    downlink_data_notification_control_rm = downlink_data_notification_control_rm_create(
      list_createList(),
      list_createList()
    );
  } else {
    downlink_data_notification_control_rm = downlink_data_notification_control_rm_create(
      list_createList(),
      list_createList()
    );
  }

  return downlink_data_notification_control_rm;
}


#ifdef downlink_data_notification_control_rm_MAIN

void test_downlink_data_notification_control_rm(int include_optional) {
    downlink_data_notification_control_rm_t* downlink_data_notification_control_rm_1 = instantiate_downlink_data_notification_control_rm(include_optional);

	cJSON* jsondownlink_data_notification_control_rm_1 = downlink_data_notification_control_rm_convertToJSON(downlink_data_notification_control_rm_1);
	printf("downlink_data_notification_control_rm :\n%s\n", cJSON_Print(jsondownlink_data_notification_control_rm_1));
	downlink_data_notification_control_rm_t* downlink_data_notification_control_rm_2 = downlink_data_notification_control_rm_parseFromJSON(jsondownlink_data_notification_control_rm_1);
	cJSON* jsondownlink_data_notification_control_rm_2 = downlink_data_notification_control_rm_convertToJSON(downlink_data_notification_control_rm_2);
	printf("repeating downlink_data_notification_control_rm:\n%s\n", cJSON_Print(jsondownlink_data_notification_control_rm_2));
}

int main() {
  test_downlink_data_notification_control_rm(1);
  test_downlink_data_notification_control_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // downlink_data_notification_control_rm_MAIN
#endif // downlink_data_notification_control_rm_TEST
