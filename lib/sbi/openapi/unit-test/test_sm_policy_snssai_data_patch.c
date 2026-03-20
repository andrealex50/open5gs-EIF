#ifndef sm_policy_snssai_data_patch_TEST
#define sm_policy_snssai_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_snssai_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_snssai_data_patch.h"
sm_policy_snssai_data_patch_t* instantiate_sm_policy_snssai_data_patch(int include_optional);

#include "test_snssai.c"


sm_policy_snssai_data_patch_t* instantiate_sm_policy_snssai_data_patch(int include_optional) {
  sm_policy_snssai_data_patch_t* sm_policy_snssai_data_patch = NULL;
  if (include_optional) {
    sm_policy_snssai_data_patch = sm_policy_snssai_data_patch_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList()
    );
  } else {
    sm_policy_snssai_data_patch = sm_policy_snssai_data_patch_create(
      NULL,
      list_createList()
    );
  }

  return sm_policy_snssai_data_patch;
}


#ifdef sm_policy_snssai_data_patch_MAIN

void test_sm_policy_snssai_data_patch(int include_optional) {
    sm_policy_snssai_data_patch_t* sm_policy_snssai_data_patch_1 = instantiate_sm_policy_snssai_data_patch(include_optional);

	cJSON* jsonsm_policy_snssai_data_patch_1 = sm_policy_snssai_data_patch_convertToJSON(sm_policy_snssai_data_patch_1);
	printf("sm_policy_snssai_data_patch :\n%s\n", cJSON_Print(jsonsm_policy_snssai_data_patch_1));
	sm_policy_snssai_data_patch_t* sm_policy_snssai_data_patch_2 = sm_policy_snssai_data_patch_parseFromJSON(jsonsm_policy_snssai_data_patch_1);
	cJSON* jsonsm_policy_snssai_data_patch_2 = sm_policy_snssai_data_patch_convertToJSON(sm_policy_snssai_data_patch_2);
	printf("repeating sm_policy_snssai_data_patch:\n%s\n", cJSON_Print(jsonsm_policy_snssai_data_patch_2));
}

int main() {
  test_sm_policy_snssai_data_patch(1);
  test_sm_policy_snssai_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_snssai_data_patch_MAIN
#endif // sm_policy_snssai_data_patch_TEST
