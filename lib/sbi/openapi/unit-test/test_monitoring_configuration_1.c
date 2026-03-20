#ifndef monitoring_configuration_1_TEST
#define monitoring_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define monitoring_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/monitoring_configuration_1.h"
monitoring_configuration_1_t* instantiate_monitoring_configuration_1(int include_optional);

#include "test_event_type.c"
#include "test_location_reporting_configuration_1.c"
#include "test_association_type.c"
#include "test_datalink_reporting_configuration_1.c"
#include "test_loss_connectivity_cfg_1.c"
#include "test_snssai.c"
#include "test_pdu_session_status_cfg_1.c"
#include "test_reachability_for_sms_configuration.c"
#include "test_reachability_for_data_configuration_1.c"


monitoring_configuration_1_t* instantiate_monitoring_configuration_1(int include_optional) {
  monitoring_configuration_1_t* monitoring_configuration_1 = NULL;
  if (include_optional) {
    monitoring_configuration_1 = monitoring_configuration_1_create(
      null,
      1,
       // false, not to have infinite recursion
      instantiate_location_reporting_configuration_1(0),
      null,
       // false, not to have infinite recursion
      instantiate_datalink_reporting_configuration_1(0),
       // false, not to have infinite recursion
      instantiate_loss_connectivity_cfg_1(0),
      56,
      56,
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_pdu_session_status_cfg_1(0),
      null,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_reachability_for_data_configuration_1(0),
      1
    );
  } else {
    monitoring_configuration_1 = monitoring_configuration_1_create(
      null,
      1,
      NULL,
      null,
      NULL,
      NULL,
      56,
      56,
      1,
      "0",
      NULL,
      NULL,
      null,
      "0",
      "0",
      NULL,
      1
    );
  }

  return monitoring_configuration_1;
}


#ifdef monitoring_configuration_1_MAIN

void test_monitoring_configuration_1(int include_optional) {
    monitoring_configuration_1_t* monitoring_configuration_1_1 = instantiate_monitoring_configuration_1(include_optional);

	cJSON* jsonmonitoring_configuration_1_1 = monitoring_configuration_1_convertToJSON(monitoring_configuration_1_1);
	printf("monitoring_configuration_1 :\n%s\n", cJSON_Print(jsonmonitoring_configuration_1_1));
	monitoring_configuration_1_t* monitoring_configuration_1_2 = monitoring_configuration_1_parseFromJSON(jsonmonitoring_configuration_1_1);
	cJSON* jsonmonitoring_configuration_1_2 = monitoring_configuration_1_convertToJSON(monitoring_configuration_1_2);
	printf("repeating monitoring_configuration_1:\n%s\n", cJSON_Print(jsonmonitoring_configuration_1_2));
}

int main() {
  test_monitoring_configuration_1(1);
  test_monitoring_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // monitoring_configuration_1_MAIN
#endif // monitoring_configuration_1_TEST
