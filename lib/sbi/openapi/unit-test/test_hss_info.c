#ifndef hss_info_TEST
#define hss_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_info.h"
hss_info_t* instantiate_hss_info(int include_optional);

#include "test_network_node_diameter_address.c"


hss_info_t* instantiate_hss_info(int include_optional) {
  hss_info_t* hss_info = NULL;
  if (include_optional) {
    hss_info = hss_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_network_node_diameter_address(0)
    );
  } else {
    hss_info = hss_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return hss_info;
}


#ifdef hss_info_MAIN

void test_hss_info(int include_optional) {
    hss_info_t* hss_info_1 = instantiate_hss_info(include_optional);

	cJSON* jsonhss_info_1 = hss_info_convertToJSON(hss_info_1);
	printf("hss_info :\n%s\n", cJSON_Print(jsonhss_info_1));
	hss_info_t* hss_info_2 = hss_info_parseFromJSON(jsonhss_info_1);
	cJSON* jsonhss_info_2 = hss_info_convertToJSON(hss_info_2);
	printf("repeating hss_info:\n%s\n", cJSON_Print(jsonhss_info_2));
}

int main() {
  test_hss_info(1);
  test_hss_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_info_MAIN
#endif // hss_info_TEST
