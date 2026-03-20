#ifndef app_port_id_TEST
#define app_port_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_port_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_port_id.h"
app_port_id_t* instantiate_app_port_id(int include_optional);



app_port_id_t* instantiate_app_port_id(int include_optional) {
  app_port_id_t* app_port_id = NULL;
  if (include_optional) {
    app_port_id = app_port_id_create(
      0,
      0
    );
  } else {
    app_port_id = app_port_id_create(
      0,
      0
    );
  }

  return app_port_id;
}


#ifdef app_port_id_MAIN

void test_app_port_id(int include_optional) {
    app_port_id_t* app_port_id_1 = instantiate_app_port_id(include_optional);

	cJSON* jsonapp_port_id_1 = app_port_id_convertToJSON(app_port_id_1);
	printf("app_port_id :\n%s\n", cJSON_Print(jsonapp_port_id_1));
	app_port_id_t* app_port_id_2 = app_port_id_parseFromJSON(jsonapp_port_id_1);
	cJSON* jsonapp_port_id_2 = app_port_id_convertToJSON(app_port_id_2);
	printf("repeating app_port_id:\n%s\n", cJSON_Print(jsonapp_port_id_2));
}

int main() {
  test_app_port_id(1);
  test_app_port_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_port_id_MAIN
#endif // app_port_id_TEST
