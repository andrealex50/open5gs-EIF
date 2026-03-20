#ifndef nrf_info_served_pcf_info_value_TEST
#define nrf_info_served_pcf_info_value_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nrf_info_served_pcf_info_value_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nrf_info_served_pcf_info_value.h"
nrf_info_served_pcf_info_value_t* instantiate_nrf_info_served_pcf_info_value(int include_optional);

#include "test_pro_se_capability.c"
#include "test_v2x_capability.c"


nrf_info_served_pcf_info_value_t* instantiate_nrf_info_served_pcf_info_value(int include_optional) {
  nrf_info_served_pcf_info_value_t* nrf_info_served_pcf_info_value = NULL;
  if (include_optional) {
    nrf_info_served_pcf_info_value = nrf_info_served_pcf_info_value_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_pro_se_capability(0),
       // false, not to have infinite recursion
      instantiate_v2x_capability(0)
    );
  } else {
    nrf_info_served_pcf_info_value = nrf_info_served_pcf_info_value_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      1,
      NULL,
      NULL
    );
  }

  return nrf_info_served_pcf_info_value;
}


#ifdef nrf_info_served_pcf_info_value_MAIN

void test_nrf_info_served_pcf_info_value(int include_optional) {
    nrf_info_served_pcf_info_value_t* nrf_info_served_pcf_info_value_1 = instantiate_nrf_info_served_pcf_info_value(include_optional);

	cJSON* jsonnrf_info_served_pcf_info_value_1 = nrf_info_served_pcf_info_value_convertToJSON(nrf_info_served_pcf_info_value_1);
	printf("nrf_info_served_pcf_info_value :\n%s\n", cJSON_Print(jsonnrf_info_served_pcf_info_value_1));
	nrf_info_served_pcf_info_value_t* nrf_info_served_pcf_info_value_2 = nrf_info_served_pcf_info_value_parseFromJSON(jsonnrf_info_served_pcf_info_value_1);
	cJSON* jsonnrf_info_served_pcf_info_value_2 = nrf_info_served_pcf_info_value_convertToJSON(nrf_info_served_pcf_info_value_2);
	printf("repeating nrf_info_served_pcf_info_value:\n%s\n", cJSON_Print(jsonnrf_info_served_pcf_info_value_2));
}

int main() {
  test_nrf_info_served_pcf_info_value(1);
  test_nrf_info_served_pcf_info_value(0);

  printf("Hello world \n");
  return 0;
}

#endif // nrf_info_served_pcf_info_value_MAIN
#endif // nrf_info_served_pcf_info_value_TEST
