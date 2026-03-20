#ifndef prose_subscription_data_TEST
#define prose_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_subscription_data.h"
prose_subscription_data_t* instantiate_prose_subscription_data(int include_optional);

#include "test_prose_service_auth.c"


prose_subscription_data_t* instantiate_prose_subscription_data(int include_optional) {
  prose_subscription_data_t* prose_subscription_data = NULL;
  if (include_optional) {
    prose_subscription_data = prose_subscription_data_create(
       // false, not to have infinite recursion
      instantiate_prose_service_auth(0),
      "a",
      list_createList()
    );
  } else {
    prose_subscription_data = prose_subscription_data_create(
      NULL,
      "a",
      list_createList()
    );
  }

  return prose_subscription_data;
}


#ifdef prose_subscription_data_MAIN

void test_prose_subscription_data(int include_optional) {
    prose_subscription_data_t* prose_subscription_data_1 = instantiate_prose_subscription_data(include_optional);

	cJSON* jsonprose_subscription_data_1 = prose_subscription_data_convertToJSON(prose_subscription_data_1);
	printf("prose_subscription_data :\n%s\n", cJSON_Print(jsonprose_subscription_data_1));
	prose_subscription_data_t* prose_subscription_data_2 = prose_subscription_data_parseFromJSON(jsonprose_subscription_data_1);
	cJSON* jsonprose_subscription_data_2 = prose_subscription_data_convertToJSON(prose_subscription_data_2);
	printf("repeating prose_subscription_data:\n%s\n", cJSON_Print(jsonprose_subscription_data_2));
}

int main() {
  test_prose_subscription_data(1);
  test_prose_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_subscription_data_MAIN
#endif // prose_subscription_data_TEST
