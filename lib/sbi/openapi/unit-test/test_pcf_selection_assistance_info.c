#ifndef pcf_selection_assistance_info_TEST
#define pcf_selection_assistance_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_selection_assistance_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_selection_assistance_info.h"
pcf_selection_assistance_info_t* instantiate_pcf_selection_assistance_info(int include_optional);

#include "test_snssai.c"


pcf_selection_assistance_info_t* instantiate_pcf_selection_assistance_info(int include_optional) {
  pcf_selection_assistance_info_t* pcf_selection_assistance_info = NULL;
  if (include_optional) {
    pcf_selection_assistance_info = pcf_selection_assistance_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    pcf_selection_assistance_info = pcf_selection_assistance_info_create(
      "0",
      NULL
    );
  }

  return pcf_selection_assistance_info;
}


#ifdef pcf_selection_assistance_info_MAIN

void test_pcf_selection_assistance_info(int include_optional) {
    pcf_selection_assistance_info_t* pcf_selection_assistance_info_1 = instantiate_pcf_selection_assistance_info(include_optional);

	cJSON* jsonpcf_selection_assistance_info_1 = pcf_selection_assistance_info_convertToJSON(pcf_selection_assistance_info_1);
	printf("pcf_selection_assistance_info :\n%s\n", cJSON_Print(jsonpcf_selection_assistance_info_1));
	pcf_selection_assistance_info_t* pcf_selection_assistance_info_2 = pcf_selection_assistance_info_parseFromJSON(jsonpcf_selection_assistance_info_1);
	cJSON* jsonpcf_selection_assistance_info_2 = pcf_selection_assistance_info_convertToJSON(pcf_selection_assistance_info_2);
	printf("repeating pcf_selection_assistance_info:\n%s\n", cJSON_Print(jsonpcf_selection_assistance_info_2));
}

int main() {
  test_pcf_selection_assistance_info(1);
  test_pcf_selection_assistance_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_selection_assistance_info_MAIN
#endif // pcf_selection_assistance_info_TEST
