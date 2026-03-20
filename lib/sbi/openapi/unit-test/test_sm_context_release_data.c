#ifndef sm_context_release_data_TEST
#define sm_context_release_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_release_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_release_data.h"
sm_context_release_data_t* instantiate_sm_context_release_data(int include_optional);

#include "test_ng_ap_cause.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_ref_to_binary_data.c"


sm_context_release_data_t* instantiate_sm_context_release_data(int include_optional) {
  sm_context_release_data_t* sm_context_release_data = NULL;
  if (include_optional) {
    sm_context_release_data = sm_context_release_data_create(
      nsmf_pdusession_sm_context_release_data__REL_DUE_TO_HO,
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      1,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_release_data__PDU_RES_SETUP_REQ,
      1
    );
  } else {
    sm_context_release_data = sm_context_release_data_create(
      nsmf_pdusession_sm_context_release_data__REL_DUE_TO_HO,
      NULL,
      0,
      NULL,
      "-08:00+1",
      NULL,
      1,
      NULL,
      nsmf_pdusession_sm_context_release_data__PDU_RES_SETUP_REQ,
      1
    );
  }

  return sm_context_release_data;
}


#ifdef sm_context_release_data_MAIN

void test_sm_context_release_data(int include_optional) {
    sm_context_release_data_t* sm_context_release_data_1 = instantiate_sm_context_release_data(include_optional);

	cJSON* jsonsm_context_release_data_1 = sm_context_release_data_convertToJSON(sm_context_release_data_1);
	printf("sm_context_release_data :\n%s\n", cJSON_Print(jsonsm_context_release_data_1));
	sm_context_release_data_t* sm_context_release_data_2 = sm_context_release_data_parseFromJSON(jsonsm_context_release_data_1);
	cJSON* jsonsm_context_release_data_2 = sm_context_release_data_convertToJSON(sm_context_release_data_2);
	printf("repeating sm_context_release_data:\n%s\n", cJSON_Print(jsonsm_context_release_data_2));
}

int main() {
  test_sm_context_release_data(1);
  test_sm_context_release_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_release_data_MAIN
#endif // sm_context_release_data_TEST
