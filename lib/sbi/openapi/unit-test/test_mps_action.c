#ifndef mps_action_TEST
#define mps_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mps_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mps_action.h"
mps_action_t* instantiate_mps_action(int include_optional);



mps_action_t* instantiate_mps_action(int include_optional) {
  mps_action_t* mps_action = NULL;
  if (include_optional) {
    mps_action = mps_action_create(
    );
  } else {
    mps_action = mps_action_create(
    );
  }

  return mps_action;
}


#ifdef mps_action_MAIN

void test_mps_action(int include_optional) {
    mps_action_t* mps_action_1 = instantiate_mps_action(include_optional);

	cJSON* jsonmps_action_1 = mps_action_convertToJSON(mps_action_1);
	printf("mps_action :\n%s\n", cJSON_Print(jsonmps_action_1));
	mps_action_t* mps_action_2 = mps_action_parseFromJSON(jsonmps_action_1);
	cJSON* jsonmps_action_2 = mps_action_convertToJSON(mps_action_2);
	printf("repeating mps_action:\n%s\n", cJSON_Print(jsonmps_action_2));
}

int main() {
  test_mps_action(1);
  test_mps_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // mps_action_MAIN
#endif // mps_action_TEST
