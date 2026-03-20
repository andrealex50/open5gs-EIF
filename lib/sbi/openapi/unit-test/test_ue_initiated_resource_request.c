#ifndef ue_initiated_resource_request_TEST
#define ue_initiated_resource_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_initiated_resource_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_initiated_resource_request.h"
ue_initiated_resource_request_t* instantiate_ue_initiated_resource_request(int include_optional);

#include "test_requested_qos.c"


ue_initiated_resource_request_t* instantiate_ue_initiated_resource_request(int include_optional) {
  ue_initiated_resource_request_t* ue_initiated_resource_request = NULL;
  if (include_optional) {
    ue_initiated_resource_request = ue_initiated_resource_request_create(
      "0",
      npcf_smpolicycontrol_api_ue_initiated_resource_request__CREATE_PCC_RULE,
      56,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_requested_qos(0)
    );
  } else {
    ue_initiated_resource_request = ue_initiated_resource_request_create(
      "0",
      npcf_smpolicycontrol_api_ue_initiated_resource_request__CREATE_PCC_RULE,
      56,
      list_createList(),
      NULL
    );
  }

  return ue_initiated_resource_request;
}


#ifdef ue_initiated_resource_request_MAIN

void test_ue_initiated_resource_request(int include_optional) {
    ue_initiated_resource_request_t* ue_initiated_resource_request_1 = instantiate_ue_initiated_resource_request(include_optional);

	cJSON* jsonue_initiated_resource_request_1 = ue_initiated_resource_request_convertToJSON(ue_initiated_resource_request_1);
	printf("ue_initiated_resource_request :\n%s\n", cJSON_Print(jsonue_initiated_resource_request_1));
	ue_initiated_resource_request_t* ue_initiated_resource_request_2 = ue_initiated_resource_request_parseFromJSON(jsonue_initiated_resource_request_1);
	cJSON* jsonue_initiated_resource_request_2 = ue_initiated_resource_request_convertToJSON(ue_initiated_resource_request_2);
	printf("repeating ue_initiated_resource_request:\n%s\n", cJSON_Print(jsonue_initiated_resource_request_2));
}

int main() {
  test_ue_initiated_resource_request(1);
  test_ue_initiated_resource_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_initiated_resource_request_MAIN
#endif // ue_initiated_resource_request_TEST
