#ifndef pfd_change_notification_TEST
#define pfd_change_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pfd_change_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pfd_change_notification.h"
pfd_change_notification_t* instantiate_pfd_change_notification(int include_optional);



pfd_change_notification_t* instantiate_pfd_change_notification(int include_optional) {
  pfd_change_notification_t* pfd_change_notification = NULL;
  if (include_optional) {
    pfd_change_notification = pfd_change_notification_create(
      "0",
      1,
      1,
      list_createList()
    );
  } else {
    pfd_change_notification = pfd_change_notification_create(
      "0",
      1,
      1,
      list_createList()
    );
  }

  return pfd_change_notification;
}


#ifdef pfd_change_notification_MAIN

void test_pfd_change_notification(int include_optional) {
    pfd_change_notification_t* pfd_change_notification_1 = instantiate_pfd_change_notification(include_optional);

	cJSON* jsonpfd_change_notification_1 = pfd_change_notification_convertToJSON(pfd_change_notification_1);
	printf("pfd_change_notification :\n%s\n", cJSON_Print(jsonpfd_change_notification_1));
	pfd_change_notification_t* pfd_change_notification_2 = pfd_change_notification_parseFromJSON(jsonpfd_change_notification_1);
	cJSON* jsonpfd_change_notification_2 = pfd_change_notification_convertToJSON(pfd_change_notification_2);
	printf("repeating pfd_change_notification:\n%s\n", cJSON_Print(jsonpfd_change_notification_2));
}

int main() {
  test_pfd_change_notification(1);
  test_pfd_change_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // pfd_change_notification_MAIN
#endif // pfd_change_notification_TEST
