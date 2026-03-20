#ifndef scp_info_TEST
#define scp_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_info.h"
scp_info_t* instantiate_scp_info(int include_optional);



scp_info_t* instantiate_scp_info(int include_optional) {
  scp_info_t* scp_info = NULL;
  if (include_optional) {
    scp_info = scp_info_create(
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nrf_nfdiscovery_service_scp_info__IPV4,
      list_createList()
    );
  } else {
    scp_info = scp_info_create(
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nrf_nfdiscovery_service_scp_info__IPV4,
      list_createList()
    );
  }

  return scp_info;
}


#ifdef scp_info_MAIN

void test_scp_info(int include_optional) {
    scp_info_t* scp_info_1 = instantiate_scp_info(include_optional);

	cJSON* jsonscp_info_1 = scp_info_convertToJSON(scp_info_1);
	printf("scp_info :\n%s\n", cJSON_Print(jsonscp_info_1));
	scp_info_t* scp_info_2 = scp_info_parseFromJSON(jsonscp_info_1);
	cJSON* jsonscp_info_2 = scp_info_convertToJSON(scp_info_2);
	printf("repeating scp_info:\n%s\n", cJSON_Print(jsonscp_info_2));
}

int main() {
  test_scp_info(1);
  test_scp_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_info_MAIN
#endif // scp_info_TEST
