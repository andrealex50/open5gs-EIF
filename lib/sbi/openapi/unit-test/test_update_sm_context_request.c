#ifndef update_sm_context_request_TEST
#define update_sm_context_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_sm_context_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_sm_context_request.h"
update_sm_context_request_t* instantiate_update_sm_context_request(int include_optional);

#include "test_sm_context_update_data.c"


update_sm_context_request_t* instantiate_update_sm_context_request(int include_optional) {
  update_sm_context_request_t* update_sm_context_request = NULL;
  if (include_optional) {
    update_sm_context_request = update_sm_context_request_create(
       // false, not to have infinite recursion
      instantiate_sm_context_update_data(0),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_sm_context_request = update_sm_context_request_create(
      NULL,
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  }

  return update_sm_context_request;
}


#ifdef update_sm_context_request_MAIN

void test_update_sm_context_request(int include_optional) {
    update_sm_context_request_t* update_sm_context_request_1 = instantiate_update_sm_context_request(include_optional);

	cJSON* jsonupdate_sm_context_request_1 = update_sm_context_request_convertToJSON(update_sm_context_request_1);
	printf("update_sm_context_request :\n%s\n", cJSON_Print(jsonupdate_sm_context_request_1));
	update_sm_context_request_t* update_sm_context_request_2 = update_sm_context_request_parseFromJSON(jsonupdate_sm_context_request_1);
	cJSON* jsonupdate_sm_context_request_2 = update_sm_context_request_convertToJSON(update_sm_context_request_2);
	printf("repeating update_sm_context_request:\n%s\n", cJSON_Print(jsonupdate_sm_context_request_2));
}

int main() {
  test_update_sm_context_request(1);
  test_update_sm_context_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_sm_context_request_MAIN
#endif // update_sm_context_request_TEST
