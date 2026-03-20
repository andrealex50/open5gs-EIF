#ifndef subscribed_default_qos_1_TEST
#define subscribed_default_qos_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscribed_default_qos_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscribed_default_qos_1.h"
subscribed_default_qos_1_t* instantiate_subscribed_default_qos_1(int include_optional);

#include "test_arp_1.c"


subscribed_default_qos_1_t* instantiate_subscribed_default_qos_1(int include_optional) {
  subscribed_default_qos_1_t* subscribed_default_qos_1 = NULL;
  if (include_optional) {
    subscribed_default_qos_1 = subscribed_default_qos_1_create(
      0,
       // false, not to have infinite recursion
      instantiate_arp_1(0),
      1
    );
  } else {
    subscribed_default_qos_1 = subscribed_default_qos_1_create(
      0,
      NULL,
      1
    );
  }

  return subscribed_default_qos_1;
}


#ifdef subscribed_default_qos_1_MAIN

void test_subscribed_default_qos_1(int include_optional) {
    subscribed_default_qos_1_t* subscribed_default_qos_1_1 = instantiate_subscribed_default_qos_1(include_optional);

	cJSON* jsonsubscribed_default_qos_1_1 = subscribed_default_qos_1_convertToJSON(subscribed_default_qos_1_1);
	printf("subscribed_default_qos_1 :\n%s\n", cJSON_Print(jsonsubscribed_default_qos_1_1));
	subscribed_default_qos_1_t* subscribed_default_qos_1_2 = subscribed_default_qos_1_parseFromJSON(jsonsubscribed_default_qos_1_1);
	cJSON* jsonsubscribed_default_qos_1_2 = subscribed_default_qos_1_convertToJSON(subscribed_default_qos_1_2);
	printf("repeating subscribed_default_qos_1:\n%s\n", cJSON_Print(jsonsubscribed_default_qos_1_2));
}

int main() {
  test_subscribed_default_qos_1(1);
  test_subscribed_default_qos_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscribed_default_qos_1_MAIN
#endif // subscribed_default_qos_1_TEST
