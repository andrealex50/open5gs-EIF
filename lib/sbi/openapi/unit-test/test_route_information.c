#ifndef route_information_TEST
#define route_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define route_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/route_information.h"
route_information_t* instantiate_route_information(int include_optional);



route_information_t* instantiate_route_information(int include_optional) {
  route_information_t* route_information = NULL;
  if (include_optional) {
    route_information = route_information_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      0
    );
  } else {
    route_information = route_information_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      0
    );
  }

  return route_information;
}


#ifdef route_information_MAIN

void test_route_information(int include_optional) {
    route_information_t* route_information_1 = instantiate_route_information(include_optional);

	cJSON* jsonroute_information_1 = route_information_convertToJSON(route_information_1);
	printf("route_information :\n%s\n", cJSON_Print(jsonroute_information_1));
	route_information_t* route_information_2 = route_information_parseFromJSON(jsonroute_information_1);
	cJSON* jsonroute_information_2 = route_information_convertToJSON(route_information_2);
	printf("repeating route_information:\n%s\n", cJSON_Print(jsonroute_information_2));
}

int main() {
  test_route_information(1);
  test_route_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // route_information_MAIN
#endif // route_information_TEST
