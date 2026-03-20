#ifndef qos_flow_usage_TEST
#define qos_flow_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_usage.h"
qos_flow_usage_t* instantiate_qos_flow_usage(int include_optional);



qos_flow_usage_t* instantiate_qos_flow_usage(int include_optional) {
  qos_flow_usage_t* qos_flow_usage = NULL;
  if (include_optional) {
    qos_flow_usage = qos_flow_usage_create(
    );
  } else {
    qos_flow_usage = qos_flow_usage_create(
    );
  }

  return qos_flow_usage;
}


#ifdef qos_flow_usage_MAIN

void test_qos_flow_usage(int include_optional) {
    qos_flow_usage_t* qos_flow_usage_1 = instantiate_qos_flow_usage(include_optional);

	cJSON* jsonqos_flow_usage_1 = qos_flow_usage_convertToJSON(qos_flow_usage_1);
	printf("qos_flow_usage :\n%s\n", cJSON_Print(jsonqos_flow_usage_1));
	qos_flow_usage_t* qos_flow_usage_2 = qos_flow_usage_parseFromJSON(jsonqos_flow_usage_1);
	cJSON* jsonqos_flow_usage_2 = qos_flow_usage_convertToJSON(qos_flow_usage_2);
	printf("repeating qos_flow_usage:\n%s\n", cJSON_Print(jsonqos_flow_usage_2));
}

int main() {
  test_qos_flow_usage(1);
  test_qos_flow_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_usage_MAIN
#endif // qos_flow_usage_TEST
