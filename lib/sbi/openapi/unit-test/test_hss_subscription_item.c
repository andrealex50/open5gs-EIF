#ifndef hss_subscription_item_TEST
#define hss_subscription_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_subscription_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_subscription_item.h"
hss_subscription_item_t* instantiate_hss_subscription_item(int include_optional);

#include "test_context_info.c"


hss_subscription_item_t* instantiate_hss_subscription_item(int include_optional) {
  hss_subscription_item_t* hss_subscription_item = NULL;
  if (include_optional) {
    hss_subscription_item = hss_subscription_item_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_context_info(0)
    );
  } else {
    hss_subscription_item = hss_subscription_item_create(
      "0",
      "0",
      NULL
    );
  }

  return hss_subscription_item;
}


#ifdef hss_subscription_item_MAIN

void test_hss_subscription_item(int include_optional) {
    hss_subscription_item_t* hss_subscription_item_1 = instantiate_hss_subscription_item(include_optional);

	cJSON* jsonhss_subscription_item_1 = hss_subscription_item_convertToJSON(hss_subscription_item_1);
	printf("hss_subscription_item :\n%s\n", cJSON_Print(jsonhss_subscription_item_1));
	hss_subscription_item_t* hss_subscription_item_2 = hss_subscription_item_parseFromJSON(jsonhss_subscription_item_1);
	cJSON* jsonhss_subscription_item_2 = hss_subscription_item_convertToJSON(hss_subscription_item_2);
	printf("repeating hss_subscription_item:\n%s\n", cJSON_Print(jsonhss_subscription_item_2));
}

int main() {
  test_hss_subscription_item(1);
  test_hss_subscription_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_subscription_item_MAIN
#endif // hss_subscription_item_TEST
