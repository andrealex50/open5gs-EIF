#ifndef pcf_mbs_binding_TEST
#define pcf_mbs_binding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_mbs_binding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_mbs_binding.h"
pcf_mbs_binding_t* instantiate_pcf_mbs_binding(int include_optional);

#include "test_mbs_session_id.c"


pcf_mbs_binding_t* instantiate_pcf_mbs_binding(int include_optional) {
  pcf_mbs_binding_t* pcf_mbs_binding = NULL;
  if (include_optional) {
    pcf_mbs_binding = pcf_mbs_binding_create(
       // false, not to have infinite recursion
      instantiate_mbs_session_id(0),
      "a",
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_mbs_binding__NF_SET,
      "2013-10-20T19:20:30+01:00",
      "a"
    );
  } else {
    pcf_mbs_binding = pcf_mbs_binding_create(
      NULL,
      "a",
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_mbs_binding__NF_SET,
      "2013-10-20T19:20:30+01:00",
      "a"
    );
  }

  return pcf_mbs_binding;
}


#ifdef pcf_mbs_binding_MAIN

void test_pcf_mbs_binding(int include_optional) {
    pcf_mbs_binding_t* pcf_mbs_binding_1 = instantiate_pcf_mbs_binding(include_optional);

	cJSON* jsonpcf_mbs_binding_1 = pcf_mbs_binding_convertToJSON(pcf_mbs_binding_1);
	printf("pcf_mbs_binding :\n%s\n", cJSON_Print(jsonpcf_mbs_binding_1));
	pcf_mbs_binding_t* pcf_mbs_binding_2 = pcf_mbs_binding_parseFromJSON(jsonpcf_mbs_binding_1);
	cJSON* jsonpcf_mbs_binding_2 = pcf_mbs_binding_convertToJSON(pcf_mbs_binding_2);
	printf("repeating pcf_mbs_binding:\n%s\n", cJSON_Print(jsonpcf_mbs_binding_2));
}

int main() {
  test_pcf_mbs_binding(1);
  test_pcf_mbs_binding(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_mbs_binding_MAIN
#endif // pcf_mbs_binding_TEST
