#ifndef qos_flow_item_TEST
#define qos_flow_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_item.h"
qos_flow_item_t* instantiate_qos_flow_item(int include_optional);

#include "test_ng_ap_cause.c"


qos_flow_item_t* instantiate_qos_flow_item(int include_optional) {
  qos_flow_item_t* qos_flow_item = NULL;
  if (include_optional) {
    qos_flow_item = qos_flow_item_create(
      0,
      nsmf_pdusession_qos_flow_item__REL_DUE_TO_HO,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0)
    );
  } else {
    qos_flow_item = qos_flow_item_create(
      0,
      nsmf_pdusession_qos_flow_item__REL_DUE_TO_HO,
      1,
      1,
      NULL
    );
  }

  return qos_flow_item;
}


#ifdef qos_flow_item_MAIN

void test_qos_flow_item(int include_optional) {
    qos_flow_item_t* qos_flow_item_1 = instantiate_qos_flow_item(include_optional);

	cJSON* jsonqos_flow_item_1 = qos_flow_item_convertToJSON(qos_flow_item_1);
	printf("qos_flow_item :\n%s\n", cJSON_Print(jsonqos_flow_item_1));
	qos_flow_item_t* qos_flow_item_2 = qos_flow_item_parseFromJSON(jsonqos_flow_item_1);
	cJSON* jsonqos_flow_item_2 = qos_flow_item_convertToJSON(qos_flow_item_2);
	printf("repeating qos_flow_item:\n%s\n", cJSON_Print(jsonqos_flow_item_2));
}

int main() {
  test_qos_flow_item(1);
  test_qos_flow_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_item_MAIN
#endif // qos_flow_item_TEST
