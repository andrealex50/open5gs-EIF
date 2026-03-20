#ifndef bsf_notification_TEST
#define bsf_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_notification.h"
bsf_notification_t* instantiate_bsf_notification(int include_optional);



bsf_notification_t* instantiate_bsf_notification(int include_optional) {
  bsf_notification_t* bsf_notification = NULL;
  if (include_optional) {
    bsf_notification = bsf_notification_create(
      "0",
      "0",
      "0",
      nbsf_management_bsf_notification__NF_SET,
      list_createList()
    );
  } else {
    bsf_notification = bsf_notification_create(
      "0",
      "0",
      "0",
      nbsf_management_bsf_notification__NF_SET,
      list_createList()
    );
  }

  return bsf_notification;
}


#ifdef bsf_notification_MAIN

void test_bsf_notification(int include_optional) {
    bsf_notification_t* bsf_notification_1 = instantiate_bsf_notification(include_optional);

	cJSON* jsonbsf_notification_1 = bsf_notification_convertToJSON(bsf_notification_1);
	printf("bsf_notification :\n%s\n", cJSON_Print(jsonbsf_notification_1));
	bsf_notification_t* bsf_notification_2 = bsf_notification_parseFromJSON(jsonbsf_notification_1);
	cJSON* jsonbsf_notification_2 = bsf_notification_convertToJSON(bsf_notification_2);
	printf("repeating bsf_notification:\n%s\n", cJSON_Print(jsonbsf_notification_2));
}

int main() {
  test_bsf_notification(1);
  test_bsf_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_notification_MAIN
#endif // bsf_notification_TEST
