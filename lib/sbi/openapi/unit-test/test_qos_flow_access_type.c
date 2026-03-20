#ifndef qos_flow_access_type_TEST
#define qos_flow_access_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_access_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_access_type.h"
qos_flow_access_type_t* instantiate_qos_flow_access_type(int include_optional);



qos_flow_access_type_t* instantiate_qos_flow_access_type(int include_optional) {
  qos_flow_access_type_t* qos_flow_access_type = NULL;
  if (include_optional) {
    qos_flow_access_type = qos_flow_access_type_create(
    );
  } else {
    qos_flow_access_type = qos_flow_access_type_create(
    );
  }

  return qos_flow_access_type;
}


#ifdef qos_flow_access_type_MAIN

void test_qos_flow_access_type(int include_optional) {
    qos_flow_access_type_t* qos_flow_access_type_1 = instantiate_qos_flow_access_type(include_optional);

	cJSON* jsonqos_flow_access_type_1 = qos_flow_access_type_convertToJSON(qos_flow_access_type_1);
	printf("qos_flow_access_type :\n%s\n", cJSON_Print(jsonqos_flow_access_type_1));
	qos_flow_access_type_t* qos_flow_access_type_2 = qos_flow_access_type_parseFromJSON(jsonqos_flow_access_type_1);
	cJSON* jsonqos_flow_access_type_2 = qos_flow_access_type_convertToJSON(qos_flow_access_type_2);
	printf("repeating qos_flow_access_type:\n%s\n", cJSON_Print(jsonqos_flow_access_type_2));
}

int main() {
  test_qos_flow_access_type(1);
  test_qos_flow_access_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_access_type_MAIN
#endif // qos_flow_access_type_TEST
