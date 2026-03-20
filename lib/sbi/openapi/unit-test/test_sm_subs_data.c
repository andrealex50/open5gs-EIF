#ifndef sm_subs_data_TEST
#define sm_subs_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_subs_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_subs_data.h"
sm_subs_data_t* instantiate_sm_subs_data(int include_optional);

#include "test_extended_sm_subs_data.c"


sm_subs_data_t* instantiate_sm_subs_data(int include_optional) {
  sm_subs_data_t* sm_subs_data = NULL;
  if (include_optional) {
    sm_subs_data = sm_subs_data_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_extended_sm_subs_data(0)
    );
  } else {
    sm_subs_data = sm_subs_data_create(
      list_createList(),
      NULL
    );
  }

  return sm_subs_data;
}


#ifdef sm_subs_data_MAIN

void test_sm_subs_data(int include_optional) {
    sm_subs_data_t* sm_subs_data_1 = instantiate_sm_subs_data(include_optional);

	cJSON* jsonsm_subs_data_1 = sm_subs_data_convertToJSON(sm_subs_data_1);
	printf("sm_subs_data :\n%s\n", cJSON_Print(jsonsm_subs_data_1));
	sm_subs_data_t* sm_subs_data_2 = sm_subs_data_parseFromJSON(jsonsm_subs_data_1);
	cJSON* jsonsm_subs_data_2 = sm_subs_data_convertToJSON(sm_subs_data_2);
	printf("repeating sm_subs_data:\n%s\n", cJSON_Print(jsonsm_subs_data_2));
}

int main() {
  test_sm_subs_data(1);
  test_sm_subs_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_subs_data_MAIN
#endif // sm_subs_data_TEST
