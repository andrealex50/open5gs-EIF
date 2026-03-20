#ifndef qos_monitoring_data_TEST
#define qos_monitoring_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_data.h"
qos_monitoring_data_t* instantiate_qos_monitoring_data(int include_optional);



qos_monitoring_data_t* instantiate_qos_monitoring_data(int include_optional) {
  qos_monitoring_data_t* qos_monitoring_data = NULL;
  if (include_optional) {
    qos_monitoring_data = qos_monitoring_data_create(
      "0",
      list_createList(),
      list_createList(),
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      1
    );
  } else {
    qos_monitoring_data = qos_monitoring_data_create(
      "0",
      list_createList(),
      list_createList(),
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      1
    );
  }

  return qos_monitoring_data;
}


#ifdef qos_monitoring_data_MAIN

void test_qos_monitoring_data(int include_optional) {
    qos_monitoring_data_t* qos_monitoring_data_1 = instantiate_qos_monitoring_data(include_optional);

	cJSON* jsonqos_monitoring_data_1 = qos_monitoring_data_convertToJSON(qos_monitoring_data_1);
	printf("qos_monitoring_data :\n%s\n", cJSON_Print(jsonqos_monitoring_data_1));
	qos_monitoring_data_t* qos_monitoring_data_2 = qos_monitoring_data_parseFromJSON(jsonqos_monitoring_data_1);
	cJSON* jsonqos_monitoring_data_2 = qos_monitoring_data_convertToJSON(qos_monitoring_data_2);
	printf("repeating qos_monitoring_data:\n%s\n", cJSON_Print(jsonqos_monitoring_data_2));
}

int main() {
  test_qos_monitoring_data(1);
  test_qos_monitoring_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_data_MAIN
#endif // qos_monitoring_data_TEST
