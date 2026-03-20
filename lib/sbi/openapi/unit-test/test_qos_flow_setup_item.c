#ifndef qos_flow_setup_item_TEST
#define qos_flow_setup_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_setup_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_setup_item.h"
qos_flow_setup_item_t* instantiate_qos_flow_setup_item(int include_optional);

#include "test_qos_flow_profile.c"


qos_flow_setup_item_t* instantiate_qos_flow_setup_item(int include_optional) {
  qos_flow_setup_item_t* qos_flow_setup_item = NULL;
  if (include_optional) {
    qos_flow_setup_item = qos_flow_setup_item_create(
      0,
      "YQ==",
      0,
      "YQ==",
       // false, not to have infinite recursion
      instantiate_qos_flow_profile(0),
      nsmf_pdusession_qos_flow_setup_item__3GPP,
      1
    );
  } else {
    qos_flow_setup_item = qos_flow_setup_item_create(
      0,
      "YQ==",
      0,
      "YQ==",
      NULL,
      nsmf_pdusession_qos_flow_setup_item__3GPP,
      1
    );
  }

  return qos_flow_setup_item;
}


#ifdef qos_flow_setup_item_MAIN

void test_qos_flow_setup_item(int include_optional) {
    qos_flow_setup_item_t* qos_flow_setup_item_1 = instantiate_qos_flow_setup_item(include_optional);

	cJSON* jsonqos_flow_setup_item_1 = qos_flow_setup_item_convertToJSON(qos_flow_setup_item_1);
	printf("qos_flow_setup_item :\n%s\n", cJSON_Print(jsonqos_flow_setup_item_1));
	qos_flow_setup_item_t* qos_flow_setup_item_2 = qos_flow_setup_item_parseFromJSON(jsonqos_flow_setup_item_1);
	cJSON* jsonqos_flow_setup_item_2 = qos_flow_setup_item_convertToJSON(qos_flow_setup_item_2);
	printf("repeating qos_flow_setup_item:\n%s\n", cJSON_Print(jsonqos_flow_setup_item_2));
}

int main() {
  test_qos_flow_setup_item(1);
  test_qos_flow_setup_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_setup_item_MAIN
#endif // qos_flow_setup_item_TEST
