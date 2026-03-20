#ifndef ue_policy_set_patch_TEST
#define ue_policy_set_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_policy_set_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_policy_set_patch.h"
ue_policy_set_patch_t* instantiate_ue_policy_set_patch(int include_optional);



ue_policy_set_patch_t* instantiate_ue_policy_set_patch(int include_optional) {
  ue_policy_set_patch_t* ue_policy_set_patch = NULL;
  if (include_optional) {
    ue_policy_set_patch = ue_policy_set_patch_create(
      list_createList(),
      list_createList(),
      1,
      "a",
      list_createList()
    );
  } else {
    ue_policy_set_patch = ue_policy_set_patch_create(
      list_createList(),
      list_createList(),
      1,
      "a",
      list_createList()
    );
  }

  return ue_policy_set_patch;
}


#ifdef ue_policy_set_patch_MAIN

void test_ue_policy_set_patch(int include_optional) {
    ue_policy_set_patch_t* ue_policy_set_patch_1 = instantiate_ue_policy_set_patch(include_optional);

	cJSON* jsonue_policy_set_patch_1 = ue_policy_set_patch_convertToJSON(ue_policy_set_patch_1);
	printf("ue_policy_set_patch :\n%s\n", cJSON_Print(jsonue_policy_set_patch_1));
	ue_policy_set_patch_t* ue_policy_set_patch_2 = ue_policy_set_patch_parseFromJSON(jsonue_policy_set_patch_1);
	cJSON* jsonue_policy_set_patch_2 = ue_policy_set_patch_convertToJSON(ue_policy_set_patch_2);
	printf("repeating ue_policy_set_patch:\n%s\n", cJSON_Print(jsonue_policy_set_patch_2));
}

int main() {
  test_ue_policy_set_patch(1);
  test_ue_policy_set_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_policy_set_patch_MAIN
#endif // ue_policy_set_patch_TEST
