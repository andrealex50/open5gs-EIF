#ifndef pcf_for_ue_binding_TEST
#define pcf_for_ue_binding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_for_ue_binding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_for_ue_binding.h"
pcf_for_ue_binding_t* instantiate_pcf_for_ue_binding(int include_optional);



pcf_for_ue_binding_t* instantiate_pcf_for_ue_binding(int include_optional) {
  pcf_for_ue_binding_t* pcf_for_ue_binding = NULL;
  if (include_optional) {
    pcf_for_ue_binding = pcf_for_ue_binding_create(
      "a",
      "a",
      "a",
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_for_ue_binding__NF_SET,
      "a"
    );
  } else {
    pcf_for_ue_binding = pcf_for_ue_binding_create(
      "a",
      "a",
      "a",
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_for_ue_binding__NF_SET,
      "a"
    );
  }

  return pcf_for_ue_binding;
}


#ifdef pcf_for_ue_binding_MAIN

void test_pcf_for_ue_binding(int include_optional) {
    pcf_for_ue_binding_t* pcf_for_ue_binding_1 = instantiate_pcf_for_ue_binding(include_optional);

	cJSON* jsonpcf_for_ue_binding_1 = pcf_for_ue_binding_convertToJSON(pcf_for_ue_binding_1);
	printf("pcf_for_ue_binding :\n%s\n", cJSON_Print(jsonpcf_for_ue_binding_1));
	pcf_for_ue_binding_t* pcf_for_ue_binding_2 = pcf_for_ue_binding_parseFromJSON(jsonpcf_for_ue_binding_1);
	cJSON* jsonpcf_for_ue_binding_2 = pcf_for_ue_binding_convertToJSON(pcf_for_ue_binding_2);
	printf("repeating pcf_for_ue_binding:\n%s\n", cJSON_Print(jsonpcf_for_ue_binding_2));
}

int main() {
  test_pcf_for_ue_binding(1);
  test_pcf_for_ue_binding(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_for_ue_binding_MAIN
#endif // pcf_for_ue_binding_TEST
