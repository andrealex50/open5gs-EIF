#ifndef request_indication_TEST
#define request_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define request_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/request_indication.h"
request_indication_t* instantiate_request_indication(int include_optional);



request_indication_t* instantiate_request_indication(int include_optional) {
  request_indication_t* request_indication = NULL;
  if (include_optional) {
    request_indication = request_indication_create(
    );
  } else {
    request_indication = request_indication_create(
    );
  }

  return request_indication;
}


#ifdef request_indication_MAIN

void test_request_indication(int include_optional) {
    request_indication_t* request_indication_1 = instantiate_request_indication(include_optional);

	cJSON* jsonrequest_indication_1 = request_indication_convertToJSON(request_indication_1);
	printf("request_indication :\n%s\n", cJSON_Print(jsonrequest_indication_1));
	request_indication_t* request_indication_2 = request_indication_parseFromJSON(jsonrequest_indication_1);
	cJSON* jsonrequest_indication_2 = request_indication_convertToJSON(request_indication_2);
	printf("repeating request_indication:\n%s\n", cJSON_Print(jsonrequest_indication_2));
}

int main() {
  test_request_indication(1);
  test_request_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // request_indication_MAIN
#endif // request_indication_TEST
