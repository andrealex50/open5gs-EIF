#ifndef sm_context_retrieved_data_TEST
#define sm_context_retrieved_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_retrieved_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_retrieved_data.h"
sm_context_retrieved_data_t* instantiate_sm_context_retrieved_data(int include_optional);

#include "test_sm_context.c"
#include "test_small_data_rate_status.c"
#include "test_apn_rate_status.c"
#include "test_af_coordination_info.c"


sm_context_retrieved_data_t* instantiate_sm_context_retrieved_data(int include_optional) {
  sm_context_retrieved_data_t* sm_context_retrieved_data = NULL;
  if (include_optional) {
    sm_context_retrieved_data = sm_context_retrieved_data_create(
      "0",
       // false, not to have infinite recursion
      instantiate_sm_context(0),
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_apn_rate_status(0),
      1,
       // false, not to have infinite recursion
      instantiate_af_coordination_info(0)
    );
  } else {
    sm_context_retrieved_data = sm_context_retrieved_data_create(
      "0",
      NULL,
      NULL,
      NULL,
      1,
      NULL
    );
  }

  return sm_context_retrieved_data;
}


#ifdef sm_context_retrieved_data_MAIN

void test_sm_context_retrieved_data(int include_optional) {
    sm_context_retrieved_data_t* sm_context_retrieved_data_1 = instantiate_sm_context_retrieved_data(include_optional);

	cJSON* jsonsm_context_retrieved_data_1 = sm_context_retrieved_data_convertToJSON(sm_context_retrieved_data_1);
	printf("sm_context_retrieved_data :\n%s\n", cJSON_Print(jsonsm_context_retrieved_data_1));
	sm_context_retrieved_data_t* sm_context_retrieved_data_2 = sm_context_retrieved_data_parseFromJSON(jsonsm_context_retrieved_data_1);
	cJSON* jsonsm_context_retrieved_data_2 = sm_context_retrieved_data_convertToJSON(sm_context_retrieved_data_2);
	printf("repeating sm_context_retrieved_data:\n%s\n", cJSON_Print(jsonsm_context_retrieved_data_2));
}

int main() {
  test_sm_context_retrieved_data(1);
  test_sm_context_retrieved_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_retrieved_data_MAIN
#endif // sm_context_retrieved_data_TEST
