#ifndef app_session_context_update_data_patch_TEST
#define app_session_context_update_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_session_context_update_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_session_context_update_data_patch.h"
app_session_context_update_data_patch_t* instantiate_app_session_context_update_data_patch(int include_optional);

#include "test_app_session_context_update_data.c"


app_session_context_update_data_patch_t* instantiate_app_session_context_update_data_patch(int include_optional) {
  app_session_context_update_data_patch_t* app_session_context_update_data_patch = NULL;
  if (include_optional) {
    app_session_context_update_data_patch = app_session_context_update_data_patch_create(
       // false, not to have infinite recursion
      instantiate_app_session_context_update_data(0)
    );
  } else {
    app_session_context_update_data_patch = app_session_context_update_data_patch_create(
      NULL
    );
  }

  return app_session_context_update_data_patch;
}


#ifdef app_session_context_update_data_patch_MAIN

void test_app_session_context_update_data_patch(int include_optional) {
    app_session_context_update_data_patch_t* app_session_context_update_data_patch_1 = instantiate_app_session_context_update_data_patch(include_optional);

	cJSON* jsonapp_session_context_update_data_patch_1 = app_session_context_update_data_patch_convertToJSON(app_session_context_update_data_patch_1);
	printf("app_session_context_update_data_patch :\n%s\n", cJSON_Print(jsonapp_session_context_update_data_patch_1));
	app_session_context_update_data_patch_t* app_session_context_update_data_patch_2 = app_session_context_update_data_patch_parseFromJSON(jsonapp_session_context_update_data_patch_1);
	cJSON* jsonapp_session_context_update_data_patch_2 = app_session_context_update_data_patch_convertToJSON(app_session_context_update_data_patch_2);
	printf("repeating app_session_context_update_data_patch:\n%s\n", cJSON_Print(jsonapp_session_context_update_data_patch_2));
}

int main() {
  test_app_session_context_update_data_patch(1);
  test_app_session_context_update_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_session_context_update_data_patch_MAIN
#endif // app_session_context_update_data_patch_TEST
