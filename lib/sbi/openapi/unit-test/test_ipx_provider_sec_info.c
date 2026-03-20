#ifndef ipx_provider_sec_info_TEST
#define ipx_provider_sec_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ipx_provider_sec_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ipx_provider_sec_info.h"
ipx_provider_sec_info_t* instantiate_ipx_provider_sec_info(int include_optional);



ipx_provider_sec_info_t* instantiate_ipx_provider_sec_info(int include_optional) {
  ipx_provider_sec_info_t* ipx_provider_sec_info = NULL;
  if (include_optional) {
    ipx_provider_sec_info = ipx_provider_sec_info_create(
      "a",
      list_createList(),
      list_createList()
    );
  } else {
    ipx_provider_sec_info = ipx_provider_sec_info_create(
      "a",
      list_createList(),
      list_createList()
    );
  }

  return ipx_provider_sec_info;
}


#ifdef ipx_provider_sec_info_MAIN

void test_ipx_provider_sec_info(int include_optional) {
    ipx_provider_sec_info_t* ipx_provider_sec_info_1 = instantiate_ipx_provider_sec_info(include_optional);

	cJSON* jsonipx_provider_sec_info_1 = ipx_provider_sec_info_convertToJSON(ipx_provider_sec_info_1);
	printf("ipx_provider_sec_info :\n%s\n", cJSON_Print(jsonipx_provider_sec_info_1));
	ipx_provider_sec_info_t* ipx_provider_sec_info_2 = ipx_provider_sec_info_parseFromJSON(jsonipx_provider_sec_info_1);
	cJSON* jsonipx_provider_sec_info_2 = ipx_provider_sec_info_convertToJSON(ipx_provider_sec_info_2);
	printf("repeating ipx_provider_sec_info:\n%s\n", cJSON_Print(jsonipx_provider_sec_info_2));
}

int main() {
  test_ipx_provider_sec_info(1);
  test_ipx_provider_sec_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ipx_provider_sec_info_MAIN
#endif // ipx_provider_sec_info_TEST
