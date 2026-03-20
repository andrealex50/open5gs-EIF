#ifndef qos_monitoring_req_TEST
#define qos_monitoring_req_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_monitoring_req_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_monitoring_req.h"
qos_monitoring_req_t* instantiate_qos_monitoring_req(int include_optional);



qos_monitoring_req_t* instantiate_qos_monitoring_req(int include_optional) {
  qos_monitoring_req_t* qos_monitoring_req = NULL;
  if (include_optional) {
    qos_monitoring_req = qos_monitoring_req_create(
    );
  } else {
    qos_monitoring_req = qos_monitoring_req_create(
    );
  }

  return qos_monitoring_req;
}


#ifdef qos_monitoring_req_MAIN

void test_qos_monitoring_req(int include_optional) {
    qos_monitoring_req_t* qos_monitoring_req_1 = instantiate_qos_monitoring_req(include_optional);

	cJSON* jsonqos_monitoring_req_1 = qos_monitoring_req_convertToJSON(qos_monitoring_req_1);
	printf("qos_monitoring_req :\n%s\n", cJSON_Print(jsonqos_monitoring_req_1));
	qos_monitoring_req_t* qos_monitoring_req_2 = qos_monitoring_req_parseFromJSON(jsonqos_monitoring_req_1);
	cJSON* jsonqos_monitoring_req_2 = qos_monitoring_req_convertToJSON(qos_monitoring_req_2);
	printf("repeating qos_monitoring_req:\n%s\n", cJSON_Print(jsonqos_monitoring_req_2));
}

int main() {
  test_qos_monitoring_req(1);
  test_qos_monitoring_req(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_monitoring_req_MAIN
#endif // qos_monitoring_req_TEST
