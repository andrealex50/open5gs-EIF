#ifndef ipv6_prefix_range_TEST
#define ipv6_prefix_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ipv6_prefix_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ipv6_prefix_range.h"
ipv6_prefix_range_t* instantiate_ipv6_prefix_range(int include_optional);



ipv6_prefix_range_t* instantiate_ipv6_prefix_range(int include_optional) {
  ipv6_prefix_range_t* ipv6_prefix_range = NULL;
  if (include_optional) {
    ipv6_prefix_range = ipv6_prefix_range_create(
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64"
    );
  } else {
    ipv6_prefix_range = ipv6_prefix_range_create(
      "2001:db8:abcd:12::0/64",
      "2001:db8:abcd:12::0/64"
    );
  }

  return ipv6_prefix_range;
}


#ifdef ipv6_prefix_range_MAIN

void test_ipv6_prefix_range(int include_optional) {
    ipv6_prefix_range_t* ipv6_prefix_range_1 = instantiate_ipv6_prefix_range(include_optional);

	cJSON* jsonipv6_prefix_range_1 = ipv6_prefix_range_convertToJSON(ipv6_prefix_range_1);
	printf("ipv6_prefix_range :\n%s\n", cJSON_Print(jsonipv6_prefix_range_1));
	ipv6_prefix_range_t* ipv6_prefix_range_2 = ipv6_prefix_range_parseFromJSON(jsonipv6_prefix_range_1);
	cJSON* jsonipv6_prefix_range_2 = ipv6_prefix_range_convertToJSON(ipv6_prefix_range_2);
	printf("repeating ipv6_prefix_range:\n%s\n", cJSON_Print(jsonipv6_prefix_range_2));
}

int main() {
  test_ipv6_prefix_range(1);
  test_ipv6_prefix_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // ipv6_prefix_range_MAIN
#endif // ipv6_prefix_range_TEST
