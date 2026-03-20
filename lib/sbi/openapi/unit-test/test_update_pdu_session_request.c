#ifndef update_pdu_session_request_TEST
#define update_pdu_session_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_pdu_session_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_pdu_session_request.h"
update_pdu_session_request_t* instantiate_update_pdu_session_request(int include_optional);

#include "test_hsmf_update_data.c"


update_pdu_session_request_t* instantiate_update_pdu_session_request(int include_optional) {
  update_pdu_session_request_t* update_pdu_session_request = NULL;
  if (include_optional) {
    update_pdu_session_request = update_pdu_session_request_create(
       // false, not to have infinite recursion
      instantiate_hsmf_update_data(0),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_pdu_session_request = update_pdu_session_request_create(
      NULL,
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  }

  return update_pdu_session_request;
}


#ifdef update_pdu_session_request_MAIN

void test_update_pdu_session_request(int include_optional) {
    update_pdu_session_request_t* update_pdu_session_request_1 = instantiate_update_pdu_session_request(include_optional);

	cJSON* jsonupdate_pdu_session_request_1 = update_pdu_session_request_convertToJSON(update_pdu_session_request_1);
	printf("update_pdu_session_request :\n%s\n", cJSON_Print(jsonupdate_pdu_session_request_1));
	update_pdu_session_request_t* update_pdu_session_request_2 = update_pdu_session_request_parseFromJSON(jsonupdate_pdu_session_request_1);
	cJSON* jsonupdate_pdu_session_request_2 = update_pdu_session_request_convertToJSON(update_pdu_session_request_2);
	printf("repeating update_pdu_session_request:\n%s\n", cJSON_Print(jsonupdate_pdu_session_request_2));
}

int main() {
  test_update_pdu_session_request(1);
  test_update_pdu_session_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_pdu_session_request_MAIN
#endif // update_pdu_session_request_TEST
