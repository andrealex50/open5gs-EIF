#ifndef bsf_event_notification_TEST
#define bsf_event_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_event_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_event_notification.h"
bsf_event_notification_t* instantiate_bsf_event_notification(int include_optional);

#include "test_pcf_for_ue_info.c"


bsf_event_notification_t* instantiate_bsf_event_notification(int include_optional) {
  bsf_event_notification_t* bsf_event_notification = NULL;
  if (include_optional) {
    bsf_event_notification = bsf_event_notification_create(
      nbsf_management_bsf_event_notification__PCF_PDU_SESSION_BINDING_REGISTRATION,
       // false, not to have infinite recursion
      instantiate_pcf_for_ue_info(0),
      list_createList(),
      list_createList()
    );
  } else {
    bsf_event_notification = bsf_event_notification_create(
      nbsf_management_bsf_event_notification__PCF_PDU_SESSION_BINDING_REGISTRATION,
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return bsf_event_notification;
}


#ifdef bsf_event_notification_MAIN

void test_bsf_event_notification(int include_optional) {
    bsf_event_notification_t* bsf_event_notification_1 = instantiate_bsf_event_notification(include_optional);

	cJSON* jsonbsf_event_notification_1 = bsf_event_notification_convertToJSON(bsf_event_notification_1);
	printf("bsf_event_notification :\n%s\n", cJSON_Print(jsonbsf_event_notification_1));
	bsf_event_notification_t* bsf_event_notification_2 = bsf_event_notification_parseFromJSON(jsonbsf_event_notification_1);
	cJSON* jsonbsf_event_notification_2 = bsf_event_notification_convertToJSON(bsf_event_notification_2);
	printf("repeating bsf_event_notification:\n%s\n", cJSON_Print(jsonbsf_event_notification_2));
}

int main() {
  test_bsf_event_notification(1);
  test_bsf_event_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_event_notification_MAIN
#endif // bsf_event_notification_TEST
