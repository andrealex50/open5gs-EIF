#ifndef app_descriptor_TEST
#define app_descriptor_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_descriptor_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_descriptor.h"
app_descriptor_t* instantiate_app_descriptor(int include_optional);



app_descriptor_t* instantiate_app_descriptor(int include_optional) {
  app_descriptor_t* app_descriptor = NULL;
  if (include_optional) {
    app_descriptor = app_descriptor_create(
      "0",
      "0"
    );
  } else {
    app_descriptor = app_descriptor_create(
      "0",
      "0"
    );
  }

  return app_descriptor;
}


#ifdef app_descriptor_MAIN

void test_app_descriptor(int include_optional) {
    app_descriptor_t* app_descriptor_1 = instantiate_app_descriptor(include_optional);

	cJSON* jsonapp_descriptor_1 = app_descriptor_convertToJSON(app_descriptor_1);
	printf("app_descriptor :\n%s\n", cJSON_Print(jsonapp_descriptor_1));
	app_descriptor_t* app_descriptor_2 = app_descriptor_parseFromJSON(jsonapp_descriptor_1);
	cJSON* jsonapp_descriptor_2 = app_descriptor_convertToJSON(app_descriptor_2);
	printf("repeating app_descriptor:\n%s\n", cJSON_Print(jsonapp_descriptor_2));
}

int main() {
  test_app_descriptor(1);
  test_app_descriptor(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_descriptor_MAIN
#endif // app_descriptor_TEST
