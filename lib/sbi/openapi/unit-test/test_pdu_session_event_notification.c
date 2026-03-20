#ifndef pdu_session_event_notification_TEST
#define pdu_session_event_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_event_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_event_notification.h"
pdu_session_event_notification_t* instantiate_pdu_session_event_notification(int include_optional);

#include "test_af_event_notification.c"
#include "test_pcf_addressing_info.c"
#include "test_snssai.c"


pdu_session_event_notification_t* instantiate_pdu_session_event_notification(int include_optional) {
  pdu_session_event_notification_t* pdu_session_event_notification = NULL;
  if (include_optional) {
    pdu_session_event_notification = pdu_session_event_notification_create(
       // false, not to have infinite recursion
      instantiate_af_event_notification(0),
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      npcf_policyauthorization_service_api_pdu_session_event_notification__ESTABLISHED,
       // false, not to have infinite recursion
      instantiate_pcf_addressing_info(0),
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a"
    );
  } else {
    pdu_session_event_notification = pdu_session_event_notification_create(
      NULL,
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      npcf_policyauthorization_service_api_pdu_session_event_notification__ESTABLISHED,
      NULL,
      "0",
      NULL,
      "a"
    );
  }

  return pdu_session_event_notification;
}


#ifdef pdu_session_event_notification_MAIN

void test_pdu_session_event_notification(int include_optional) {
    pdu_session_event_notification_t* pdu_session_event_notification_1 = instantiate_pdu_session_event_notification(include_optional);

	cJSON* jsonpdu_session_event_notification_1 = pdu_session_event_notification_convertToJSON(pdu_session_event_notification_1);
	printf("pdu_session_event_notification :\n%s\n", cJSON_Print(jsonpdu_session_event_notification_1));
	pdu_session_event_notification_t* pdu_session_event_notification_2 = pdu_session_event_notification_parseFromJSON(jsonpdu_session_event_notification_1);
	cJSON* jsonpdu_session_event_notification_2 = pdu_session_event_notification_convertToJSON(pdu_session_event_notification_2);
	printf("repeating pdu_session_event_notification:\n%s\n", cJSON_Print(jsonpdu_session_event_notification_2));
}

int main() {
  test_pdu_session_event_notification(1);
  test_pdu_session_event_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_event_notification_MAIN
#endif // pdu_session_event_notification_TEST
