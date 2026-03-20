#ifndef route_selection_parameter_set_TEST
#define route_selection_parameter_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define route_selection_parameter_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/route_selection_parameter_set.h"
route_selection_parameter_set_t* instantiate_route_selection_parameter_set(int include_optional);

#include "test_snssai.c"


route_selection_parameter_set_t* instantiate_route_selection_parameter_set(int include_optional) {
  route_selection_parameter_set_t* route_selection_parameter_set = NULL;
  if (include_optional) {
    route_selection_parameter_set = route_selection_parameter_set_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      0,
      list_createList(),
      list_createList()
    );
  } else {
    route_selection_parameter_set = route_selection_parameter_set_create(
      "0",
      NULL,
      0,
      list_createList(),
      list_createList()
    );
  }

  return route_selection_parameter_set;
}


#ifdef route_selection_parameter_set_MAIN

void test_route_selection_parameter_set(int include_optional) {
    route_selection_parameter_set_t* route_selection_parameter_set_1 = instantiate_route_selection_parameter_set(include_optional);

	cJSON* jsonroute_selection_parameter_set_1 = route_selection_parameter_set_convertToJSON(route_selection_parameter_set_1);
	printf("route_selection_parameter_set :\n%s\n", cJSON_Print(jsonroute_selection_parameter_set_1));
	route_selection_parameter_set_t* route_selection_parameter_set_2 = route_selection_parameter_set_parseFromJSON(jsonroute_selection_parameter_set_1);
	cJSON* jsonroute_selection_parameter_set_2 = route_selection_parameter_set_convertToJSON(route_selection_parameter_set_2);
	printf("repeating route_selection_parameter_set:\n%s\n", cJSON_Print(jsonroute_selection_parameter_set_2));
}

int main() {
  test_route_selection_parameter_set(1);
  test_route_selection_parameter_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // route_selection_parameter_set_MAIN
#endif // route_selection_parameter_set_TEST
