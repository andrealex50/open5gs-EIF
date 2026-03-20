#ifndef ip_addr_1_TEST
#define ip_addr_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_addr_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_addr_1.h"
ip_addr_1_t* instantiate_ip_addr_1(int include_optional);



ip_addr_1_t* instantiate_ip_addr_1(int include_optional) {
  ip_addr_1_t* ip_addr_1 = NULL;
  if (include_optional) {
    ip_addr_1 = ip_addr_1_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "2001:db8:abcd:12::0/64"
    );
  } else {
    ip_addr_1 = ip_addr_1_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "2001:db8:abcd:12::0/64"
    );
  }

  return ip_addr_1;
}


#ifdef ip_addr_1_MAIN

void test_ip_addr_1(int include_optional) {
    ip_addr_1_t* ip_addr_1_1 = instantiate_ip_addr_1(include_optional);

	cJSON* jsonip_addr_1_1 = ip_addr_1_convertToJSON(ip_addr_1_1);
	printf("ip_addr_1 :\n%s\n", cJSON_Print(jsonip_addr_1_1));
	ip_addr_1_t* ip_addr_1_2 = ip_addr_1_parseFromJSON(jsonip_addr_1_1);
	cJSON* jsonip_addr_1_2 = ip_addr_1_convertToJSON(ip_addr_1_2);
	printf("repeating ip_addr_1:\n%s\n", cJSON_Print(jsonip_addr_1_2));
}

int main() {
  test_ip_addr_1(1);
  test_ip_addr_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_addr_1_MAIN
#endif // ip_addr_1_TEST
