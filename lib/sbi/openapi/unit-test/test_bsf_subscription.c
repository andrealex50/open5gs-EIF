#ifndef bsf_subscription_TEST
#define bsf_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_subscription.h"
bsf_subscription_t* instantiate_bsf_subscription(int include_optional);

#include "test_snssai_dnn_pair.c"


bsf_subscription_t* instantiate_bsf_subscription(int include_optional) {
  bsf_subscription_t* bsf_subscription = NULL;
  if (include_optional) {
    bsf_subscription = bsf_subscription_create(
      list_createList(),
      "0",
      "0",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_snssai_dnn_pair(0),
      list_createList(),
      "a"
    );
  } else {
    bsf_subscription = bsf_subscription_create(
      list_createList(),
      "0",
      "0",
      "a",
      "a",
      NULL,
      list_createList(),
      "a"
    );
  }

  return bsf_subscription;
}


#ifdef bsf_subscription_MAIN

void test_bsf_subscription(int include_optional) {
    bsf_subscription_t* bsf_subscription_1 = instantiate_bsf_subscription(include_optional);

	cJSON* jsonbsf_subscription_1 = bsf_subscription_convertToJSON(bsf_subscription_1);
	printf("bsf_subscription :\n%s\n", cJSON_Print(jsonbsf_subscription_1));
	bsf_subscription_t* bsf_subscription_2 = bsf_subscription_parseFromJSON(jsonbsf_subscription_1);
	cJSON* jsonbsf_subscription_2 = bsf_subscription_convertToJSON(bsf_subscription_2);
	printf("repeating bsf_subscription:\n%s\n", cJSON_Print(jsonbsf_subscription_2));
}

int main() {
  test_bsf_subscription(1);
  test_bsf_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_subscription_MAIN
#endif // bsf_subscription_TEST
