#ifndef qos_monitoring_information_rm_TEST
#define qos_monitoring_information_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_information_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_information_rm.h"
qos_monitoring_information_rm_t* instantiate_qos_monitoring_information_rm(int include_optional);



qos_monitoring_information_rm_t* instantiate_qos_monitoring_information_rm(int include_optional) {
  qos_monitoring_information_rm_t* qos_monitoring_information_rm = NULL;
  if (include_optional) {
    qos_monitoring_information_rm = qos_monitoring_information_rm_create(
      56,
      56,
      56
    );
  } else {
    qos_monitoring_information_rm = qos_monitoring_information_rm_create(
      56,
      56,
      56
    );
  }

  return qos_monitoring_information_rm;
}


#ifdef qos_monitoring_information_rm_MAIN

void test_qos_monitoring_information_rm(int include_optional) {
    qos_monitoring_information_rm_t* qos_monitoring_information_rm_1 = instantiate_qos_monitoring_information_rm(include_optional);

	cJSON* jsonqos_monitoring_information_rm_1 = qos_monitoring_information_rm_convertToJSON(qos_monitoring_information_rm_1);
	printf("qos_monitoring_information_rm :\n%s\n", cJSON_Print(jsonqos_monitoring_information_rm_1));
	qos_monitoring_information_rm_t* qos_monitoring_information_rm_2 = qos_monitoring_information_rm_parseFromJSON(jsonqos_monitoring_information_rm_1);
	cJSON* jsonqos_monitoring_information_rm_2 = qos_monitoring_information_rm_convertToJSON(qos_monitoring_information_rm_2);
	printf("repeating qos_monitoring_information_rm:\n%s\n", cJSON_Print(jsonqos_monitoring_information_rm_2));
}

int main() {
  test_qos_monitoring_information_rm(1);
  test_qos_monitoring_information_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_information_rm_MAIN
#endif // qos_monitoring_information_rm_TEST
