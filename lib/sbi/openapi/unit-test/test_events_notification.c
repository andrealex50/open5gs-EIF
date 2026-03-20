#ifndef events_notification_TEST
#define events_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define events_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/events_notification.h"
events_notification_t* instantiate_events_notification(int include_optional);

#include "test_additional_access_info.c"
#include "test_additional_access_info.c"
#include "test_acc_net_charging_address.c"
#include "test_an_gw_address.c"
#include "test_plmn_id_nid.c"
#include "test_user_location.c"
#include "test_accumulated_usage.c"
#include "test_bridge_management_container.c"
#include "test_port_management_container.c"


events_notification_t* instantiate_events_notification(int include_optional) {
  events_notification_t* events_notification = NULL;
  if (include_optional) {
    events_notification = events_notification_create(
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__3GPP_ACCESS,
       // false, not to have infinite recursion
      instantiate_additional_access_info(0),
       // false, not to have infinite recursion
      instantiate_additional_access_info(0),
       // false, not to have infinite recursion
      instantiate_acc_net_charging_address(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_an_gw_address(0),
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__ANR_NOT_SUPPORTED,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      list_createList(),
      list_createList(),
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__NR,
      npcf_policyauthorization_service_api_events_notification__GEO,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "2013-10-20T19:20:30+01:00",
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_accumulated_usage(0),
       // false, not to have infinite recursion
      instantiate_bridge_management_container(0),
       // false, not to have infinite recursion
      instantiate_port_management_container(0),
      list_createList()
    );
  } else {
    events_notification = events_notification_create(
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__3GPP_ACCESS,
      NULL,
      NULL,
      NULL,
      list_createList(),
      NULL,
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__ANR_NOT_SUPPORTED,
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      npcf_policyauthorization_service_api_events_notification__NR,
      npcf_policyauthorization_service_api_events_notification__GEO,
      NULL,
      "2013-10-20T19:20:30+01:00",
      "-08:00+1",
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return events_notification;
}


#ifdef events_notification_MAIN

void test_events_notification(int include_optional) {
    events_notification_t* events_notification_1 = instantiate_events_notification(include_optional);

	cJSON* jsonevents_notification_1 = events_notification_convertToJSON(events_notification_1);
	printf("events_notification :\n%s\n", cJSON_Print(jsonevents_notification_1));
	events_notification_t* events_notification_2 = events_notification_parseFromJSON(jsonevents_notification_1);
	cJSON* jsonevents_notification_2 = events_notification_convertToJSON(events_notification_2);
	printf("repeating events_notification:\n%s\n", cJSON_Print(jsonevents_notification_2));
}

int main() {
  test_events_notification(1);
  test_events_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // events_notification_MAIN
#endif // events_notification_TEST
