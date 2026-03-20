#ifndef pcf_binding_TEST
#define pcf_binding_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_binding_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_binding.h"
pcf_binding_t* instantiate_pcf_binding(int include_optional);

#include "test_snssai.c"
#include "test_parameter_combination.c"


pcf_binding_t* instantiate_pcf_binding(int include_optional) {
  pcf_binding_t* pcf_binding = NULL;
  if (include_optional) {
    pcf_binding = pcf_binding_create(
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "a",
      "a",
      "a",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_parameter_combination(0),
      nbsf_management_pcf_binding__NF_SET,
      list_createList(),
      list_createList()
    );
  } else {
    pcf_binding = pcf_binding_create(
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "0",
      "a",
      list_createList(),
      "a",
      "a",
      "a",
      list_createList(),
      NULL,
      "a",
      "0",
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL,
      nbsf_management_pcf_binding__NF_SET,
      list_createList(),
      list_createList()
    );
  }

  return pcf_binding;
}


#ifdef pcf_binding_MAIN

void test_pcf_binding(int include_optional) {
    pcf_binding_t* pcf_binding_1 = instantiate_pcf_binding(include_optional);

	cJSON* jsonpcf_binding_1 = pcf_binding_convertToJSON(pcf_binding_1);
	printf("pcf_binding :\n%s\n", cJSON_Print(jsonpcf_binding_1));
	pcf_binding_t* pcf_binding_2 = pcf_binding_parseFromJSON(jsonpcf_binding_1);
	cJSON* jsonpcf_binding_2 = pcf_binding_convertToJSON(pcf_binding_2);
	printf("repeating pcf_binding:\n%s\n", cJSON_Print(jsonpcf_binding_2));
}

int main() {
  test_pcf_binding(1);
  test_pcf_binding(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_binding_MAIN
#endif // pcf_binding_TEST
