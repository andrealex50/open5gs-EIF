#ifndef request_type_TEST
#define request_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define request_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/request_type.h"
request_type_t* instantiate_request_type(int include_optional);



request_type_t* instantiate_request_type(int include_optional) {
  request_type_t* request_type = NULL;
  if (include_optional) {
    request_type = request_type_create(
    );
  } else {
    request_type = request_type_create(
    );
  }

  return request_type;
}


#ifdef request_type_MAIN

void test_request_type(int include_optional) {
    request_type_t* request_type_1 = instantiate_request_type(include_optional);

	cJSON* jsonrequest_type_1 = request_type_convertToJSON(request_type_1);
	printf("request_type :\n%s\n", cJSON_Print(jsonrequest_type_1));
	request_type_t* request_type_2 = request_type_parseFromJSON(jsonrequest_type_1);
	cJSON* jsonrequest_type_2 = request_type_convertToJSON(request_type_2);
	printf("repeating request_type:\n%s\n", cJSON_Print(jsonrequest_type_2));
}

int main() {
  test_request_type(1);
  test_request_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // request_type_MAIN
#endif // request_type_TEST
