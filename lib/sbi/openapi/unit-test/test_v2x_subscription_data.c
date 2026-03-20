#ifndef v2x_subscription_data_TEST
#define v2x_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v2x_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v2x_subscription_data.h"
v2x_subscription_data_t* instantiate_v2x_subscription_data(int include_optional);

#include "test_nr_v2x_auth.c"
#include "test_lte_v2x_auth.c"


v2x_subscription_data_t* instantiate_v2x_subscription_data(int include_optional) {
  v2x_subscription_data_t* v2x_subscription_data = NULL;
  if (include_optional) {
    v2x_subscription_data = v2x_subscription_data_create(
       // false, not to have infinite recursion
      instantiate_nr_v2x_auth(0),
       // false, not to have infinite recursion
      instantiate_lte_v2x_auth(0),
      "a",
      "a"
    );
  } else {
    v2x_subscription_data = v2x_subscription_data_create(
      NULL,
      NULL,
      "a",
      "a"
    );
  }

  return v2x_subscription_data;
}


#ifdef v2x_subscription_data_MAIN

void test_v2x_subscription_data(int include_optional) {
    v2x_subscription_data_t* v2x_subscription_data_1 = instantiate_v2x_subscription_data(include_optional);

	cJSON* jsonv2x_subscription_data_1 = v2x_subscription_data_convertToJSON(v2x_subscription_data_1);
	printf("v2x_subscription_data :\n%s\n", cJSON_Print(jsonv2x_subscription_data_1));
	v2x_subscription_data_t* v2x_subscription_data_2 = v2x_subscription_data_parseFromJSON(jsonv2x_subscription_data_1);
	cJSON* jsonv2x_subscription_data_2 = v2x_subscription_data_convertToJSON(v2x_subscription_data_2);
	printf("repeating v2x_subscription_data:\n%s\n", cJSON_Print(jsonv2x_subscription_data_2));
}

int main() {
  test_v2x_subscription_data(1);
  test_v2x_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // v2x_subscription_data_MAIN
#endif // v2x_subscription_data_TEST
