#ifndef nrf_info_TEST
#define nrf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nrf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nrf_info.h"
nrf_info_t* instantiate_nrf_info(int include_optional);



nrf_info_t* instantiate_nrf_info(int include_optional) {
  nrf_info_t* nrf_info = NULL;
  if (include_optional) {
    nrf_info = nrf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    nrf_info = nrf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return nrf_info;
}


#ifdef nrf_info_MAIN

void test_nrf_info(int include_optional) {
    nrf_info_t* nrf_info_1 = instantiate_nrf_info(include_optional);

	cJSON* jsonnrf_info_1 = nrf_info_convertToJSON(nrf_info_1);
	printf("nrf_info :\n%s\n", cJSON_Print(jsonnrf_info_1));
	nrf_info_t* nrf_info_2 = nrf_info_parseFromJSON(jsonnrf_info_1);
	cJSON* jsonnrf_info_2 = nrf_info_convertToJSON(nrf_info_2);
	printf("repeating nrf_info:\n%s\n", cJSON_Print(jsonnrf_info_2));
}

int main() {
  test_nrf_info(1);
  test_nrf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nrf_info_MAIN
#endif // nrf_info_TEST
