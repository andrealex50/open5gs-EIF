#ifndef routing_info_sm_request_TEST
#define routing_info_sm_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define routing_info_sm_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/routing_info_sm_request.h"
routing_info_sm_request_t* instantiate_routing_info_sm_request(int include_optional);



routing_info_sm_request_t* instantiate_routing_info_sm_request(int include_optional) {
  routing_info_sm_request_t* routing_info_sm_request = NULL;
  if (include_optional) {
    routing_info_sm_request = routing_info_sm_request_create(
      1,
      "a"
    );
  } else {
    routing_info_sm_request = routing_info_sm_request_create(
      1,
      "a"
    );
  }

  return routing_info_sm_request;
}


#ifdef routing_info_sm_request_MAIN

void test_routing_info_sm_request(int include_optional) {
    routing_info_sm_request_t* routing_info_sm_request_1 = instantiate_routing_info_sm_request(include_optional);

	cJSON* jsonrouting_info_sm_request_1 = routing_info_sm_request_convertToJSON(routing_info_sm_request_1);
	printf("routing_info_sm_request :\n%s\n", cJSON_Print(jsonrouting_info_sm_request_1));
	routing_info_sm_request_t* routing_info_sm_request_2 = routing_info_sm_request_parseFromJSON(jsonrouting_info_sm_request_1);
	cJSON* jsonrouting_info_sm_request_2 = routing_info_sm_request_convertToJSON(routing_info_sm_request_2);
	printf("repeating routing_info_sm_request:\n%s\n", cJSON_Print(jsonrouting_info_sm_request_2));
}

int main() {
  test_routing_info_sm_request(1);
  test_routing_info_sm_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // routing_info_sm_request_MAIN
#endif // routing_info_sm_request_TEST
