#ifndef subscribed_snssai_TEST
#define subscribed_snssai_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscribed_snssai_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscribed_snssai.h"
subscribed_snssai_t* instantiate_subscribed_snssai(int include_optional);

#include "test_snssai.c"


subscribed_snssai_t* instantiate_subscribed_snssai(int include_optional) {
  subscribed_snssai_t* subscribed_snssai = NULL;
  if (include_optional) {
    subscribed_snssai = subscribed_snssai_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      1,
      list_createList()
    );
  } else {
    subscribed_snssai = subscribed_snssai_create(
      NULL,
      1,
      list_createList()
    );
  }

  return subscribed_snssai;
}


#ifdef subscribed_snssai_MAIN

void test_subscribed_snssai(int include_optional) {
    subscribed_snssai_t* subscribed_snssai_1 = instantiate_subscribed_snssai(include_optional);

	cJSON* jsonsubscribed_snssai_1 = subscribed_snssai_convertToJSON(subscribed_snssai_1);
	printf("subscribed_snssai :\n%s\n", cJSON_Print(jsonsubscribed_snssai_1));
	subscribed_snssai_t* subscribed_snssai_2 = subscribed_snssai_parseFromJSON(jsonsubscribed_snssai_1);
	cJSON* jsonsubscribed_snssai_2 = subscribed_snssai_convertToJSON(subscribed_snssai_2);
	printf("repeating subscribed_snssai:\n%s\n", cJSON_Print(jsonsubscribed_snssai_2));
}

int main() {
  test_subscribed_snssai(1);
  test_subscribed_snssai(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscribed_snssai_MAIN
#endif // subscribed_snssai_TEST
