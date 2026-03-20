#ifndef app_session_context_TEST
#define app_session_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_session_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_session_context.h"
app_session_context_t* instantiate_app_session_context(int include_optional);

#include "test_app_session_context_req_data.c"
#include "test_app_session_context_resp_data.c"
#include "test_events_notification.c"


app_session_context_t* instantiate_app_session_context(int include_optional) {
  app_session_context_t* app_session_context = NULL;
  if (include_optional) {
    app_session_context = app_session_context_create(
       // false, not to have infinite recursion
      instantiate_app_session_context_req_data(0),
       // false, not to have infinite recursion
      instantiate_app_session_context_resp_data(0),
       // false, not to have infinite recursion
      instantiate_events_notification(0)
    );
  } else {
    app_session_context = app_session_context_create(
      NULL,
      NULL,
      NULL
    );
  }

  return app_session_context;
}


#ifdef app_session_context_MAIN

void test_app_session_context(int include_optional) {
    app_session_context_t* app_session_context_1 = instantiate_app_session_context(include_optional);

	cJSON* jsonapp_session_context_1 = app_session_context_convertToJSON(app_session_context_1);
	printf("app_session_context :\n%s\n", cJSON_Print(jsonapp_session_context_1));
	app_session_context_t* app_session_context_2 = app_session_context_parseFromJSON(jsonapp_session_context_1);
	cJSON* jsonapp_session_context_2 = app_session_context_convertToJSON(app_session_context_2);
	printf("repeating app_session_context:\n%s\n", cJSON_Print(jsonapp_session_context_2));
}

int main() {
  test_app_session_context(1);
  test_app_session_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_session_context_MAIN
#endif // app_session_context_TEST
