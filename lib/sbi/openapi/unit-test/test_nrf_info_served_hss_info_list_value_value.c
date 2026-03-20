#ifndef nrf_info_served_hss_info_list_value_value_TEST
#define nrf_info_served_hss_info_list_value_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nrf_info_served_hss_info_list_value_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nrf_info_served_hss_info_list_value_value.h"
nrf_info_served_hss_info_list_value_value_t* instantiate_nrf_info_served_hss_info_list_value_value(int include_optional);

#include "test_network_node_diameter_address.c"


nrf_info_served_hss_info_list_value_value_t* instantiate_nrf_info_served_hss_info_list_value_value(int include_optional) {
  nrf_info_served_hss_info_list_value_value_t* nrf_info_served_hss_info_list_value_value = NULL;
  if (include_optional) {
    nrf_info_served_hss_info_list_value_value = nrf_info_served_hss_info_list_value_value_create(
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
    nrf_info_served_hss_info_list_value_value = nrf_info_served_hss_info_list_value_value_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return nrf_info_served_hss_info_list_value_value;
}


#ifdef nrf_info_served_hss_info_list_value_value_MAIN

void test_nrf_info_served_hss_info_list_value_value(int include_optional) {
    nrf_info_served_hss_info_list_value_value_t* nrf_info_served_hss_info_list_value_value_1 = instantiate_nrf_info_served_hss_info_list_value_value(include_optional);

	cJSON* jsonnrf_info_served_hss_info_list_value_value_1 = nrf_info_served_hss_info_list_value_value_convertToJSON(nrf_info_served_hss_info_list_value_value_1);
	printf("nrf_info_served_hss_info_list_value_value :\n%s\n", cJSON_Print(jsonnrf_info_served_hss_info_list_value_value_1));
	nrf_info_served_hss_info_list_value_value_t* nrf_info_served_hss_info_list_value_value_2 = nrf_info_served_hss_info_list_value_value_parseFromJSON(jsonnrf_info_served_hss_info_list_value_value_1);
	cJSON* jsonnrf_info_served_hss_info_list_value_value_2 = nrf_info_served_hss_info_list_value_value_convertToJSON(nrf_info_served_hss_info_list_value_value_2);
	printf("repeating nrf_info_served_hss_info_list_value_value:\n%s\n", cJSON_Print(jsonnrf_info_served_hss_info_list_value_value_2));
}

int main() {
  test_nrf_info_served_hss_info_list_value_value(1);
  test_nrf_info_served_hss_info_list_value_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // nrf_info_served_hss_info_list_value_value_MAIN
#endif // nrf_info_served_hss_info_list_value_value_TEST
