#ifndef release_sm_context_request_TEST
#define release_sm_context_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define release_sm_context_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/release_sm_context_request.h"
release_sm_context_request_t* instantiate_release_sm_context_request(int include_optional);

#include "test_sm_context_release_data.c"


release_sm_context_request_t* instantiate_release_sm_context_request(int include_optional) {
  release_sm_context_request_t* release_sm_context_request = NULL;
  if (include_optional) {
    release_sm_context_request = release_sm_context_request_create(
       // false, not to have infinite recursion
      instantiate_sm_context_release_data(0),
      instantiate_binary_t("blah", 5)
    );
  } else {
    release_sm_context_request = release_sm_context_request_create(
      NULL,
      instantiate_binary_t("blah", 5)
    );
  }

  return release_sm_context_request;
}


#ifdef release_sm_context_request_MAIN

void test_release_sm_context_request(int include_optional) {
    release_sm_context_request_t* release_sm_context_request_1 = instantiate_release_sm_context_request(include_optional);

	cJSON* jsonrelease_sm_context_request_1 = release_sm_context_request_convertToJSON(release_sm_context_request_1);
	printf("release_sm_context_request :\n%s\n", cJSON_Print(jsonrelease_sm_context_request_1));
	release_sm_context_request_t* release_sm_context_request_2 = release_sm_context_request_parseFromJSON(jsonrelease_sm_context_request_1);
	cJSON* jsonrelease_sm_context_request_2 = release_sm_context_request_convertToJSON(release_sm_context_request_2);
	printf("repeating release_sm_context_request:\n%s\n", cJSON_Print(jsonrelease_sm_context_request_2));
}

int main() {
  test_release_sm_context_request(1);
  test_release_sm_context_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // release_sm_context_request_MAIN
#endif // release_sm_context_request_TEST
