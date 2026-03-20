#ifndef ipv4_address_range_TEST
#define ipv4_address_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ipv4_address_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ipv4_address_range.h"
ipv4_address_range_t* instantiate_ipv4_address_range(int include_optional);



ipv4_address_range_t* instantiate_ipv4_address_range(int include_optional) {
  ipv4_address_range_t* ipv4_address_range = NULL;
  if (include_optional) {
    ipv4_address_range = ipv4_address_range_create(
      "198.51.100.1",
      "198.51.100.1"
    );
  } else {
    ipv4_address_range = ipv4_address_range_create(
      "198.51.100.1",
      "198.51.100.1"
    );
  }

  return ipv4_address_range;
}


#ifdef ipv4_address_range_MAIN

void test_ipv4_address_range(int include_optional) {
    ipv4_address_range_t* ipv4_address_range_1 = instantiate_ipv4_address_range(include_optional);

	cJSON* jsonipv4_address_range_1 = ipv4_address_range_convertToJSON(ipv4_address_range_1);
	printf("ipv4_address_range :\n%s\n", cJSON_Print(jsonipv4_address_range_1));
	ipv4_address_range_t* ipv4_address_range_2 = ipv4_address_range_parseFromJSON(jsonipv4_address_range_1);
	cJSON* jsonipv4_address_range_2 = ipv4_address_range_convertToJSON(ipv4_address_range_2);
	printf("repeating ipv4_address_range:\n%s\n", cJSON_Print(jsonipv4_address_range_2));
}

int main() {
  test_ipv4_address_range(1);
  test_ipv4_address_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // ipv4_address_range_MAIN
#endif // ipv4_address_range_TEST
