#ifndef pcscf_restoration_notification_TEST
#define pcscf_restoration_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcscf_restoration_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcscf_restoration_notification.h"
pcscf_restoration_notification_t* instantiate_pcscf_restoration_notification(int include_optional);

#include "test_pcscf_address.c"


pcscf_restoration_notification_t* instantiate_pcscf_restoration_notification(int include_optional) {
  pcscf_restoration_notification_t* pcscf_restoration_notification = NULL;
  if (include_optional) {
    pcscf_restoration_notification = pcscf_restoration_notification_create(
      "a",
       // false, not to have infinite recursion
      instantiate_pcscf_address(0)
    );
  } else {
    pcscf_restoration_notification = pcscf_restoration_notification_create(
      "a",
      NULL
    );
  }

  return pcscf_restoration_notification;
}


#ifdef pcscf_restoration_notification_MAIN

void test_pcscf_restoration_notification(int include_optional) {
    pcscf_restoration_notification_t* pcscf_restoration_notification_1 = instantiate_pcscf_restoration_notification(include_optional);

	cJSON* jsonpcscf_restoration_notification_1 = pcscf_restoration_notification_convertToJSON(pcscf_restoration_notification_1);
	printf("pcscf_restoration_notification :\n%s\n", cJSON_Print(jsonpcscf_restoration_notification_1));
	pcscf_restoration_notification_t* pcscf_restoration_notification_2 = pcscf_restoration_notification_parseFromJSON(jsonpcscf_restoration_notification_1);
	cJSON* jsonpcscf_restoration_notification_2 = pcscf_restoration_notification_convertToJSON(pcscf_restoration_notification_2);
	printf("repeating pcscf_restoration_notification:\n%s\n", cJSON_Print(jsonpcscf_restoration_notification_2));
}

int main() {
  test_pcscf_restoration_notification(1);
  test_pcscf_restoration_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcscf_restoration_notification_MAIN
#endif // pcscf_restoration_notification_TEST
