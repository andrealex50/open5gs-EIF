#ifndef sm_policy_notification_TEST
#define sm_policy_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_notification.h"
sm_policy_notification_t* instantiate_sm_policy_notification(int include_optional);

#include "test_sm_policy_decision.c"


sm_policy_notification_t* instantiate_sm_policy_notification(int include_optional) {
  sm_policy_notification_t* sm_policy_notification = NULL;
  if (include_optional) {
    sm_policy_notification = sm_policy_notification_create(
      "0",
       // false, not to have infinite recursion
      instantiate_sm_policy_decision(0)
    );
  } else {
    sm_policy_notification = sm_policy_notification_create(
      "0",
      NULL
    );
  }

  return sm_policy_notification;
}


#ifdef sm_policy_notification_MAIN

void test_sm_policy_notification(int include_optional) {
    sm_policy_notification_t* sm_policy_notification_1 = instantiate_sm_policy_notification(include_optional);

	cJSON* jsonsm_policy_notification_1 = sm_policy_notification_convertToJSON(sm_policy_notification_1);
	printf("sm_policy_notification :\n%s\n", cJSON_Print(jsonsm_policy_notification_1));
	sm_policy_notification_t* sm_policy_notification_2 = sm_policy_notification_parseFromJSON(jsonsm_policy_notification_1);
	cJSON* jsonsm_policy_notification_2 = sm_policy_notification_convertToJSON(sm_policy_notification_2);
	printf("repeating sm_policy_notification:\n%s\n", cJSON_Print(jsonsm_policy_notification_2));
}

int main() {
  test_sm_policy_notification(1);
  test_sm_policy_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_notification_MAIN
#endif // sm_policy_notification_TEST
