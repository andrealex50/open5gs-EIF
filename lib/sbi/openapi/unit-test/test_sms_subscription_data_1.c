#ifndef sms_subscription_data_1_TEST
#define sms_subscription_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_subscription_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_subscription_data_1.h"
sms_subscription_data_1_t* instantiate_sms_subscription_data_1(int include_optional);



sms_subscription_data_1_t* instantiate_sms_subscription_data_1(int include_optional) {
  sms_subscription_data_1_t* sms_subscription_data_1 = NULL;
  if (include_optional) {
    sms_subscription_data_1 = sms_subscription_data_1_create(
      1,
      "a",
      "a"
    );
  } else {
    sms_subscription_data_1 = sms_subscription_data_1_create(
      1,
      "a",
      "a"
    );
  }

  return sms_subscription_data_1;
}


#ifdef sms_subscription_data_1_MAIN

void test_sms_subscription_data_1(int include_optional) {
    sms_subscription_data_1_t* sms_subscription_data_1_1 = instantiate_sms_subscription_data_1(include_optional);

	cJSON* jsonsms_subscription_data_1_1 = sms_subscription_data_1_convertToJSON(sms_subscription_data_1_1);
	printf("sms_subscription_data_1 :\n%s\n", cJSON_Print(jsonsms_subscription_data_1_1));
	sms_subscription_data_1_t* sms_subscription_data_1_2 = sms_subscription_data_1_parseFromJSON(jsonsms_subscription_data_1_1);
	cJSON* jsonsms_subscription_data_1_2 = sms_subscription_data_1_convertToJSON(sms_subscription_data_1_2);
	printf("repeating sms_subscription_data_1:\n%s\n", cJSON_Print(jsonsms_subscription_data_1_2));
}

int main() {
  test_sms_subscription_data_1(1);
  test_sms_subscription_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_subscription_data_1_MAIN
#endif // sms_subscription_data_1_TEST
