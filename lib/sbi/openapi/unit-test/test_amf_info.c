#ifndef amf_info_TEST
#define amf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_info.h"
amf_info_t* instantiate_amf_info(int include_optional);

#include "test_n2_interface_amf_info.c"


amf_info_t* instantiate_amf_info(int include_optional) {
  amf_info_t* amf_info = NULL;
  if (include_optional) {
    amf_info = amf_info_create(
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_n2_interface_amf_info(0),
      1
    );
  } else {
    amf_info = amf_info_create(
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      1
    );
  }

  return amf_info;
}


#ifdef amf_info_MAIN

void test_amf_info(int include_optional) {
    amf_info_t* amf_info_1 = instantiate_amf_info(include_optional);

	cJSON* jsonamf_info_1 = amf_info_convertToJSON(amf_info_1);
	printf("amf_info :\n%s\n", cJSON_Print(jsonamf_info_1));
	amf_info_t* amf_info_2 = amf_info_parseFromJSON(jsonamf_info_1);
	cJSON* jsonamf_info_2 = amf_info_convertToJSON(amf_info_2);
	printf("repeating amf_info:\n%s\n", cJSON_Print(jsonamf_info_2));
}

int main() {
  test_amf_info(1);
  test_amf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_info_MAIN
#endif // amf_info_TEST
