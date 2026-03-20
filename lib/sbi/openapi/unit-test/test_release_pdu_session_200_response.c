#ifndef release_pdu_session_200_response_TEST
#define release_pdu_session_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define release_pdu_session_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/release_pdu_session_200_response.h"
release_pdu_session_200_response_t* instantiate_release_pdu_session_200_response(int include_optional);

#include "test_released_data.c"


release_pdu_session_200_response_t* instantiate_release_pdu_session_200_response(int include_optional) {
  release_pdu_session_200_response_t* release_pdu_session_200_response = NULL;
  if (include_optional) {
    release_pdu_session_200_response = release_pdu_session_200_response_create(
       // false, not to have infinite recursion
      instantiate_released_data(0),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  } else {
    release_pdu_session_200_response = release_pdu_session_200_response_create(
      NULL,
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  }

  return release_pdu_session_200_response;
}


#ifdef release_pdu_session_200_response_MAIN

void test_release_pdu_session_200_response(int include_optional) {
    release_pdu_session_200_response_t* release_pdu_session_200_response_1 = instantiate_release_pdu_session_200_response(include_optional);

	cJSON* jsonrelease_pdu_session_200_response_1 = release_pdu_session_200_response_convertToJSON(release_pdu_session_200_response_1);
	printf("release_pdu_session_200_response :\n%s\n", cJSON_Print(jsonrelease_pdu_session_200_response_1));
	release_pdu_session_200_response_t* release_pdu_session_200_response_2 = release_pdu_session_200_response_parseFromJSON(jsonrelease_pdu_session_200_response_1);
	cJSON* jsonrelease_pdu_session_200_response_2 = release_pdu_session_200_response_convertToJSON(release_pdu_session_200_response_2);
	printf("repeating release_pdu_session_200_response:\n%s\n", cJSON_Print(jsonrelease_pdu_session_200_response_2));
}

int main() {
  test_release_pdu_session_200_response(1);
  test_release_pdu_session_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // release_pdu_session_200_response_MAIN
#endif // release_pdu_session_200_response_TEST
