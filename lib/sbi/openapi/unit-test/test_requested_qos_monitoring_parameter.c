#ifndef requested_qos_monitoring_parameter_TEST
#define requested_qos_monitoring_parameter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_qos_monitoring_parameter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_qos_monitoring_parameter.h"
requested_qos_monitoring_parameter_t* instantiate_requested_qos_monitoring_parameter(int include_optional);



requested_qos_monitoring_parameter_t* instantiate_requested_qos_monitoring_parameter(int include_optional) {
  requested_qos_monitoring_parameter_t* requested_qos_monitoring_parameter = NULL;
  if (include_optional) {
    requested_qos_monitoring_parameter = requested_qos_monitoring_parameter_create(
    );
  } else {
    requested_qos_monitoring_parameter = requested_qos_monitoring_parameter_create(
    );
  }

  return requested_qos_monitoring_parameter;
}


#ifdef requested_qos_monitoring_parameter_MAIN

void test_requested_qos_monitoring_parameter(int include_optional) {
    requested_qos_monitoring_parameter_t* requested_qos_monitoring_parameter_1 = instantiate_requested_qos_monitoring_parameter(include_optional);

	cJSON* jsonrequested_qos_monitoring_parameter_1 = requested_qos_monitoring_parameter_convertToJSON(requested_qos_monitoring_parameter_1);
	printf("requested_qos_monitoring_parameter :\n%s\n", cJSON_Print(jsonrequested_qos_monitoring_parameter_1));
	requested_qos_monitoring_parameter_t* requested_qos_monitoring_parameter_2 = requested_qos_monitoring_parameter_parseFromJSON(jsonrequested_qos_monitoring_parameter_1);
	cJSON* jsonrequested_qos_monitoring_parameter_2 = requested_qos_monitoring_parameter_convertToJSON(requested_qos_monitoring_parameter_2);
	printf("repeating requested_qos_monitoring_parameter:\n%s\n", cJSON_Print(jsonrequested_qos_monitoring_parameter_2));
}

int main() {
  test_requested_qos_monitoring_parameter(1);
  test_requested_qos_monitoring_parameter(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_qos_monitoring_parameter_MAIN
#endif // requested_qos_monitoring_parameter_TEST
