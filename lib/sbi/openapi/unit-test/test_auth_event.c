#ifndef auth_event_TEST
#define auth_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define auth_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/auth_event.h"
auth_event_t* instantiate_auth_event(int include_optional);



auth_event_t* instantiate_auth_event(int include_optional) {
  auth_event_t* auth_event = NULL;
  if (include_optional) {
    auth_event = auth_event_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_auth_event__5G_AKA,
      "a",
      1,
      "0",
      list_createList()
    );
  } else {
    auth_event = auth_event_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_auth_event__5G_AKA,
      "a",
      1,
      "0",
      list_createList()
    );
  }

  return auth_event;
}


#ifdef auth_event_MAIN

void test_auth_event(int include_optional) {
    auth_event_t* auth_event_1 = instantiate_auth_event(include_optional);

	cJSON* jsonauth_event_1 = auth_event_convertToJSON(auth_event_1);
	printf("auth_event :\n%s\n", cJSON_Print(jsonauth_event_1));
	auth_event_t* auth_event_2 = auth_event_parseFromJSON(jsonauth_event_1);
	cJSON* jsonauth_event_2 = auth_event_convertToJSON(auth_event_2);
	printf("repeating auth_event:\n%s\n", cJSON_Print(jsonauth_event_2));
}

int main() {
  test_auth_event(1);
  test_auth_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // auth_event_MAIN
#endif // auth_event_TEST
