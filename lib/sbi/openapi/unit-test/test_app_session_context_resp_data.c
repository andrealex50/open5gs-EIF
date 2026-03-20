#ifndef app_session_context_resp_data_TEST
#define app_session_context_resp_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_session_context_resp_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_session_context_resp_data.h"
app_session_context_resp_data_t* instantiate_app_session_context_resp_data(int include_optional);



app_session_context_resp_data_t* instantiate_app_session_context_resp_data(int include_optional) {
  app_session_context_resp_data_t* app_session_context_resp_data = NULL;
  if (include_optional) {
    app_session_context_resp_data = app_session_context_resp_data_create(
      npcf_policyauthorization_service_api_app_session_context_resp_data__TP_NOT_KNOWN,
      list_createList(),
      "a"
    );
  } else {
    app_session_context_resp_data = app_session_context_resp_data_create(
      npcf_policyauthorization_service_api_app_session_context_resp_data__TP_NOT_KNOWN,
      list_createList(),
      "a"
    );
  }

  return app_session_context_resp_data;
}


#ifdef app_session_context_resp_data_MAIN

void test_app_session_context_resp_data(int include_optional) {
    app_session_context_resp_data_t* app_session_context_resp_data_1 = instantiate_app_session_context_resp_data(include_optional);

	cJSON* jsonapp_session_context_resp_data_1 = app_session_context_resp_data_convertToJSON(app_session_context_resp_data_1);
	printf("app_session_context_resp_data :\n%s\n", cJSON_Print(jsonapp_session_context_resp_data_1));
	app_session_context_resp_data_t* app_session_context_resp_data_2 = app_session_context_resp_data_parseFromJSON(jsonapp_session_context_resp_data_1);
	cJSON* jsonapp_session_context_resp_data_2 = app_session_context_resp_data_convertToJSON(app_session_context_resp_data_2);
	printf("repeating app_session_context_resp_data:\n%s\n", cJSON_Print(jsonapp_session_context_resp_data_2));
}

int main() {
  test_app_session_context_resp_data(1);
  test_app_session_context_resp_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_session_context_resp_data_MAIN
#endif // app_session_context_resp_data_TEST
