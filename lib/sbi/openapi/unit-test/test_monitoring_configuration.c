#ifndef monitoring_configuration_TEST
#define monitoring_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define monitoring_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/monitoring_configuration.h"
monitoring_configuration_t* instantiate_monitoring_configuration(int include_optional);

#include "test_event_type.c"
#include "test_location_reporting_configuration.c"
#include "test_association_type.c"
#include "test_datalink_reporting_configuration.c"
#include "test_loss_connectivity_cfg.c"
#include "test_snssai.c"
#include "test_pdu_session_status_cfg.c"
#include "test_reachability_for_sms_configuration.c"
#include "test_reachability_for_data_configuration.c"


monitoring_configuration_t* instantiate_monitoring_configuration(int include_optional) {
  monitoring_configuration_t* monitoring_configuration = NULL;
  if (include_optional) {
    monitoring_configuration = monitoring_configuration_create(
      null,
      1,
       // false, not to have infinite recursion
      instantiate_location_reporting_configuration(0),
      null,
       // false, not to have infinite recursion
      instantiate_datalink_reporting_configuration(0),
       // false, not to have infinite recursion
      instantiate_loss_connectivity_cfg(0),
      56,
      56,
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_pdu_session_status_cfg(0),
      null,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_reachability_for_data_configuration(0),
      1
    );
  } else {
    monitoring_configuration = monitoring_configuration_create(
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

  return monitoring_configuration;
}


#ifdef monitoring_configuration_MAIN

void test_monitoring_configuration(int include_optional) {
    monitoring_configuration_t* monitoring_configuration_1 = instantiate_monitoring_configuration(include_optional);

	cJSON* jsonmonitoring_configuration_1 = monitoring_configuration_convertToJSON(monitoring_configuration_1);
	printf("monitoring_configuration :\n%s\n", cJSON_Print(jsonmonitoring_configuration_1));
	monitoring_configuration_t* monitoring_configuration_2 = monitoring_configuration_parseFromJSON(jsonmonitoring_configuration_1);
	cJSON* jsonmonitoring_configuration_2 = monitoring_configuration_convertToJSON(monitoring_configuration_2);
	printf("repeating monitoring_configuration:\n%s\n", cJSON_Print(jsonmonitoring_configuration_2));
}

int main() {
  test_monitoring_configuration(1);
  test_monitoring_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // monitoring_configuration_MAIN
#endif // monitoring_configuration_TEST
