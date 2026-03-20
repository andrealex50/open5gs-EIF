#ifndef route_to_location_TEST
#define route_to_location_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define route_to_location_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/route_to_location.h"
route_to_location_t* instantiate_route_to_location(int include_optional);

#include "test_route_information.c"


route_to_location_t* instantiate_route_to_location(int include_optional) {
  route_to_location_t* route_to_location = NULL;
  if (include_optional) {
    route_to_location = route_to_location_create(
      "0",
       // false, not to have infinite recursion
      instantiate_route_information(0),
      "0"
    );
  } else {
    route_to_location = route_to_location_create(
      "0",
      NULL,
      "0"
    );
  }

  return route_to_location;
}


#ifdef route_to_location_MAIN

void test_route_to_location(int include_optional) {
    route_to_location_t* route_to_location_1 = instantiate_route_to_location(include_optional);

	cJSON* jsonroute_to_location_1 = route_to_location_convertToJSON(route_to_location_1);
	printf("route_to_location :\n%s\n", cJSON_Print(jsonroute_to_location_1));
	route_to_location_t* route_to_location_2 = route_to_location_parseFromJSON(jsonroute_to_location_1);
	cJSON* jsonroute_to_location_2 = route_to_location_convertToJSON(route_to_location_2);
	printf("repeating route_to_location:\n%s\n", cJSON_Print(jsonroute_to_location_2));
}

int main() {
  test_route_to_location(1);
  test_route_to_location(0);

  printf("Hello world \n");
  return 0;
}

#endif // route_to_location_MAIN
#endif // route_to_location_TEST
