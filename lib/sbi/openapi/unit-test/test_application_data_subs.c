#ifndef application_data_subs_TEST
#define application_data_subs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define application_data_subs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/application_data_subs.h"
application_data_subs_t* instantiate_application_data_subs(int include_optional);



application_data_subs_t* instantiate_application_data_subs(int include_optional) {
  application_data_subs_t* application_data_subs = NULL;
  if (include_optional) {
    application_data_subs = application_data_subs_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      1,
      list_createList(),
      "a",
      list_createList()
    );
  } else {
    application_data_subs = application_data_subs_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      1,
      list_createList(),
      "a",
      list_createList()
    );
  }

  return application_data_subs;
}


#ifdef application_data_subs_MAIN

void test_application_data_subs(int include_optional) {
    application_data_subs_t* application_data_subs_1 = instantiate_application_data_subs(include_optional);

	cJSON* jsonapplication_data_subs_1 = application_data_subs_convertToJSON(application_data_subs_1);
	printf("application_data_subs :\n%s\n", cJSON_Print(jsonapplication_data_subs_1));
	application_data_subs_t* application_data_subs_2 = application_data_subs_parseFromJSON(jsonapplication_data_subs_1);
	cJSON* jsonapplication_data_subs_2 = application_data_subs_convertToJSON(application_data_subs_2);
	printf("repeating application_data_subs:\n%s\n", cJSON_Print(jsonapplication_data_subs_2));
}

int main() {
  test_application_data_subs(1);
  test_application_data_subs(0);

  printf("Hello world \n");
  return 0;
}

#endif // application_data_subs_MAIN
#endif // application_data_subs_TEST
