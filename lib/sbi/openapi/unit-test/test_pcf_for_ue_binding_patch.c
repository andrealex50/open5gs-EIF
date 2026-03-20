#ifndef pcf_for_ue_binding_patch_TEST
#define pcf_for_ue_binding_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_for_ue_binding_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_for_ue_binding_patch.h"
pcf_for_ue_binding_patch_t* instantiate_pcf_for_ue_binding_patch(int include_optional);



pcf_for_ue_binding_patch_t* instantiate_pcf_for_ue_binding_patch(int include_optional) {
  pcf_for_ue_binding_patch_t* pcf_for_ue_binding_patch = NULL;
  if (include_optional) {
    pcf_for_ue_binding_patch = pcf_for_ue_binding_patch_create(
      "a",
      list_createList(),
      "0"
    );
  } else {
    pcf_for_ue_binding_patch = pcf_for_ue_binding_patch_create(
      "a",
      list_createList(),
      "0"
    );
  }

  return pcf_for_ue_binding_patch;
}


#ifdef pcf_for_ue_binding_patch_MAIN

void test_pcf_for_ue_binding_patch(int include_optional) {
    pcf_for_ue_binding_patch_t* pcf_for_ue_binding_patch_1 = instantiate_pcf_for_ue_binding_patch(include_optional);

	cJSON* jsonpcf_for_ue_binding_patch_1 = pcf_for_ue_binding_patch_convertToJSON(pcf_for_ue_binding_patch_1);
	printf("pcf_for_ue_binding_patch :\n%s\n", cJSON_Print(jsonpcf_for_ue_binding_patch_1));
	pcf_for_ue_binding_patch_t* pcf_for_ue_binding_patch_2 = pcf_for_ue_binding_patch_parseFromJSON(jsonpcf_for_ue_binding_patch_1);
	cJSON* jsonpcf_for_ue_binding_patch_2 = pcf_for_ue_binding_patch_convertToJSON(pcf_for_ue_binding_patch_2);
	printf("repeating pcf_for_ue_binding_patch:\n%s\n", cJSON_Print(jsonpcf_for_ue_binding_patch_2));
}

int main() {
  test_pcf_for_ue_binding_patch(1);
  test_pcf_for_ue_binding_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_for_ue_binding_patch_MAIN
#endif // pcf_for_ue_binding_patch_TEST
