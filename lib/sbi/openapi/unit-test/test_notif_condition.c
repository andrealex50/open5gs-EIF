#ifndef notif_condition_TEST
#define notif_condition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define notif_condition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/notif_condition.h"
notif_condition_t* instantiate_notif_condition(int include_optional);



notif_condition_t* instantiate_notif_condition(int include_optional) {
  notif_condition_t* notif_condition = NULL;
  if (include_optional) {
    notif_condition = notif_condition_create(
      list_createList(),
      list_createList()
    );
  } else {
    notif_condition = notif_condition_create(
      list_createList(),
      list_createList()
    );
  }

  return notif_condition;
}


#ifdef notif_condition_MAIN

void test_notif_condition(int include_optional) {
    notif_condition_t* notif_condition_1 = instantiate_notif_condition(include_optional);

	cJSON* jsonnotif_condition_1 = notif_condition_convertToJSON(notif_condition_1);
	printf("notif_condition :\n%s\n", cJSON_Print(jsonnotif_condition_1));
	notif_condition_t* notif_condition_2 = notif_condition_parseFromJSON(jsonnotif_condition_1);
	cJSON* jsonnotif_condition_2 = notif_condition_convertToJSON(notif_condition_2);
	printf("repeating notif_condition:\n%s\n", cJSON_Print(jsonnotif_condition_2));
}

int main() {
  test_notif_condition(1);
  test_notif_condition(0);

  printf("Hello world \n");
  return 0;
}

#endif // notif_condition_MAIN
#endif // notif_condition_TEST
