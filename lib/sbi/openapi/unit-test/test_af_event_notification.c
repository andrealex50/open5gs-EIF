#ifndef af_event_notification_TEST
#define af_event_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_event_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_event_notification.h"
af_event_notification_t* instantiate_af_event_notification(int include_optional);



af_event_notification_t* instantiate_af_event_notification(int include_optional) {
  af_event_notification_t* af_event_notification = NULL;
  if (include_optional) {
    af_event_notification = af_event_notification_create(
      npcf_policyauthorization_service_api_af_event_notification__ACCESS_TYPE_CHANGE,
      list_createList()
    );
  } else {
    af_event_notification = af_event_notification_create(
      npcf_policyauthorization_service_api_af_event_notification__ACCESS_TYPE_CHANGE,
      list_createList()
    );
  }

  return af_event_notification;
}


#ifdef af_event_notification_MAIN

void test_af_event_notification(int include_optional) {
    af_event_notification_t* af_event_notification_1 = instantiate_af_event_notification(include_optional);

	cJSON* jsonaf_event_notification_1 = af_event_notification_convertToJSON(af_event_notification_1);
	printf("af_event_notification :\n%s\n", cJSON_Print(jsonaf_event_notification_1));
	af_event_notification_t* af_event_notification_2 = af_event_notification_parseFromJSON(jsonaf_event_notification_1);
	cJSON* jsonaf_event_notification_2 = af_event_notification_convertToJSON(af_event_notification_2);
	printf("repeating af_event_notification:\n%s\n", cJSON_Print(jsonaf_event_notification_2));
}

int main() {
  test_af_event_notification(1);
  test_af_event_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_event_notification_MAIN
#endif // af_event_notification_TEST
