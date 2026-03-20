#ifndef pcf_binding_patch_TEST
#define pcf_binding_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_binding_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_binding_patch.h"
pcf_binding_patch_t* instantiate_pcf_binding_patch(int include_optional);



pcf_binding_patch_t* instantiate_pcf_binding_patch(int include_optional) {
  pcf_binding_patch_t* pcf_binding_patch = NULL;
  if (include_optional) {
    pcf_binding_patch = pcf_binding_patch_create(
      "198.51.100.1",
      "0",
      "0",
      list_createList(),
      "a",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "a",
      "a"
    );
  } else {
    pcf_binding_patch = pcf_binding_patch_create(
      "198.51.100.1",
      "0",
      "0",
      list_createList(),
      "a",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "a",
      "a"
    );
  }

  return pcf_binding_patch;
}


#ifdef pcf_binding_patch_MAIN

void test_pcf_binding_patch(int include_optional) {
    pcf_binding_patch_t* pcf_binding_patch_1 = instantiate_pcf_binding_patch(include_optional);

	cJSON* jsonpcf_binding_patch_1 = pcf_binding_patch_convertToJSON(pcf_binding_patch_1);
	printf("pcf_binding_patch :\n%s\n", cJSON_Print(jsonpcf_binding_patch_1));
	pcf_binding_patch_t* pcf_binding_patch_2 = pcf_binding_patch_parseFromJSON(jsonpcf_binding_patch_1);
	cJSON* jsonpcf_binding_patch_2 = pcf_binding_patch_convertToJSON(pcf_binding_patch_2);
	printf("repeating pcf_binding_patch:\n%s\n", cJSON_Print(jsonpcf_binding_patch_2));
}

int main() {
  test_pcf_binding_patch(1);
  test_pcf_binding_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_binding_patch_MAIN
#endif // pcf_binding_patch_TEST
