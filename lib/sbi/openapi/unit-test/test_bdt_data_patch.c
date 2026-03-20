#ifndef bdt_data_patch_TEST
#define bdt_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_data_patch.h"
bdt_data_patch_t* instantiate_bdt_data_patch(int include_optional);

#include "test_transfer_policy.c"
#include "test_bdt_policy_status.c"


bdt_data_patch_t* instantiate_bdt_data_patch(int include_optional) {
  bdt_data_patch_t* bdt_data_patch = NULL;
  if (include_optional) {
    bdt_data_patch = bdt_data_patch_create(
       // false, not to have infinite recursion
      instantiate_transfer_policy(0),
      null
    );
  } else {
    bdt_data_patch = bdt_data_patch_create(
      NULL,
      null
    );
  }

  return bdt_data_patch;
}


#ifdef bdt_data_patch_MAIN

void test_bdt_data_patch(int include_optional) {
    bdt_data_patch_t* bdt_data_patch_1 = instantiate_bdt_data_patch(include_optional);

	cJSON* jsonbdt_data_patch_1 = bdt_data_patch_convertToJSON(bdt_data_patch_1);
	printf("bdt_data_patch :\n%s\n", cJSON_Print(jsonbdt_data_patch_1));
	bdt_data_patch_t* bdt_data_patch_2 = bdt_data_patch_parseFromJSON(jsonbdt_data_patch_1);
	cJSON* jsonbdt_data_patch_2 = bdt_data_patch_convertToJSON(bdt_data_patch_2);
	printf("repeating bdt_data_patch:\n%s\n", cJSON_Print(jsonbdt_data_patch_2));
}

int main() {
  test_bdt_data_patch(1);
  test_bdt_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_data_patch_MAIN
#endif // bdt_data_patch_TEST
