#ifndef sm_context_created_data_TEST
#define sm_context_created_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_created_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_created_data.h"
sm_context_created_data_t* instantiate_sm_context_created_data(int include_optional);

#include "test_snssai.c"
#include "test_ref_to_binary_data.c"


sm_context_created_data_t* instantiate_sm_context_created_data(int include_optional) {
  sm_context_created_data_t* sm_context_created_data = NULL;
  if (include_optional) {
    sm_context_created_data = sm_context_created_data_create(
      "0",
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_snssai(0),
      nsmf_pdusession_sm_context_created_data__ACTIVATED,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_created_data__PDU_RES_SETUP_REQ,
      list_createList(),
      nsmf_pdusession_sm_context_created_data__NONE,
      "a",
      "0",
      "2013-10-20T19:20:30+01:00",
      "a",
      "0",
      "0",
      "0"
    );
  } else {
    sm_context_created_data = sm_context_created_data_create(
      "0",
      "0",
      0,
      NULL,
      nsmf_pdusession_sm_context_created_data__ACTIVATED,
      NULL,
      nsmf_pdusession_sm_context_created_data__PDU_RES_SETUP_REQ,
      list_createList(),
      nsmf_pdusession_sm_context_created_data__NONE,
      "a",
      "0",
      "2013-10-20T19:20:30+01:00",
      "a",
      "0",
      "0",
      "0"
    );
  }

  return sm_context_created_data;
}


#ifdef sm_context_created_data_MAIN

void test_sm_context_created_data(int include_optional) {
    sm_context_created_data_t* sm_context_created_data_1 = instantiate_sm_context_created_data(include_optional);

	cJSON* jsonsm_context_created_data_1 = sm_context_created_data_convertToJSON(sm_context_created_data_1);
	printf("sm_context_created_data :\n%s\n", cJSON_Print(jsonsm_context_created_data_1));
	sm_context_created_data_t* sm_context_created_data_2 = sm_context_created_data_parseFromJSON(jsonsm_context_created_data_1);
	cJSON* jsonsm_context_created_data_2 = sm_context_created_data_convertToJSON(sm_context_created_data_2);
	printf("repeating sm_context_created_data:\n%s\n", cJSON_Print(jsonsm_context_created_data_2));
}

int main() {
  test_sm_context_created_data(1);
  test_sm_context_created_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_created_data_MAIN
#endif // sm_context_created_data_TEST
