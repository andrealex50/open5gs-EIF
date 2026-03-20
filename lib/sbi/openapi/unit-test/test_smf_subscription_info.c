#ifndef smf_subscription_info_TEST
#define smf_subscription_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_subscription_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_subscription_info.h"
smf_subscription_info_t* instantiate_smf_subscription_info(int include_optional);



smf_subscription_info_t* instantiate_smf_subscription_info(int include_optional) {
  smf_subscription_info_t* smf_subscription_info = NULL;
  if (include_optional) {
    smf_subscription_info = smf_subscription_info_create(
      list_createList()
    );
  } else {
    smf_subscription_info = smf_subscription_info_create(
      list_createList()
    );
  }

  return smf_subscription_info;
}


#ifdef smf_subscription_info_MAIN

void test_smf_subscription_info(int include_optional) {
    smf_subscription_info_t* smf_subscription_info_1 = instantiate_smf_subscription_info(include_optional);

	cJSON* jsonsmf_subscription_info_1 = smf_subscription_info_convertToJSON(smf_subscription_info_1);
	printf("smf_subscription_info :\n%s\n", cJSON_Print(jsonsmf_subscription_info_1));
	smf_subscription_info_t* smf_subscription_info_2 = smf_subscription_info_parseFromJSON(jsonsmf_subscription_info_1);
	cJSON* jsonsmf_subscription_info_2 = smf_subscription_info_convertToJSON(smf_subscription_info_2);
	printf("repeating smf_subscription_info:\n%s\n", cJSON_Print(jsonsmf_subscription_info_2));
}

int main() {
  test_smf_subscription_info(1);
  test_smf_subscription_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_subscription_info_MAIN
#endif // smf_subscription_info_TEST
