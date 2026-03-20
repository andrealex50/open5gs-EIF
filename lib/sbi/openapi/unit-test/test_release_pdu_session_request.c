#ifndef release_pdu_session_request_TEST
#define release_pdu_session_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define release_pdu_session_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/release_pdu_session_request.h"
release_pdu_session_request_t* instantiate_release_pdu_session_request(int include_optional);

#include "test_release_data.c"


release_pdu_session_request_t* instantiate_release_pdu_session_request(int include_optional) {
  release_pdu_session_request_t* release_pdu_session_request = NULL;
  if (include_optional) {
    release_pdu_session_request = release_pdu_session_request_create(
       // false, not to have infinite recursion
      instantiate_release_data(0),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  } else {
    release_pdu_session_request = release_pdu_session_request_create(
      NULL,
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  }

  return release_pdu_session_request;
}


#ifdef release_pdu_session_request_MAIN

void test_release_pdu_session_request(int include_optional) {
    release_pdu_session_request_t* release_pdu_session_request_1 = instantiate_release_pdu_session_request(include_optional);

	cJSON* jsonrelease_pdu_session_request_1 = release_pdu_session_request_convertToJSON(release_pdu_session_request_1);
	printf("release_pdu_session_request :\n%s\n", cJSON_Print(jsonrelease_pdu_session_request_1));
	release_pdu_session_request_t* release_pdu_session_request_2 = release_pdu_session_request_parseFromJSON(jsonrelease_pdu_session_request_1);
	cJSON* jsonrelease_pdu_session_request_2 = release_pdu_session_request_convertToJSON(release_pdu_session_request_2);
	printf("repeating release_pdu_session_request:\n%s\n", cJSON_Print(jsonrelease_pdu_session_request_2));
}

int main() {
  test_release_pdu_session_request(1);
  test_release_pdu_session_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // release_pdu_session_request_MAIN
#endif // release_pdu_session_request_TEST
