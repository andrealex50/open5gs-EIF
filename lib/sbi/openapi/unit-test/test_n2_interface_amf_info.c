#ifndef n2_interface_amf_info_TEST
#define n2_interface_amf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n2_interface_amf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n2_interface_amf_info.h"
n2_interface_amf_info_t* instantiate_n2_interface_amf_info(int include_optional);



n2_interface_amf_info_t* instantiate_n2_interface_amf_info(int include_optional) {
  n2_interface_amf_info_t* n2_interface_amf_info = NULL;
  if (include_optional) {
    n2_interface_amf_info = n2_interface_amf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    n2_interface_amf_info = n2_interface_amf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return n2_interface_amf_info;
}


#ifdef n2_interface_amf_info_MAIN

void test_n2_interface_amf_info(int include_optional) {
    n2_interface_amf_info_t* n2_interface_amf_info_1 = instantiate_n2_interface_amf_info(include_optional);

	cJSON* jsonn2_interface_amf_info_1 = n2_interface_amf_info_convertToJSON(n2_interface_amf_info_1);
	printf("n2_interface_amf_info :\n%s\n", cJSON_Print(jsonn2_interface_amf_info_1));
	n2_interface_amf_info_t* n2_interface_amf_info_2 = n2_interface_amf_info_parseFromJSON(jsonn2_interface_amf_info_1);
	cJSON* jsonn2_interface_amf_info_2 = n2_interface_amf_info_convertToJSON(n2_interface_amf_info_2);
	printf("repeating n2_interface_amf_info:\n%s\n", cJSON_Print(jsonn2_interface_amf_info_2));
}

int main() {
  test_n2_interface_amf_info(1);
  test_n2_interface_amf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // n2_interface_amf_info_MAIN
#endif // n2_interface_amf_info_TEST
