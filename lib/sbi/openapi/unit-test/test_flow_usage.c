#ifndef flow_usage_TEST
#define flow_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define flow_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/flow_usage.h"
flow_usage_t* instantiate_flow_usage(int include_optional);



flow_usage_t* instantiate_flow_usage(int include_optional) {
  flow_usage_t* flow_usage = NULL;
  if (include_optional) {
    flow_usage = flow_usage_create(
    );
  } else {
    flow_usage = flow_usage_create(
    );
  }

  return flow_usage;
}


#ifdef flow_usage_MAIN

void test_flow_usage(int include_optional) {
    flow_usage_t* flow_usage_1 = instantiate_flow_usage(include_optional);

	cJSON* jsonflow_usage_1 = flow_usage_convertToJSON(flow_usage_1);
	printf("flow_usage :\n%s\n", cJSON_Print(jsonflow_usage_1));
	flow_usage_t* flow_usage_2 = flow_usage_parseFromJSON(jsonflow_usage_1);
	cJSON* jsonflow_usage_2 = flow_usage_convertToJSON(flow_usage_2);
	printf("repeating flow_usage:\n%s\n", cJSON_Print(jsonflow_usage_2));
}

int main() {
  test_flow_usage(1);
  test_flow_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // flow_usage_MAIN
#endif // flow_usage_TEST
