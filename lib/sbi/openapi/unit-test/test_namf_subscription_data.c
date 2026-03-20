#ifndef namf_subscription_data_TEST
#define namf_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define namf_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/namf_subscription_data.h"
namf_subscription_data_t* instantiate_namf_subscription_data(int include_optional);



namf_subscription_data_t* instantiate_namf_subscription_data(int include_optional) {
  namf_subscription_data_t* namf_subscription_data = NULL;
  if (include_optional) {
    namf_subscription_data = namf_subscription_data_create(
      "0",
      list_createList()
    );
  } else {
    namf_subscription_data = namf_subscription_data_create(
      "0",
      list_createList()
    );
  }

  return namf_subscription_data;
}


#ifdef namf_subscription_data_MAIN

void test_namf_subscription_data(int include_optional) {
    namf_subscription_data_t* namf_subscription_data_1 = instantiate_namf_subscription_data(include_optional);

	cJSON* jsonnamf_subscription_data_1 = namf_subscription_data_convertToJSON(namf_subscription_data_1);
	printf("namf_subscription_data :\n%s\n", cJSON_Print(jsonnamf_subscription_data_1));
	namf_subscription_data_t* namf_subscription_data_2 = namf_subscription_data_parseFromJSON(jsonnamf_subscription_data_1);
	cJSON* jsonnamf_subscription_data_2 = namf_subscription_data_convertToJSON(namf_subscription_data_2);
	printf("repeating namf_subscription_data:\n%s\n", cJSON_Print(jsonnamf_subscription_data_2));
}

int main() {
  test_namf_subscription_data(1);
  test_namf_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // namf_subscription_data_MAIN
#endif // namf_subscription_data_TEST
