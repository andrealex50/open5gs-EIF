#ifndef data_change_notify_TEST
#define data_change_notify_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_change_notify_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_change_notify.h"
data_change_notify_t* instantiate_data_change_notify(int include_optional);

#include "test_sdm_subscription_1.c"


data_change_notify_t* instantiate_data_change_notify(int include_optional) {
  data_change_notify_t* data_change_notify = NULL;
  if (include_optional) {
    data_change_notify = data_change_notify_create(
      list_createList(),
      "a",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_sdm_subscription_1(0),
      list_createList(),
      list_createList()
    );
  } else {
    data_change_notify = data_change_notify_create(
      list_createList(),
      "a",
      list_createList(),
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return data_change_notify;
}


#ifdef data_change_notify_MAIN

void test_data_change_notify(int include_optional) {
    data_change_notify_t* data_change_notify_1 = instantiate_data_change_notify(include_optional);

	cJSON* jsondata_change_notify_1 = data_change_notify_convertToJSON(data_change_notify_1);
	printf("data_change_notify :\n%s\n", cJSON_Print(jsondata_change_notify_1));
	data_change_notify_t* data_change_notify_2 = data_change_notify_parseFromJSON(jsondata_change_notify_1);
	cJSON* jsondata_change_notify_2 = data_change_notify_convertToJSON(data_change_notify_2);
	printf("repeating data_change_notify:\n%s\n", cJSON_Print(jsondata_change_notify_2));
}

int main() {
  test_data_change_notify(1);
  test_data_change_notify(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_change_notify_MAIN
#endif // data_change_notify_TEST
