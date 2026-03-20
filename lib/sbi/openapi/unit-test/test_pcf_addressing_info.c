#ifndef pcf_addressing_info_TEST
#define pcf_addressing_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_addressing_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_addressing_info.h"
pcf_addressing_info_t* instantiate_pcf_addressing_info(int include_optional);



pcf_addressing_info_t* instantiate_pcf_addressing_info(int include_optional) {
  pcf_addressing_info_t* pcf_addressing_info = NULL;
  if (include_optional) {
    pcf_addressing_info = pcf_addressing_info_create(
      "a",
      list_createList(),
      "0"
    );
  } else {
    pcf_addressing_info = pcf_addressing_info_create(
      "a",
      list_createList(),
      "0"
    );
  }

  return pcf_addressing_info;
}


#ifdef pcf_addressing_info_MAIN

void test_pcf_addressing_info(int include_optional) {
    pcf_addressing_info_t* pcf_addressing_info_1 = instantiate_pcf_addressing_info(include_optional);

	cJSON* jsonpcf_addressing_info_1 = pcf_addressing_info_convertToJSON(pcf_addressing_info_1);
	printf("pcf_addressing_info :\n%s\n", cJSON_Print(jsonpcf_addressing_info_1));
	pcf_addressing_info_t* pcf_addressing_info_2 = pcf_addressing_info_parseFromJSON(jsonpcf_addressing_info_1);
	cJSON* jsonpcf_addressing_info_2 = pcf_addressing_info_convertToJSON(pcf_addressing_info_2);
	printf("repeating pcf_addressing_info:\n%s\n", cJSON_Print(jsonpcf_addressing_info_2));
}

int main() {
  test_pcf_addressing_info(1);
  test_pcf_addressing_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_addressing_info_MAIN
#endif // pcf_addressing_info_TEST
