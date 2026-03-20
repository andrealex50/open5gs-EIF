#ifndef ursp_rule_request_TEST
#define ursp_rule_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ursp_rule_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ursp_rule_request.h"
ursp_rule_request_t* instantiate_ursp_rule_request(int include_optional);

#include "test_traffic_descriptor_components.c"


ursp_rule_request_t* instantiate_ursp_rule_request(int include_optional) {
  ursp_rule_request_t* ursp_rule_request = NULL;
  if (include_optional) {
    ursp_rule_request = ursp_rule_request_create(
       // false, not to have infinite recursion
      instantiate_traffic_descriptor_components(0),
      0,
      list_createList()
    );
  } else {
    ursp_rule_request = ursp_rule_request_create(
      NULL,
      0,
      list_createList()
    );
  }

  return ursp_rule_request;
}


#ifdef ursp_rule_request_MAIN

void test_ursp_rule_request(int include_optional) {
    ursp_rule_request_t* ursp_rule_request_1 = instantiate_ursp_rule_request(include_optional);

	cJSON* jsonursp_rule_request_1 = ursp_rule_request_convertToJSON(ursp_rule_request_1);
	printf("ursp_rule_request :\n%s\n", cJSON_Print(jsonursp_rule_request_1));
	ursp_rule_request_t* ursp_rule_request_2 = ursp_rule_request_parseFromJSON(jsonursp_rule_request_1);
	cJSON* jsonursp_rule_request_2 = ursp_rule_request_convertToJSON(ursp_rule_request_2);
	printf("repeating ursp_rule_request:\n%s\n", cJSON_Print(jsonursp_rule_request_2));
}

int main() {
  test_ursp_rule_request(1);
  test_ursp_rule_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ursp_rule_request_MAIN
#endif // ursp_rule_request_TEST
