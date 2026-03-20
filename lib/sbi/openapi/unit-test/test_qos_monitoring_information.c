#ifndef qos_monitoring_information_TEST
#define qos_monitoring_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_information.h"
qos_monitoring_information_t* instantiate_qos_monitoring_information(int include_optional);



qos_monitoring_information_t* instantiate_qos_monitoring_information(int include_optional) {
  qos_monitoring_information_t* qos_monitoring_information = NULL;
  if (include_optional) {
    qos_monitoring_information = qos_monitoring_information_create(
      56,
      56,
      56
    );
  } else {
    qos_monitoring_information = qos_monitoring_information_create(
      56,
      56,
      56
    );
  }

  return qos_monitoring_information;
}


#ifdef qos_monitoring_information_MAIN

void test_qos_monitoring_information(int include_optional) {
    qos_monitoring_information_t* qos_monitoring_information_1 = instantiate_qos_monitoring_information(include_optional);

	cJSON* jsonqos_monitoring_information_1 = qos_monitoring_information_convertToJSON(qos_monitoring_information_1);
	printf("qos_monitoring_information :\n%s\n", cJSON_Print(jsonqos_monitoring_information_1));
	qos_monitoring_information_t* qos_monitoring_information_2 = qos_monitoring_information_parseFromJSON(jsonqos_monitoring_information_1);
	cJSON* jsonqos_monitoring_information_2 = qos_monitoring_information_convertToJSON(qos_monitoring_information_2);
	printf("repeating qos_monitoring_information:\n%s\n", cJSON_Print(jsonqos_monitoring_information_2));
}

int main() {
  test_qos_monitoring_information(1);
  test_qos_monitoring_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_information_MAIN
#endif // qos_monitoring_information_TEST
