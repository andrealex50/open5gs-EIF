#ifndef qos_notification_control_info_TEST
#define qos_notification_control_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_notification_control_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_notification_control_info.h"
qos_notification_control_info_t* instantiate_qos_notification_control_info(int include_optional);



qos_notification_control_info_t* instantiate_qos_notification_control_info(int include_optional) {
  qos_notification_control_info_t* qos_notification_control_info = NULL;
  if (include_optional) {
    qos_notification_control_info = qos_notification_control_info_create(
      list_createList(),
      npcf_smpolicycontrol_api_qos_notification_control_info__GUARANTEED,
      56,
      "0"
    );
  } else {
    qos_notification_control_info = qos_notification_control_info_create(
      list_createList(),
      npcf_smpolicycontrol_api_qos_notification_control_info__GUARANTEED,
      56,
      "0"
    );
  }

  return qos_notification_control_info;
}


#ifdef qos_notification_control_info_MAIN

void test_qos_notification_control_info(int include_optional) {
    qos_notification_control_info_t* qos_notification_control_info_1 = instantiate_qos_notification_control_info(include_optional);

	cJSON* jsonqos_notification_control_info_1 = qos_notification_control_info_convertToJSON(qos_notification_control_info_1);
	printf("qos_notification_control_info :\n%s\n", cJSON_Print(jsonqos_notification_control_info_1));
	qos_notification_control_info_t* qos_notification_control_info_2 = qos_notification_control_info_parseFromJSON(jsonqos_notification_control_info_1);
	cJSON* jsonqos_notification_control_info_2 = qos_notification_control_info_convertToJSON(qos_notification_control_info_2);
	printf("repeating qos_notification_control_info:\n%s\n", cJSON_Print(jsonqos_notification_control_info_2));
}

int main() {
  test_qos_notification_control_info(1);
  test_qos_notification_control_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_notification_control_info_MAIN
#endif // qos_notification_control_info_TEST
