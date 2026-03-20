#ifndef ip_sm_gw_registration_TEST
#define ip_sm_gw_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_sm_gw_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_sm_gw_registration.h"
ip_sm_gw_registration_t* instantiate_ip_sm_gw_registration(int include_optional);

#include "test_network_node_diameter_address.c"


ip_sm_gw_registration_t* instantiate_ip_sm_gw_registration(int include_optional) {
  ip_sm_gw_registration_t* ip_sm_gw_registration = NULL;
  if (include_optional) {
    ip_sm_gw_registration = ip_sm_gw_registration_create(
      "a",
       // false, not to have infinite recursion
      instantiate_network_node_diameter_address(0),
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      "0",
      1,
      list_createList(),
      1
    );
  } else {
    ip_sm_gw_registration = ip_sm_gw_registration_create(
      "a",
      NULL,
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      "0",
      1,
      list_createList(),
      1
    );
  }

  return ip_sm_gw_registration;
}


#ifdef ip_sm_gw_registration_MAIN

void test_ip_sm_gw_registration(int include_optional) {
    ip_sm_gw_registration_t* ip_sm_gw_registration_1 = instantiate_ip_sm_gw_registration(include_optional);

	cJSON* jsonip_sm_gw_registration_1 = ip_sm_gw_registration_convertToJSON(ip_sm_gw_registration_1);
	printf("ip_sm_gw_registration :\n%s\n", cJSON_Print(jsonip_sm_gw_registration_1));
	ip_sm_gw_registration_t* ip_sm_gw_registration_2 = ip_sm_gw_registration_parseFromJSON(jsonip_sm_gw_registration_1);
	cJSON* jsonip_sm_gw_registration_2 = ip_sm_gw_registration_convertToJSON(ip_sm_gw_registration_2);
	printf("repeating ip_sm_gw_registration:\n%s\n", cJSON_Print(jsonip_sm_gw_registration_2));
}

int main() {
  test_ip_sm_gw_registration(1);
  test_ip_sm_gw_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_sm_gw_registration_MAIN
#endif // ip_sm_gw_registration_TEST
