#ifndef sm_context_retrieve_data_TEST
#define sm_context_retrieve_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_retrieve_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_retrieve_data.h"
sm_context_retrieve_data_t* instantiate_sm_context_retrieve_data(int include_optional);

#include "test_mme_capabilities.c"
#include "test_plmn_id.c"


sm_context_retrieve_data_t* instantiate_sm_context_retrieve_data(int include_optional) {
  sm_context_retrieve_data_t* sm_context_retrieve_data = NULL;
  if (include_optional) {
    sm_context_retrieve_data = sm_context_retrieve_data_create(
       // false, not to have infinite recursion
      instantiate_mme_capabilities(0),
      nsmf_pdusession_sm_context_retrieve_data__EPS_PDN_CONNECTION,
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      list_createList(),
      1
    );
  } else {
    sm_context_retrieve_data = sm_context_retrieve_data_create(
      NULL,
      nsmf_pdusession_sm_context_retrieve_data__EPS_PDN_CONNECTION,
      NULL,
      list_createList(),
      1
    );
  }

  return sm_context_retrieve_data;
}


#ifdef sm_context_retrieve_data_MAIN

void test_sm_context_retrieve_data(int include_optional) {
    sm_context_retrieve_data_t* sm_context_retrieve_data_1 = instantiate_sm_context_retrieve_data(include_optional);

	cJSON* jsonsm_context_retrieve_data_1 = sm_context_retrieve_data_convertToJSON(sm_context_retrieve_data_1);
	printf("sm_context_retrieve_data :\n%s\n", cJSON_Print(jsonsm_context_retrieve_data_1));
	sm_context_retrieve_data_t* sm_context_retrieve_data_2 = sm_context_retrieve_data_parseFromJSON(jsonsm_context_retrieve_data_1);
	cJSON* jsonsm_context_retrieve_data_2 = sm_context_retrieve_data_convertToJSON(sm_context_retrieve_data_2);
	printf("repeating sm_context_retrieve_data:\n%s\n", cJSON_Print(jsonsm_context_retrieve_data_2));
}

int main() {
  test_sm_context_retrieve_data(1);
  test_sm_context_retrieve_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_retrieve_data_MAIN
#endif // sm_context_retrieve_data_TEST
