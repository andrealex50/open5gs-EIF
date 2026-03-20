#ifndef app_detection_notif_type_TEST
#define app_detection_notif_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_detection_notif_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_detection_notif_type.h"
app_detection_notif_type_t* instantiate_app_detection_notif_type(int include_optional);



app_detection_notif_type_t* instantiate_app_detection_notif_type(int include_optional) {
  app_detection_notif_type_t* app_detection_notif_type = NULL;
  if (include_optional) {
    app_detection_notif_type = app_detection_notif_type_create(
    );
  } else {
    app_detection_notif_type = app_detection_notif_type_create(
    );
  }

  return app_detection_notif_type;
}


#ifdef app_detection_notif_type_MAIN

void test_app_detection_notif_type(int include_optional) {
    app_detection_notif_type_t* app_detection_notif_type_1 = instantiate_app_detection_notif_type(include_optional);

	cJSON* jsonapp_detection_notif_type_1 = app_detection_notif_type_convertToJSON(app_detection_notif_type_1);
	printf("app_detection_notif_type :\n%s\n", cJSON_Print(jsonapp_detection_notif_type_1));
	app_detection_notif_type_t* app_detection_notif_type_2 = app_detection_notif_type_parseFromJSON(jsonapp_detection_notif_type_1);
	cJSON* jsonapp_detection_notif_type_2 = app_detection_notif_type_convertToJSON(app_detection_notif_type_2);
	printf("repeating app_detection_notif_type:\n%s\n", cJSON_Print(jsonapp_detection_notif_type_2));
}

int main() {
  test_app_detection_notif_type(1);
  test_app_detection_notif_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_detection_notif_type_MAIN
#endif // app_detection_notif_type_TEST
