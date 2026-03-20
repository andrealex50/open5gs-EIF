#ifndef pcscf_address_TEST
#define pcscf_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcscf_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcscf_address.h"
pcscf_address_t* instantiate_pcscf_address(int include_optional);



pcscf_address_t* instantiate_pcscf_address(int include_optional) {
  pcscf_address_t* pcscf_address = NULL;
  if (include_optional) {
    pcscf_address = pcscf_address_create(
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    pcscf_address = pcscf_address_create(
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return pcscf_address;
}


#ifdef pcscf_address_MAIN

void test_pcscf_address(int include_optional) {
    pcscf_address_t* pcscf_address_1 = instantiate_pcscf_address(include_optional);

	cJSON* jsonpcscf_address_1 = pcscf_address_convertToJSON(pcscf_address_1);
	printf("pcscf_address :\n%s\n", cJSON_Print(jsonpcscf_address_1));
	pcscf_address_t* pcscf_address_2 = pcscf_address_parseFromJSON(jsonpcscf_address_1);
	cJSON* jsonpcscf_address_2 = pcscf_address_convertToJSON(pcscf_address_2);
	printf("repeating pcscf_address:\n%s\n", cJSON_Print(jsonpcscf_address_2));
}

int main() {
  test_pcscf_address(1);
  test_pcscf_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcscf_address_MAIN
#endif // pcscf_address_TEST
