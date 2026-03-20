#ifndef flow_status_TEST
#define flow_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define flow_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/flow_status.h"
flow_status_t* instantiate_flow_status(int include_optional);



flow_status_t* instantiate_flow_status(int include_optional) {
  flow_status_t* flow_status = NULL;
  if (include_optional) {
    flow_status = flow_status_create(
    );
  } else {
    flow_status = flow_status_create(
    );
  }

  return flow_status;
}


#ifdef flow_status_MAIN

void test_flow_status(int include_optional) {
    flow_status_t* flow_status_1 = instantiate_flow_status(include_optional);

	cJSON* jsonflow_status_1 = flow_status_convertToJSON(flow_status_1);
	printf("flow_status :\n%s\n", cJSON_Print(jsonflow_status_1));
	flow_status_t* flow_status_2 = flow_status_parseFromJSON(jsonflow_status_1);
	cJSON* jsonflow_status_2 = flow_status_convertToJSON(flow_status_2);
	printf("repeating flow_status:\n%s\n", cJSON_Print(jsonflow_status_2));
}

int main() {
  test_flow_status(1);
  test_flow_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // flow_status_MAIN
#endif // flow_status_TEST
