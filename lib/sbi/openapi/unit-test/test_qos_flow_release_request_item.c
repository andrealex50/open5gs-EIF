#ifndef qos_flow_release_request_item_TEST
#define qos_flow_release_request_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_release_request_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_release_request_item.h"
qos_flow_release_request_item_t* instantiate_qos_flow_release_request_item(int include_optional);



qos_flow_release_request_item_t* instantiate_qos_flow_release_request_item(int include_optional) {
  qos_flow_release_request_item_t* qos_flow_release_request_item = NULL;
  if (include_optional) {
    qos_flow_release_request_item = qos_flow_release_request_item_create(
      0,
      "YQ==",
      "YQ=="
    );
  } else {
    qos_flow_release_request_item = qos_flow_release_request_item_create(
      0,
      "YQ==",
      "YQ=="
    );
  }

  return qos_flow_release_request_item;
}


#ifdef qos_flow_release_request_item_MAIN

void test_qos_flow_release_request_item(int include_optional) {
    qos_flow_release_request_item_t* qos_flow_release_request_item_1 = instantiate_qos_flow_release_request_item(include_optional);

	cJSON* jsonqos_flow_release_request_item_1 = qos_flow_release_request_item_convertToJSON(qos_flow_release_request_item_1);
	printf("qos_flow_release_request_item :\n%s\n", cJSON_Print(jsonqos_flow_release_request_item_1));
	qos_flow_release_request_item_t* qos_flow_release_request_item_2 = qos_flow_release_request_item_parseFromJSON(jsonqos_flow_release_request_item_1);
	cJSON* jsonqos_flow_release_request_item_2 = qos_flow_release_request_item_convertToJSON(qos_flow_release_request_item_2);
	printf("repeating qos_flow_release_request_item:\n%s\n", cJSON_Print(jsonqos_flow_release_request_item_2));
}

int main() {
  test_qos_flow_release_request_item(1);
  test_qos_flow_release_request_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_release_request_item_MAIN
#endif // qos_flow_release_request_item_TEST
