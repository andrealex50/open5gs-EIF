#ifndef bdt_policy_data_patch_TEST
#define bdt_policy_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_policy_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_policy_data_patch.h"
bdt_policy_data_patch_t* instantiate_bdt_policy_data_patch(int include_optional);



bdt_policy_data_patch_t* instantiate_bdt_policy_data_patch(int include_optional) {
  bdt_policy_data_patch_t* bdt_policy_data_patch = NULL;
  if (include_optional) {
    bdt_policy_data_patch = bdt_policy_data_patch_create(
      "0"
    );
  } else {
    bdt_policy_data_patch = bdt_policy_data_patch_create(
      "0"
    );
  }

  return bdt_policy_data_patch;
}


#ifdef bdt_policy_data_patch_MAIN

void test_bdt_policy_data_patch(int include_optional) {
    bdt_policy_data_patch_t* bdt_policy_data_patch_1 = instantiate_bdt_policy_data_patch(include_optional);

	cJSON* jsonbdt_policy_data_patch_1 = bdt_policy_data_patch_convertToJSON(bdt_policy_data_patch_1);
	printf("bdt_policy_data_patch :\n%s\n", cJSON_Print(jsonbdt_policy_data_patch_1));
	bdt_policy_data_patch_t* bdt_policy_data_patch_2 = bdt_policy_data_patch_parseFromJSON(jsonbdt_policy_data_patch_1);
	cJSON* jsonbdt_policy_data_patch_2 = bdt_policy_data_patch_convertToJSON(bdt_policy_data_patch_2);
	printf("repeating bdt_policy_data_patch:\n%s\n", cJSON_Print(jsonbdt_policy_data_patch_2));
}

int main() {
  test_bdt_policy_data_patch(1);
  test_bdt_policy_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_policy_data_patch_MAIN
#endif // bdt_policy_data_patch_TEST
