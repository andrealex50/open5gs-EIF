#ifndef app_detection_info_TEST
#define app_detection_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_detection_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_detection_info.h"
app_detection_info_t* instantiate_app_detection_info(int include_optional);



app_detection_info_t* instantiate_app_detection_info(int include_optional) {
  app_detection_info_t* app_detection_info = NULL;
  if (include_optional) {
    app_detection_info = app_detection_info_create(
      "0",
      "0",
      list_createList()
    );
  } else {
    app_detection_info = app_detection_info_create(
      "0",
      "0",
      list_createList()
    );
  }

  return app_detection_info;
}


#ifdef app_detection_info_MAIN

void test_app_detection_info(int include_optional) {
    app_detection_info_t* app_detection_info_1 = instantiate_app_detection_info(include_optional);

	cJSON* jsonapp_detection_info_1 = app_detection_info_convertToJSON(app_detection_info_1);
	printf("app_detection_info :\n%s\n", cJSON_Print(jsonapp_detection_info_1));
	app_detection_info_t* app_detection_info_2 = app_detection_info_parseFromJSON(jsonapp_detection_info_1);
	cJSON* jsonapp_detection_info_2 = app_detection_info_convertToJSON(app_detection_info_2);
	printf("repeating app_detection_info:\n%s\n", cJSON_Print(jsonapp_detection_info_2));
}

int main() {
  test_app_detection_info(1);
  test_app_detection_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_detection_info_MAIN
#endif // app_detection_info_TEST
