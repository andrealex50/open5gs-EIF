#ifndef smf_selection_subscription_data_TEST
#define smf_selection_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_selection_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_selection_subscription_data.h"
smf_selection_subscription_data_t* instantiate_smf_selection_subscription_data(int include_optional);



smf_selection_subscription_data_t* instantiate_smf_selection_subscription_data(int include_optional) {
  smf_selection_subscription_data_t* smf_selection_subscription_data = NULL;
  if (include_optional) {
    smf_selection_subscription_data = smf_selection_subscription_data_create(
      "a",
      list_createList(),
      "a",
      "0"
    );
  } else {
    smf_selection_subscription_data = smf_selection_subscription_data_create(
      "a",
      list_createList(),
      "a",
      "0"
    );
  }

  return smf_selection_subscription_data;
}


#ifdef smf_selection_subscription_data_MAIN

void test_smf_selection_subscription_data(int include_optional) {
    smf_selection_subscription_data_t* smf_selection_subscription_data_1 = instantiate_smf_selection_subscription_data(include_optional);

	cJSON* jsonsmf_selection_subscription_data_1 = smf_selection_subscription_data_convertToJSON(smf_selection_subscription_data_1);
	printf("smf_selection_subscription_data :\n%s\n", cJSON_Print(jsonsmf_selection_subscription_data_1));
	smf_selection_subscription_data_t* smf_selection_subscription_data_2 = smf_selection_subscription_data_parseFromJSON(jsonsmf_selection_subscription_data_1);
	cJSON* jsonsmf_selection_subscription_data_2 = smf_selection_subscription_data_convertToJSON(smf_selection_subscription_data_2);
	printf("repeating smf_selection_subscription_data:\n%s\n", cJSON_Print(jsonsmf_selection_subscription_data_2));
}

int main() {
  test_smf_selection_subscription_data(1);
  test_smf_selection_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_selection_subscription_data_MAIN
#endif // smf_selection_subscription_data_TEST
