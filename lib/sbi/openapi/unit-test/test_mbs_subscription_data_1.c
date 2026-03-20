#ifndef mbs_subscription_data_1_TEST
#define mbs_subscription_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_subscription_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_subscription_data_1.h"
mbs_subscription_data_1_t* instantiate_mbs_subscription_data_1(int include_optional);



mbs_subscription_data_1_t* instantiate_mbs_subscription_data_1(int include_optional) {
  mbs_subscription_data_1_t* mbs_subscription_data_1 = NULL;
  if (include_optional) {
    mbs_subscription_data_1 = mbs_subscription_data_1_create(
      1,
      list_createList()
    );
  } else {
    mbs_subscription_data_1 = mbs_subscription_data_1_create(
      1,
      list_createList()
    );
  }

  return mbs_subscription_data_1;
}


#ifdef mbs_subscription_data_1_MAIN

void test_mbs_subscription_data_1(int include_optional) {
    mbs_subscription_data_1_t* mbs_subscription_data_1_1 = instantiate_mbs_subscription_data_1(include_optional);

	cJSON* jsonmbs_subscription_data_1_1 = mbs_subscription_data_1_convertToJSON(mbs_subscription_data_1_1);
	printf("mbs_subscription_data_1 :\n%s\n", cJSON_Print(jsonmbs_subscription_data_1_1));
	mbs_subscription_data_1_t* mbs_subscription_data_1_2 = mbs_subscription_data_1_parseFromJSON(jsonmbs_subscription_data_1_1);
	cJSON* jsonmbs_subscription_data_1_2 = mbs_subscription_data_1_convertToJSON(mbs_subscription_data_1_2);
	printf("repeating mbs_subscription_data_1:\n%s\n", cJSON_Print(jsonmbs_subscription_data_1_2));
}

int main() {
  test_mbs_subscription_data_1(1);
  test_mbs_subscription_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_subscription_data_1_MAIN
#endif // mbs_subscription_data_1_TEST
