#ifndef pcf_mbs_binding_patch_TEST
#define pcf_mbs_binding_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_mbs_binding_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_mbs_binding_patch.h"
pcf_mbs_binding_patch_t* instantiate_pcf_mbs_binding_patch(int include_optional);



pcf_mbs_binding_patch_t* instantiate_pcf_mbs_binding_patch(int include_optional) {
  pcf_mbs_binding_patch_t* pcf_mbs_binding_patch = NULL;
  if (include_optional) {
    pcf_mbs_binding_patch = pcf_mbs_binding_patch_create(
      "a",
      list_createList(),
      "0"
    );
  } else {
    pcf_mbs_binding_patch = pcf_mbs_binding_patch_create(
      "a",
      list_createList(),
      "0"
    );
  }

  return pcf_mbs_binding_patch;
}


#ifdef pcf_mbs_binding_patch_MAIN

void test_pcf_mbs_binding_patch(int include_optional) {
    pcf_mbs_binding_patch_t* pcf_mbs_binding_patch_1 = instantiate_pcf_mbs_binding_patch(include_optional);

	cJSON* jsonpcf_mbs_binding_patch_1 = pcf_mbs_binding_patch_convertToJSON(pcf_mbs_binding_patch_1);
	printf("pcf_mbs_binding_patch :\n%s\n", cJSON_Print(jsonpcf_mbs_binding_patch_1));
	pcf_mbs_binding_patch_t* pcf_mbs_binding_patch_2 = pcf_mbs_binding_patch_parseFromJSON(jsonpcf_mbs_binding_patch_1);
	cJSON* jsonpcf_mbs_binding_patch_2 = pcf_mbs_binding_patch_convertToJSON(pcf_mbs_binding_patch_2);
	printf("repeating pcf_mbs_binding_patch:\n%s\n", cJSON_Print(jsonpcf_mbs_binding_patch_2));
}

int main() {
  test_pcf_mbs_binding_patch(1);
  test_pcf_mbs_binding_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_mbs_binding_patch_MAIN
#endif // pcf_mbs_binding_patch_TEST
