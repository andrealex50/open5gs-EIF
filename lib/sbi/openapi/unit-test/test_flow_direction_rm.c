#ifndef flow_direction_rm_TEST
#define flow_direction_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define flow_direction_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/flow_direction_rm.h"
flow_direction_rm_t* instantiate_flow_direction_rm(int include_optional);



flow_direction_rm_t* instantiate_flow_direction_rm(int include_optional) {
  flow_direction_rm_t* flow_direction_rm = NULL;
  if (include_optional) {
    flow_direction_rm = flow_direction_rm_create(
    );
  } else {
    flow_direction_rm = flow_direction_rm_create(
    );
  }

  return flow_direction_rm;
}


#ifdef flow_direction_rm_MAIN

void test_flow_direction_rm(int include_optional) {
    flow_direction_rm_t* flow_direction_rm_1 = instantiate_flow_direction_rm(include_optional);

	cJSON* jsonflow_direction_rm_1 = flow_direction_rm_convertToJSON(flow_direction_rm_1);
	printf("flow_direction_rm :\n%s\n", cJSON_Print(jsonflow_direction_rm_1));
	flow_direction_rm_t* flow_direction_rm_2 = flow_direction_rm_parseFromJSON(jsonflow_direction_rm_1);
	cJSON* jsonflow_direction_rm_2 = flow_direction_rm_convertToJSON(flow_direction_rm_2);
	printf("repeating flow_direction_rm:\n%s\n", cJSON_Print(jsonflow_direction_rm_2));
}

int main() {
  test_flow_direction_rm(1);
  test_flow_direction_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // flow_direction_rm_MAIN
#endif // flow_direction_rm_TEST
