#ifndef sm_context_status_notification_TEST
#define sm_context_status_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_status_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_status_notification.h"
sm_context_status_notification_t* instantiate_sm_context_status_notification(int include_optional);

#include "test_status_info.c"
#include "test_small_data_rate_status.c"
#include "test_apn_rate_status.c"
#include "test_target_dnai_info.c"


sm_context_status_notification_t* instantiate_sm_context_status_notification(int include_optional) {
  sm_context_status_notification_t* sm_context_status_notification = NULL;
  if (include_optional) {
    sm_context_status_notification = sm_context_status_notification_create(
       // false, not to have infinite recursion
      instantiate_status_info(0),
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_apn_rate_status(0),
      1,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_target_dnai_info(0),
      "0",
      "0"
    );
  } else {
    sm_context_status_notification = sm_context_status_notification_create(
      NULL,
      NULL,
      NULL,
      1,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0"
    );
  }

  return sm_context_status_notification;
}


#ifdef sm_context_status_notification_MAIN

void test_sm_context_status_notification(int include_optional) {
    sm_context_status_notification_t* sm_context_status_notification_1 = instantiate_sm_context_status_notification(include_optional);

	cJSON* jsonsm_context_status_notification_1 = sm_context_status_notification_convertToJSON(sm_context_status_notification_1);
	printf("sm_context_status_notification :\n%s\n", cJSON_Print(jsonsm_context_status_notification_1));
	sm_context_status_notification_t* sm_context_status_notification_2 = sm_context_status_notification_parseFromJSON(jsonsm_context_status_notification_1);
	cJSON* jsonsm_context_status_notification_2 = sm_context_status_notification_convertToJSON(sm_context_status_notification_2);
	printf("repeating sm_context_status_notification:\n%s\n", cJSON_Print(jsonsm_context_status_notification_2));
}

int main() {
  test_sm_context_status_notification(1);
  test_sm_context_status_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_status_notification_MAIN
#endif // sm_context_status_notification_TEST
