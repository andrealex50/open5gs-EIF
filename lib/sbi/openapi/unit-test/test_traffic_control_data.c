#ifndef traffic_control_data_TEST
#define traffic_control_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_control_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_control_data.h"
traffic_control_data_t* instantiate_traffic_control_data(int include_optional);

#include "test_redirect_information.c"
#include "test_up_path_chg_event.c"
#include "test_steering_mode.c"
#include "test_steering_mode.c"


traffic_control_data_t* instantiate_traffic_control_data(int include_optional) {
  traffic_control_data_t* traffic_control_data = NULL;
  if (include_optional) {
    traffic_control_data = traffic_control_data_create(
      "0",
      npcf_smpolicycontrol_api_traffic_control_data__ENABLED-UPLINK,
       // false, not to have infinite recursion
      instantiate_redirect_information(0),
      list_createList(),
      1,
      "0",
      "0",
      list_createList(),
      0,
      list_createList(),
      1,
      1,
      56,
       // false, not to have infinite recursion
      instantiate_up_path_chg_event(0),
      npcf_smpolicycontrol_api_traffic_control_data__MPTCP,
       // false, not to have infinite recursion
      instantiate_steering_mode(0),
       // false, not to have infinite recursion
      instantiate_steering_mode(0),
      npcf_smpolicycontrol_api_traffic_control_data__ALLOWED
    );
  } else {
    traffic_control_data = traffic_control_data_create(
      "0",
      npcf_smpolicycontrol_api_traffic_control_data__ENABLED-UPLINK,
      NULL,
      list_createList(),
      1,
      "0",
      "0",
      list_createList(),
      0,
      list_createList(),
      1,
      1,
      56,
      NULL,
      npcf_smpolicycontrol_api_traffic_control_data__MPTCP,
      NULL,
      NULL,
      npcf_smpolicycontrol_api_traffic_control_data__ALLOWED
    );
  }

  return traffic_control_data;
}


#ifdef traffic_control_data_MAIN

void test_traffic_control_data(int include_optional) {
    traffic_control_data_t* traffic_control_data_1 = instantiate_traffic_control_data(include_optional);

	cJSON* jsontraffic_control_data_1 = traffic_control_data_convertToJSON(traffic_control_data_1);
	printf("traffic_control_data :\n%s\n", cJSON_Print(jsontraffic_control_data_1));
	traffic_control_data_t* traffic_control_data_2 = traffic_control_data_parseFromJSON(jsontraffic_control_data_1);
	cJSON* jsontraffic_control_data_2 = traffic_control_data_convertToJSON(traffic_control_data_2);
	printf("repeating traffic_control_data:\n%s\n", cJSON_Print(jsontraffic_control_data_2));
}

int main() {
  test_traffic_control_data(1);
  test_traffic_control_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_control_data_MAIN
#endif // traffic_control_data_TEST
