#ifndef authorized_network_slice_info_TEST
#define authorized_network_slice_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorized_network_slice_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorized_network_slice_info.h"
authorized_network_slice_info_t* instantiate_authorized_network_slice_info(int include_optional);

#include "test_nsi_information.c"


authorized_network_slice_info_t* instantiate_authorized_network_slice_info(int include_optional) {
  authorized_network_slice_info_t* authorized_network_slice_info = NULL;
  if (include_optional) {
    authorized_network_slice_info = authorized_network_slice_info_create(
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_nsi_information(0),
      "a",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      list_createList(),
      list_createList()
    );
  } else {
    authorized_network_slice_info = authorized_network_slice_info_create(
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      "a",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      list_createList(),
      list_createList()
    );
  }

  return authorized_network_slice_info;
}


#ifdef authorized_network_slice_info_MAIN

void test_authorized_network_slice_info(int include_optional) {
    authorized_network_slice_info_t* authorized_network_slice_info_1 = instantiate_authorized_network_slice_info(include_optional);

	cJSON* jsonauthorized_network_slice_info_1 = authorized_network_slice_info_convertToJSON(authorized_network_slice_info_1);
	printf("authorized_network_slice_info :\n%s\n", cJSON_Print(jsonauthorized_network_slice_info_1));
	authorized_network_slice_info_t* authorized_network_slice_info_2 = authorized_network_slice_info_parseFromJSON(jsonauthorized_network_slice_info_1);
	cJSON* jsonauthorized_network_slice_info_2 = authorized_network_slice_info_convertToJSON(authorized_network_slice_info_2);
	printf("repeating authorized_network_slice_info:\n%s\n", cJSON_Print(jsonauthorized_network_slice_info_2));
}

int main() {
  test_authorized_network_slice_info(1);
  test_authorized_network_slice_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorized_network_slice_info_MAIN
#endif // authorized_network_slice_info_TEST
