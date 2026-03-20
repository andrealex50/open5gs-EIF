#ifndef sm_context_updated_data_TEST
#define sm_context_updated_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_updated_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_updated_data.h"
sm_context_updated_data_t* instantiate_sm_context_updated_data(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_tunnel_info.c"
#include "test_anchor_smf_features.c"


sm_context_updated_data_t* instantiate_sm_context_updated_data(int include_optional) {
  sm_context_updated_data_t* sm_context_updated_data = NULL;
  if (include_optional) {
    sm_context_updated_data = sm_context_updated_data_create(
      nsmf_pdusession_sm_context_updated_data__ACTIVATED,
      nsmf_pdusession_sm_context_updated_data__NONE,
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      nsmf_pdusession_sm_context_updated_data__PDU_RES_SETUP_REQ,
      list_createList(),
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      nsmf_pdusession_sm_context_updated_data__REL_DUE_TO_HO,
      1,
      "a",
      "YQ==",
      list_createList(),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_anchor_smf_features(0)
    );
  } else {
    sm_context_updated_data = sm_context_updated_data_create(
      nsmf_pdusession_sm_context_updated_data__ACTIVATED,
      nsmf_pdusession_sm_context_updated_data__NONE,
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      nsmf_pdusession_sm_context_updated_data__PDU_RES_SETUP_REQ,
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      NULL,
      nsmf_pdusession_sm_context_updated_data__REL_DUE_TO_HO,
      1,
      "a",
      "YQ==",
      list_createList(),
      "0",
      "0",
      "0",
      NULL
    );
  }

  return sm_context_updated_data;
}


#ifdef sm_context_updated_data_MAIN

void test_sm_context_updated_data(int include_optional) {
    sm_context_updated_data_t* sm_context_updated_data_1 = instantiate_sm_context_updated_data(include_optional);

	cJSON* jsonsm_context_updated_data_1 = sm_context_updated_data_convertToJSON(sm_context_updated_data_1);
	printf("sm_context_updated_data :\n%s\n", cJSON_Print(jsonsm_context_updated_data_1));
	sm_context_updated_data_t* sm_context_updated_data_2 = sm_context_updated_data_parseFromJSON(jsonsm_context_updated_data_1);
	cJSON* jsonsm_context_updated_data_2 = sm_context_updated_data_convertToJSON(sm_context_updated_data_2);
	printf("repeating sm_context_updated_data:\n%s\n", cJSON_Print(jsonsm_context_updated_data_2));
}

int main() {
  test_sm_context_updated_data(1);
  test_sm_context_updated_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_updated_data_MAIN
#endif // sm_context_updated_data_TEST
