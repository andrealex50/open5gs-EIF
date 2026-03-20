#ifndef update_sm_context_200_response_TEST
#define update_sm_context_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_sm_context_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_sm_context_200_response.h"
update_sm_context_200_response_t* instantiate_update_sm_context_200_response(int include_optional);

#include "test_sm_context_updated_data.c"


update_sm_context_200_response_t* instantiate_update_sm_context_200_response(int include_optional) {
  update_sm_context_200_response_t* update_sm_context_200_response = NULL;
  if (include_optional) {
    update_sm_context_200_response = update_sm_context_200_response_create(
       // false, not to have infinite recursion
      instantiate_sm_context_updated_data(0),
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  } else {
    update_sm_context_200_response = update_sm_context_200_response_create(
      NULL,
      instantiate_binary_t("blah", 5),
      instantiate_binary_t("blah", 5)
    );
  }

  return update_sm_context_200_response;
}


#ifdef update_sm_context_200_response_MAIN

void test_update_sm_context_200_response(int include_optional) {
    update_sm_context_200_response_t* update_sm_context_200_response_1 = instantiate_update_sm_context_200_response(include_optional);

	cJSON* jsonupdate_sm_context_200_response_1 = update_sm_context_200_response_convertToJSON(update_sm_context_200_response_1);
	printf("update_sm_context_200_response :\n%s\n", cJSON_Print(jsonupdate_sm_context_200_response_1));
	update_sm_context_200_response_t* update_sm_context_200_response_2 = update_sm_context_200_response_parseFromJSON(jsonupdate_sm_context_200_response_1);
	cJSON* jsonupdate_sm_context_200_response_2 = update_sm_context_200_response_convertToJSON(update_sm_context_200_response_2);
	printf("repeating update_sm_context_200_response:\n%s\n", cJSON_Print(jsonupdate_sm_context_200_response_2));
}

int main() {
  test_update_sm_context_200_response(1);
  test_update_sm_context_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_sm_context_200_response_MAIN
#endif // update_sm_context_200_response_TEST
