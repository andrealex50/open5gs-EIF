#ifndef sms_router_info_TEST
#define sms_router_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sms_router_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sms_router_info.h"
sms_router_info_t* instantiate_sms_router_info(int include_optional);

#include "test_network_node_diameter_address.c"


sms_router_info_t* instantiate_sms_router_info(int include_optional) {
  sms_router_info_t* sms_router_info = NULL;
  if (include_optional) {
    sms_router_info = sms_router_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_network_node_diameter_address(0),
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  } else {
    sms_router_info = sms_router_info_create(
      "0",
      NULL,
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  }

  return sms_router_info;
}


#ifdef sms_router_info_MAIN

void test_sms_router_info(int include_optional) {
    sms_router_info_t* sms_router_info_1 = instantiate_sms_router_info(include_optional);

	cJSON* jsonsms_router_info_1 = sms_router_info_convertToJSON(sms_router_info_1);
	printf("sms_router_info :\n%s\n", cJSON_Print(jsonsms_router_info_1));
	sms_router_info_t* sms_router_info_2 = sms_router_info_parseFromJSON(jsonsms_router_info_1);
	cJSON* jsonsms_router_info_2 = sms_router_info_convertToJSON(sms_router_info_2);
	printf("repeating sms_router_info:\n%s\n", cJSON_Print(jsonsms_router_info_2));
}

int main() {
  test_sms_router_info(1);
  test_sms_router_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // sms_router_info_MAIN
#endif // sms_router_info_TEST
