#ifndef trigger_request_TEST
#define trigger_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trigger_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trigger_request.h"
trigger_request_t* instantiate_trigger_request(int include_optional);

#include "test_pcscf_address.c"


trigger_request_t* instantiate_trigger_request(int include_optional) {
  trigger_request_t* trigger_request = NULL;
  if (include_optional) {
    trigger_request = trigger_request_create(
      "a",
       // false, not to have infinite recursion
      instantiate_pcscf_address(0)
    );
  } else {
    trigger_request = trigger_request_create(
      "a",
      NULL
    );
  }

  return trigger_request;
}


#ifdef trigger_request_MAIN

void test_trigger_request(int include_optional) {
    trigger_request_t* trigger_request_1 = instantiate_trigger_request(include_optional);

	cJSON* jsontrigger_request_1 = trigger_request_convertToJSON(trigger_request_1);
	printf("trigger_request :\n%s\n", cJSON_Print(jsontrigger_request_1));
	trigger_request_t* trigger_request_2 = trigger_request_parseFromJSON(jsontrigger_request_1);
	cJSON* jsontrigger_request_2 = trigger_request_convertToJSON(trigger_request_2);
	printf("repeating trigger_request:\n%s\n", cJSON_Print(jsontrigger_request_2));
}

int main() {
  test_trigger_request(1);
  test_trigger_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // trigger_request_MAIN
#endif // trigger_request_TEST
