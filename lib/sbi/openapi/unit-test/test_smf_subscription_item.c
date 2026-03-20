#ifndef smf_subscription_item_TEST
#define smf_subscription_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_subscription_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_subscription_item.h"
smf_subscription_item_t* instantiate_smf_subscription_item(int include_optional);

#include "test_context_info.c"


smf_subscription_item_t* instantiate_smf_subscription_item(int include_optional) {
  smf_subscription_item_t* smf_subscription_item = NULL;
  if (include_optional) {
    smf_subscription_item = smf_subscription_item_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_context_info(0)
    );
  } else {
    smf_subscription_item = smf_subscription_item_create(
      "0",
      "0",
      NULL
    );
  }

  return smf_subscription_item;
}


#ifdef smf_subscription_item_MAIN

void test_smf_subscription_item(int include_optional) {
    smf_subscription_item_t* smf_subscription_item_1 = instantiate_smf_subscription_item(include_optional);

	cJSON* jsonsmf_subscription_item_1 = smf_subscription_item_convertToJSON(smf_subscription_item_1);
	printf("smf_subscription_item :\n%s\n", cJSON_Print(jsonsmf_subscription_item_1));
	smf_subscription_item_t* smf_subscription_item_2 = smf_subscription_item_parseFromJSON(jsonsmf_subscription_item_1);
	cJSON* jsonsmf_subscription_item_2 = smf_subscription_item_convertToJSON(smf_subscription_item_2);
	printf("repeating smf_subscription_item:\n%s\n", cJSON_Print(jsonsmf_subscription_item_2));
}

int main() {
  test_smf_subscription_item(1);
  test_smf_subscription_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_subscription_item_MAIN
#endif // smf_subscription_item_TEST
