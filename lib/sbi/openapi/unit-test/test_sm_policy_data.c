#ifndef sm_policy_data_TEST
#define sm_policy_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_data.h"
sm_policy_data_t* instantiate_sm_policy_data(int include_optional);



sm_policy_data_t* instantiate_sm_policy_data(int include_optional) {
  sm_policy_data_t* sm_policy_data = NULL;
  if (include_optional) {
    sm_policy_data = sm_policy_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList()
    );
  } else {
    sm_policy_data = sm_policy_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList()
    );
  }

  return sm_policy_data;
}


#ifdef sm_policy_data_MAIN

void test_sm_policy_data(int include_optional) {
    sm_policy_data_t* sm_policy_data_1 = instantiate_sm_policy_data(include_optional);

	cJSON* jsonsm_policy_data_1 = sm_policy_data_convertToJSON(sm_policy_data_1);
	printf("sm_policy_data :\n%s\n", cJSON_Print(jsonsm_policy_data_1));
	sm_policy_data_t* sm_policy_data_2 = sm_policy_data_parseFromJSON(jsonsm_policy_data_1);
	cJSON* jsonsm_policy_data_2 = sm_policy_data_convertToJSON(sm_policy_data_2);
	printf("repeating sm_policy_data:\n%s\n", cJSON_Print(jsonsm_policy_data_2));
}

int main() {
  test_sm_policy_data(1);
  test_sm_policy_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_data_MAIN
#endif // sm_policy_data_TEST
