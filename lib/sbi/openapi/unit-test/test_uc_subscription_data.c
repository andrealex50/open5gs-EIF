#ifndef uc_subscription_data_TEST
#define uc_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define uc_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/uc_subscription_data.h"
uc_subscription_data_t* instantiate_uc_subscription_data(int include_optional);



uc_subscription_data_t* instantiate_uc_subscription_data(int include_optional) {
  uc_subscription_data_t* uc_subscription_data = NULL;
  if (include_optional) {
    uc_subscription_data = uc_subscription_data_create(
      list_createList()
    );
  } else {
    uc_subscription_data = uc_subscription_data_create(
      list_createList()
    );
  }

  return uc_subscription_data;
}


#ifdef uc_subscription_data_MAIN

void test_uc_subscription_data(int include_optional) {
    uc_subscription_data_t* uc_subscription_data_1 = instantiate_uc_subscription_data(include_optional);

	cJSON* jsonuc_subscription_data_1 = uc_subscription_data_convertToJSON(uc_subscription_data_1);
	printf("uc_subscription_data :\n%s\n", cJSON_Print(jsonuc_subscription_data_1));
	uc_subscription_data_t* uc_subscription_data_2 = uc_subscription_data_parseFromJSON(jsonuc_subscription_data_1);
	cJSON* jsonuc_subscription_data_2 = uc_subscription_data_convertToJSON(uc_subscription_data_2);
	printf("repeating uc_subscription_data:\n%s\n", cJSON_Print(jsonuc_subscription_data_2));
}

int main() {
  test_uc_subscription_data(1);
  test_uc_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // uc_subscription_data_MAIN
#endif // uc_subscription_data_TEST
