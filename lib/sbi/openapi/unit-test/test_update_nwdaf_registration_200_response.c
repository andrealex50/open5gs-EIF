#ifndef update_nwdaf_registration_200_response_TEST
#define update_nwdaf_registration_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_nwdaf_registration_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_nwdaf_registration_200_response.h"
update_nwdaf_registration_200_response_t* instantiate_update_nwdaf_registration_200_response(int include_optional);

#include "test_context_info.c"


update_nwdaf_registration_200_response_t* instantiate_update_nwdaf_registration_200_response(int include_optional) {
  update_nwdaf_registration_200_response_t* update_nwdaf_registration_200_response = NULL;
  if (include_optional) {
    update_nwdaf_registration_200_response = update_nwdaf_registration_200_response_create(
      "0",
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      "a",
      list_createList(),
      list_createList()
    );
  } else {
    update_nwdaf_registration_200_response = update_nwdaf_registration_200_response_create(
      "0",
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "a",
      list_createList(),
      list_createList()
    );
  }

  return update_nwdaf_registration_200_response;
}


#ifdef update_nwdaf_registration_200_response_MAIN

void test_update_nwdaf_registration_200_response(int include_optional) {
    update_nwdaf_registration_200_response_t* update_nwdaf_registration_200_response_1 = instantiate_update_nwdaf_registration_200_response(include_optional);

	cJSON* jsonupdate_nwdaf_registration_200_response_1 = update_nwdaf_registration_200_response_convertToJSON(update_nwdaf_registration_200_response_1);
	printf("update_nwdaf_registration_200_response :\n%s\n", cJSON_Print(jsonupdate_nwdaf_registration_200_response_1));
	update_nwdaf_registration_200_response_t* update_nwdaf_registration_200_response_2 = update_nwdaf_registration_200_response_parseFromJSON(jsonupdate_nwdaf_registration_200_response_1);
	cJSON* jsonupdate_nwdaf_registration_200_response_2 = update_nwdaf_registration_200_response_convertToJSON(update_nwdaf_registration_200_response_2);
	printf("repeating update_nwdaf_registration_200_response:\n%s\n", cJSON_Print(jsonupdate_nwdaf_registration_200_response_2));
}

int main() {
  test_update_nwdaf_registration_200_response(1);
  test_update_nwdaf_registration_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_nwdaf_registration_200_response_MAIN
#endif // update_nwdaf_registration_200_response_TEST
