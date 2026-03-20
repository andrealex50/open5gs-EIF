#ifndef subscription_context_TEST
#define subscription_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscription_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscription_context.h"
subscription_context_t* instantiate_subscription_context(int include_optional);

#include "test_subscr_cond.c"


subscription_context_t* instantiate_subscription_context(int include_optional) {
  subscription_context_t* subscription_context = NULL;
  if (include_optional) {
    subscription_context = subscription_context_create(
      "0",
       // false, not to have infinite recursion
      instantiate_subscr_cond(0)
    );
  } else {
    subscription_context = subscription_context_create(
      "0",
      NULL
    );
  }

  return subscription_context;
}


#ifdef subscription_context_MAIN

void test_subscription_context(int include_optional) {
    subscription_context_t* subscription_context_1 = instantiate_subscription_context(include_optional);

	cJSON* jsonsubscription_context_1 = subscription_context_convertToJSON(subscription_context_1);
	printf("subscription_context :\n%s\n", cJSON_Print(jsonsubscription_context_1));
	subscription_context_t* subscription_context_2 = subscription_context_parseFromJSON(jsonsubscription_context_1);
	cJSON* jsonsubscription_context_2 = subscription_context_convertToJSON(subscription_context_2);
	printf("repeating subscription_context:\n%s\n", cJSON_Print(jsonsubscription_context_2));
}

int main() {
  test_subscription_context(1);
  test_subscription_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscription_context_MAIN
#endif // subscription_context_TEST
