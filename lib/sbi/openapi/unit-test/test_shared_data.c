#ifndef shared_data_TEST
#define shared_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shared_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shared_data.h"
shared_data_t* instantiate_shared_data(int include_optional);

#include "test_access_and_mobility_subscription_data_1.c"
#include "test_sms_subscription_data_1.c"
#include "test_sms_management_subscription_data_1.c"
#include "test_trace_data.c"
#include "test_session_management_subscription_data_1.c"
#include "test_ecs_addr_config_info_1.c"


shared_data_t* instantiate_shared_data(int include_optional) {
  shared_data_t* shared_data = NULL;
  if (include_optional) {
    shared_data = shared_data_create(
      "a",
       // false, not to have infinite recursion
      instantiate_access_and_mobility_subscription_data_1(0),
       // false, not to have infinite recursion
      instantiate_sms_subscription_data_1(0),
       // false, not to have infinite recursion
      instantiate_sms_management_subscription_data_1(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_session_management_subscription_data_1(0),
       // false, not to have infinite recursion
      instantiate_ecs_addr_config_info_1(0)
    );
  } else {
    shared_data = shared_data_create(
      "a",
      NULL,
      NULL,
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL
    );
  }

  return shared_data;
}


#ifdef shared_data_MAIN

void test_shared_data(int include_optional) {
    shared_data_t* shared_data_1 = instantiate_shared_data(include_optional);

	cJSON* jsonshared_data_1 = shared_data_convertToJSON(shared_data_1);
	printf("shared_data :\n%s\n", cJSON_Print(jsonshared_data_1));
	shared_data_t* shared_data_2 = shared_data_parseFromJSON(jsonshared_data_1);
	cJSON* jsonshared_data_2 = shared_data_convertToJSON(shared_data_2);
	printf("repeating shared_data:\n%s\n", cJSON_Print(jsonshared_data_2));
}

int main() {
  test_shared_data(1);
  test_shared_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // shared_data_MAIN
#endif // shared_data_TEST
