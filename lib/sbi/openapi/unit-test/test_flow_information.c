#ifndef flow_information_TEST
#define flow_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define flow_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/flow_information.h"
flow_information_t* instantiate_flow_information(int include_optional);

#include "test_eth_flow_description.c"


flow_information_t* instantiate_flow_information(int include_optional) {
  flow_information_t* flow_information = NULL;
  if (include_optional) {
    flow_information = flow_information_create(
      "0",
       // false, not to have infinite recursion
      instantiate_eth_flow_description(0),
      "0",
      1,
      "0",
      "0",
      "0",
      npcf_smpolicycontrol_api_flow_information__DOWNLINK
    );
  } else {
    flow_information = flow_information_create(
      "0",
      NULL,
      "0",
      1,
      "0",
      "0",
      "0",
      npcf_smpolicycontrol_api_flow_information__DOWNLINK
    );
  }

  return flow_information;
}


#ifdef flow_information_MAIN

void test_flow_information(int include_optional) {
    flow_information_t* flow_information_1 = instantiate_flow_information(include_optional);

	cJSON* jsonflow_information_1 = flow_information_convertToJSON(flow_information_1);
	printf("flow_information :\n%s\n", cJSON_Print(jsonflow_information_1));
	flow_information_t* flow_information_2 = flow_information_parseFromJSON(jsonflow_information_1);
	cJSON* jsonflow_information_2 = flow_information_convertToJSON(flow_information_2);
	printf("repeating flow_information:\n%s\n", cJSON_Print(jsonflow_information_2));
}

int main() {
  test_flow_information(1);
  test_flow_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // flow_information_MAIN
#endif // flow_information_TEST
