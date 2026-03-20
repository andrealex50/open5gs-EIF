#ifndef sms_subscription_data_TEST
#define sms_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_subscription_data.h"
sms_subscription_data_t* instantiate_sms_subscription_data(int include_optional);



sms_subscription_data_t* instantiate_sms_subscription_data(int include_optional) {
  sms_subscription_data_t* sms_subscription_data = NULL;
  if (include_optional) {
    sms_subscription_data = sms_subscription_data_create(
      1,
      "a",
      "a"
    );
  } else {
    sms_subscription_data = sms_subscription_data_create(
      1,
      "a",
      "a"
    );
  }

  return sms_subscription_data;
}


#ifdef sms_subscription_data_MAIN

void test_sms_subscription_data(int include_optional) {
    sms_subscription_data_t* sms_subscription_data_1 = instantiate_sms_subscription_data(include_optional);

	cJSON* jsonsms_subscription_data_1 = sms_subscription_data_convertToJSON(sms_subscription_data_1);
	printf("sms_subscription_data :\n%s\n", cJSON_Print(jsonsms_subscription_data_1));
	sms_subscription_data_t* sms_subscription_data_2 = sms_subscription_data_parseFromJSON(jsonsms_subscription_data_1);
	cJSON* jsonsms_subscription_data_2 = sms_subscription_data_convertToJSON(sms_subscription_data_2);
	printf("repeating sms_subscription_data:\n%s\n", cJSON_Print(jsonsms_subscription_data_2));
}

int main() {
  test_sms_subscription_data(1);
  test_sms_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_subscription_data_MAIN
#endif // sms_subscription_data_TEST
