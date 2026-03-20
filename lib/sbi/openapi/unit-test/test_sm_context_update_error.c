#ifndef sm_context_update_error_TEST
#define sm_context_update_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_update_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_update_error.h"
sm_context_update_error_t* instantiate_sm_context_update_error(int include_optional);

#include "test_ext_problem_details.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"


sm_context_update_error_t* instantiate_sm_context_update_error(int include_optional) {
  sm_context_update_error_t* sm_context_update_error = NULL;
  if (include_optional) {
    sm_context_update_error = sm_context_update_error_create(
      null,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_update_error__PDU_RES_SETUP_REQ,
      nsmf_pdusession_sm_context_update_error__ACTIVATED,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    sm_context_update_error = sm_context_update_error_create(
      null,
      NULL,
      NULL,
      nsmf_pdusession_sm_context_update_error__PDU_RES_SETUP_REQ,
      nsmf_pdusession_sm_context_update_error__ACTIVATED,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return sm_context_update_error;
}


#ifdef sm_context_update_error_MAIN

void test_sm_context_update_error(int include_optional) {
    sm_context_update_error_t* sm_context_update_error_1 = instantiate_sm_context_update_error(include_optional);

	cJSON* jsonsm_context_update_error_1 = sm_context_update_error_convertToJSON(sm_context_update_error_1);
	printf("sm_context_update_error :\n%s\n", cJSON_Print(jsonsm_context_update_error_1));
	sm_context_update_error_t* sm_context_update_error_2 = sm_context_update_error_parseFromJSON(jsonsm_context_update_error_1);
	cJSON* jsonsm_context_update_error_2 = sm_context_update_error_convertToJSON(sm_context_update_error_2);
	printf("repeating sm_context_update_error:\n%s\n", cJSON_Print(jsonsm_context_update_error_2));
}

int main() {
  test_sm_context_update_error(1);
  test_sm_context_update_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_update_error_MAIN
#endif // sm_context_update_error_TEST
