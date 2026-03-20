#ifndef sm_policy_dnn_data_TEST
#define sm_policy_dnn_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_dnn_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_dnn_data.h"
sm_policy_dnn_data_t* instantiate_sm_policy_dnn_data(int include_optional);

#include "test_charging_information.c"


sm_policy_dnn_data_t* instantiate_sm_policy_dnn_data(int include_optional) {
  sm_policy_dnn_data_t* sm_policy_dnn_data = NULL;
  if (include_optional) {
    sm_policy_dnn_data = sm_policy_dnn_data_create(
      "0",
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
      56,
      56,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_charging_information(0),
      list_createList(),
      1,
      1,
      1,
      56,
      56,
      list_createList(),
      list_createList(),
      1
    );
  } else {
    sm_policy_dnn_data = sm_policy_dnn_data_create(
      "0",
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
      56,
      56,
      1,
      1,
      NULL,
      list_createList(),
      1,
      1,
      1,
      56,
      56,
      list_createList(),
      list_createList(),
      1
    );
  }

  return sm_policy_dnn_data;
}


#ifdef sm_policy_dnn_data_MAIN

void test_sm_policy_dnn_data(int include_optional) {
    sm_policy_dnn_data_t* sm_policy_dnn_data_1 = instantiate_sm_policy_dnn_data(include_optional);

	cJSON* jsonsm_policy_dnn_data_1 = sm_policy_dnn_data_convertToJSON(sm_policy_dnn_data_1);
	printf("sm_policy_dnn_data :\n%s\n", cJSON_Print(jsonsm_policy_dnn_data_1));
	sm_policy_dnn_data_t* sm_policy_dnn_data_2 = sm_policy_dnn_data_parseFromJSON(jsonsm_policy_dnn_data_1);
	cJSON* jsonsm_policy_dnn_data_2 = sm_policy_dnn_data_convertToJSON(sm_policy_dnn_data_2);
	printf("repeating sm_policy_dnn_data:\n%s\n", cJSON_Print(jsonsm_policy_dnn_data_2));
}

int main() {
  test_sm_policy_dnn_data(1);
  test_sm_policy_dnn_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_dnn_data_MAIN
#endif // sm_policy_dnn_data_TEST
