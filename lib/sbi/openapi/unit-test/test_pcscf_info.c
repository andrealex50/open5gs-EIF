#ifndef pcscf_info_TEST
#define pcscf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcscf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcscf_info.h"
pcscf_info_t* instantiate_pcscf_info(int include_optional);



pcscf_info_t* instantiate_pcscf_info(int include_optional) {
  pcscf_info_t* pcscf_info = NULL;
  if (include_optional) {
    pcscf_info = pcscf_info_create(
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    pcscf_info = pcscf_info_create(
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return pcscf_info;
}


#ifdef pcscf_info_MAIN

void test_pcscf_info(int include_optional) {
    pcscf_info_t* pcscf_info_1 = instantiate_pcscf_info(include_optional);

	cJSON* jsonpcscf_info_1 = pcscf_info_convertToJSON(pcscf_info_1);
	printf("pcscf_info :\n%s\n", cJSON_Print(jsonpcscf_info_1));
	pcscf_info_t* pcscf_info_2 = pcscf_info_parseFromJSON(jsonpcscf_info_1);
	cJSON* jsonpcscf_info_2 = pcscf_info_convertToJSON(pcscf_info_2);
	printf("repeating pcscf_info:\n%s\n", cJSON_Print(jsonpcscf_info_2));
}

int main() {
  test_pcscf_info(1);
  test_pcscf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcscf_info_MAIN
#endif // pcscf_info_TEST
