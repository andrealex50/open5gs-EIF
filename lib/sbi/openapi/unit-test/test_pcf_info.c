#ifndef pcf_info_TEST
#define pcf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_info.h"
pcf_info_t* instantiate_pcf_info(int include_optional);

#include "test_pro_se_capability.c"
#include "test_v2x_capability.c"


pcf_info_t* instantiate_pcf_info(int include_optional) {
  pcf_info_t* pcf_info = NULL;
  if (include_optional) {
    pcf_info = pcf_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_pro_se_capability(0),
       // false, not to have infinite recursion
      instantiate_v2x_capability(0)
    );
  } else {
    pcf_info = pcf_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
      NULL,
      NULL
    );
  }

  return pcf_info;
}


#ifdef pcf_info_MAIN

void test_pcf_info(int include_optional) {
    pcf_info_t* pcf_info_1 = instantiate_pcf_info(include_optional);

	cJSON* jsonpcf_info_1 = pcf_info_convertToJSON(pcf_info_1);
	printf("pcf_info :\n%s\n", cJSON_Print(jsonpcf_info_1));
	pcf_info_t* pcf_info_2 = pcf_info_parseFromJSON(jsonpcf_info_1);
	cJSON* jsonpcf_info_2 = pcf_info_convertToJSON(pcf_info_2);
	printf("repeating pcf_info:\n%s\n", cJSON_Print(jsonpcf_info_2));
}

int main() {
  test_pcf_info(1);
  test_pcf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_info_MAIN
#endif // pcf_info_TEST
