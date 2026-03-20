#ifndef app_descriptor_1_TEST
#define app_descriptor_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_descriptor_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_descriptor_1.h"
app_descriptor_1_t* instantiate_app_descriptor_1(int include_optional);



app_descriptor_1_t* instantiate_app_descriptor_1(int include_optional) {
  app_descriptor_1_t* app_descriptor_1 = NULL;
  if (include_optional) {
    app_descriptor_1 = app_descriptor_1_create(
      "0",
      list_createList()
    );
  } else {
    app_descriptor_1 = app_descriptor_1_create(
      "0",
      list_createList()
    );
  }

  return app_descriptor_1;
}


#ifdef app_descriptor_1_MAIN

void test_app_descriptor_1(int include_optional) {
    app_descriptor_1_t* app_descriptor_1_1 = instantiate_app_descriptor_1(include_optional);

	cJSON* jsonapp_descriptor_1_1 = app_descriptor_1_convertToJSON(app_descriptor_1_1);
	printf("app_descriptor_1 :\n%s\n", cJSON_Print(jsonapp_descriptor_1_1));
	app_descriptor_1_t* app_descriptor_1_2 = app_descriptor_1_parseFromJSON(jsonapp_descriptor_1_1);
	cJSON* jsonapp_descriptor_1_2 = app_descriptor_1_convertToJSON(app_descriptor_1_2);
	printf("repeating app_descriptor_1:\n%s\n", cJSON_Print(jsonapp_descriptor_1_2));
}

int main() {
  test_app_descriptor_1(1);
  test_app_descriptor_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_descriptor_1_MAIN
#endif // app_descriptor_1_TEST
