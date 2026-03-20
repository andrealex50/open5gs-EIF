#ifndef qos_monitoring_info_TEST
#define qos_monitoring_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_info.h"
qos_monitoring_info_t* instantiate_qos_monitoring_info(int include_optional);



qos_monitoring_info_t* instantiate_qos_monitoring_info(int include_optional) {
  qos_monitoring_info_t* qos_monitoring_info = NULL;
  if (include_optional) {
    qos_monitoring_info = qos_monitoring_info_create(
      1
    );
  } else {
    qos_monitoring_info = qos_monitoring_info_create(
      1
    );
  }

  return qos_monitoring_info;
}


#ifdef qos_monitoring_info_MAIN

void test_qos_monitoring_info(int include_optional) {
    qos_monitoring_info_t* qos_monitoring_info_1 = instantiate_qos_monitoring_info(include_optional);

	cJSON* jsonqos_monitoring_info_1 = qos_monitoring_info_convertToJSON(qos_monitoring_info_1);
	printf("qos_monitoring_info :\n%s\n", cJSON_Print(jsonqos_monitoring_info_1));
	qos_monitoring_info_t* qos_monitoring_info_2 = qos_monitoring_info_parseFromJSON(jsonqos_monitoring_info_1);
	cJSON* jsonqos_monitoring_info_2 = qos_monitoring_info_convertToJSON(qos_monitoring_info_2);
	printf("repeating qos_monitoring_info:\n%s\n", cJSON_Print(jsonqos_monitoring_info_2));
}

int main() {
  test_qos_monitoring_info(1);
  test_qos_monitoring_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_info_MAIN
#endif // qos_monitoring_info_TEST
