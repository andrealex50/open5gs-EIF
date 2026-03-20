#ifndef routing_info_sm_response_TEST
#define routing_info_sm_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define routing_info_sm_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/routing_info_sm_response.h"
routing_info_sm_response_t* instantiate_routing_info_sm_response(int include_optional);

#include "test_smsf_registration.c"
#include "test_smsf_registration.c"
#include "test_ip_sm_gw_info.c"
#include "test_sms_router_info.c"


routing_info_sm_response_t* instantiate_routing_info_sm_response(int include_optional) {
  routing_info_sm_response_t* routing_info_sm_response = NULL;
  if (include_optional) {
    routing_info_sm_response = routing_info_sm_response_create(
      "a",
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
       // false, not to have infinite recursion
      instantiate_ip_sm_gw_info(0),
       // false, not to have infinite recursion
      instantiate_sms_router_info(0)
    );
  } else {
    routing_info_sm_response = routing_info_sm_response_create(
      "a",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return routing_info_sm_response;
}


#ifdef routing_info_sm_response_MAIN

void test_routing_info_sm_response(int include_optional) {
    routing_info_sm_response_t* routing_info_sm_response_1 = instantiate_routing_info_sm_response(include_optional);

	cJSON* jsonrouting_info_sm_response_1 = routing_info_sm_response_convertToJSON(routing_info_sm_response_1);
	printf("routing_info_sm_response :\n%s\n", cJSON_Print(jsonrouting_info_sm_response_1));
	routing_info_sm_response_t* routing_info_sm_response_2 = routing_info_sm_response_parseFromJSON(jsonrouting_info_sm_response_1);
	cJSON* jsonrouting_info_sm_response_2 = routing_info_sm_response_convertToJSON(routing_info_sm_response_2);
	printf("repeating routing_info_sm_response:\n%s\n", cJSON_Print(jsonrouting_info_sm_response_2));
}

int main() {
  test_routing_info_sm_response(1);
  test_routing_info_sm_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // routing_info_sm_response_MAIN
#endif // routing_info_sm_response_TEST
