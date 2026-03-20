#ifndef ip_multicast_address_info_TEST
#define ip_multicast_address_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_multicast_address_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_multicast_address_info.h"
ip_multicast_address_info_t* instantiate_ip_multicast_address_info(int include_optional);



ip_multicast_address_info_t* instantiate_ip_multicast_address_info(int include_optional) {
  ip_multicast_address_info_t* ip_multicast_address_info = NULL;
  if (include_optional) {
    ip_multicast_address_info = ip_multicast_address_info_create(
      "198.51.100.1",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    ip_multicast_address_info = ip_multicast_address_info_create(
      "198.51.100.1",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return ip_multicast_address_info;
}


#ifdef ip_multicast_address_info_MAIN

void test_ip_multicast_address_info(int include_optional) {
    ip_multicast_address_info_t* ip_multicast_address_info_1 = instantiate_ip_multicast_address_info(include_optional);

	cJSON* jsonip_multicast_address_info_1 = ip_multicast_address_info_convertToJSON(ip_multicast_address_info_1);
	printf("ip_multicast_address_info :\n%s\n", cJSON_Print(jsonip_multicast_address_info_1));
	ip_multicast_address_info_t* ip_multicast_address_info_2 = ip_multicast_address_info_parseFromJSON(jsonip_multicast_address_info_1);
	cJSON* jsonip_multicast_address_info_2 = ip_multicast_address_info_convertToJSON(ip_multicast_address_info_2);
	printf("repeating ip_multicast_address_info:\n%s\n", cJSON_Print(jsonip_multicast_address_info_2));
}

int main() {
  test_ip_multicast_address_info(1);
  test_ip_multicast_address_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_multicast_address_info_MAIN
#endif // ip_multicast_address_info_TEST
