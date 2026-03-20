#ifndef request_trigger_TEST
#define request_trigger_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define request_trigger_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/request_trigger.h"
request_trigger_t* instantiate_request_trigger(int include_optional);



request_trigger_t* instantiate_request_trigger(int include_optional) {
  request_trigger_t* request_trigger = NULL;
  if (include_optional) {
    request_trigger = request_trigger_create(
    );
  } else {
    request_trigger = request_trigger_create(
    );
  }

  return request_trigger;
}


#ifdef request_trigger_MAIN

void test_request_trigger(int include_optional) {
    request_trigger_t* request_trigger_1 = instantiate_request_trigger(include_optional);

	cJSON* jsonrequest_trigger_1 = request_trigger_convertToJSON(request_trigger_1);
	printf("request_trigger :\n%s\n", cJSON_Print(jsonrequest_trigger_1));
	request_trigger_t* request_trigger_2 = request_trigger_parseFromJSON(jsonrequest_trigger_1);
	cJSON* jsonrequest_trigger_2 = request_trigger_convertToJSON(request_trigger_2);
	printf("repeating request_trigger:\n%s\n", cJSON_Print(jsonrequest_trigger_2));
}

int main() {
  test_request_trigger(1);
  test_request_trigger(0);

  printf("Hello world \n");
  return 0;
}

#endif // request_trigger_MAIN
#endif // request_trigger_TEST
