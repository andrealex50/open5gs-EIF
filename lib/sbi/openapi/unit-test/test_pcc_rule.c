#ifndef pcc_rule_TEST
#define pcc_rule_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcc_rule_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcc_rule.h"
pcc_rule_t* instantiate_pcc_rule(int include_optional);

#include "test_tscai_input_container.c"
#include "test_tscai_input_container.c"
#include "test_downlink_data_notification_control.c"
#include "test_downlink_data_notification_control_rm.c"


pcc_rule_t* instantiate_pcc_rule(int include_optional) {
  pcc_rule_t* pcc_rule = NULL;
  if (include_optional) {
    pcc_rule = pcc_rule_create(
      list_createList(),
      "0",
      "YQ==",
      56,
      "0",
      0,
      npcf_smpolicycontrol_api_pcc_rule__NO_INFORMATION,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      list_createList(),
      1,
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
      0,
       // false, not to have infinite recursion
      instantiate_downlink_data_notification_control(0),
       // false, not to have infinite recursion
      instantiate_downlink_data_notification_control_rm(0),
      1,
      0
    );
  } else {
    pcc_rule = pcc_rule_create(
      list_createList(),
      "0",
      "YQ==",
      56,
      "0",
      0,
      npcf_smpolicycontrol_api_pcc_rule__NO_INFORMATION,
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      list_createList(),
      1,
      NULL,
      NULL,
      0,
      NULL,
      NULL,
      1,
      0
    );
  }

  return pcc_rule;
}


#ifdef pcc_rule_MAIN

void test_pcc_rule(int include_optional) {
    pcc_rule_t* pcc_rule_1 = instantiate_pcc_rule(include_optional);

	cJSON* jsonpcc_rule_1 = pcc_rule_convertToJSON(pcc_rule_1);
	printf("pcc_rule :\n%s\n", cJSON_Print(jsonpcc_rule_1));
	pcc_rule_t* pcc_rule_2 = pcc_rule_parseFromJSON(jsonpcc_rule_1);
	cJSON* jsonpcc_rule_2 = pcc_rule_convertToJSON(pcc_rule_2);
	printf("repeating pcc_rule:\n%s\n", cJSON_Print(jsonpcc_rule_2));
}

int main() {
  test_pcc_rule(1);
  test_pcc_rule(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcc_rule_MAIN
#endif // pcc_rule_TEST
