#ifndef pcf_selection_assistance_info_1_TEST
#define pcf_selection_assistance_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_selection_assistance_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_selection_assistance_info_1.h"
pcf_selection_assistance_info_1_t* instantiate_pcf_selection_assistance_info_1(int include_optional);

#include "test_snssai.c"


pcf_selection_assistance_info_1_t* instantiate_pcf_selection_assistance_info_1(int include_optional) {
  pcf_selection_assistance_info_1_t* pcf_selection_assistance_info_1 = NULL;
  if (include_optional) {
    pcf_selection_assistance_info_1 = pcf_selection_assistance_info_1_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    pcf_selection_assistance_info_1 = pcf_selection_assistance_info_1_create(
      "0",
      NULL
    );
  }

  return pcf_selection_assistance_info_1;
}


#ifdef pcf_selection_assistance_info_1_MAIN

void test_pcf_selection_assistance_info_1(int include_optional) {
    pcf_selection_assistance_info_1_t* pcf_selection_assistance_info_1_1 = instantiate_pcf_selection_assistance_info_1(include_optional);

	cJSON* jsonpcf_selection_assistance_info_1_1 = pcf_selection_assistance_info_1_convertToJSON(pcf_selection_assistance_info_1_1);
	printf("pcf_selection_assistance_info_1 :\n%s\n", cJSON_Print(jsonpcf_selection_assistance_info_1_1));
	pcf_selection_assistance_info_1_t* pcf_selection_assistance_info_1_2 = pcf_selection_assistance_info_1_parseFromJSON(jsonpcf_selection_assistance_info_1_1);
	cJSON* jsonpcf_selection_assistance_info_1_2 = pcf_selection_assistance_info_1_convertToJSON(pcf_selection_assistance_info_1_2);
	printf("repeating pcf_selection_assistance_info_1:\n%s\n", cJSON_Print(jsonpcf_selection_assistance_info_1_2));
}

int main() {
  test_pcf_selection_assistance_info_1(1);
  test_pcf_selection_assistance_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_selection_assistance_info_1_MAIN
#endif // pcf_selection_assistance_info_1_TEST
