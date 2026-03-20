#ifndef plmn_route_selection_descriptor_TEST
#define plmn_route_selection_descriptor_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_route_selection_descriptor_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_route_selection_descriptor.h"
plmn_route_selection_descriptor_t* instantiate_plmn_route_selection_descriptor(int include_optional);

#include "test_plmn_id_1.c"


plmn_route_selection_descriptor_t* instantiate_plmn_route_selection_descriptor(int include_optional) {
  plmn_route_selection_descriptor_t* plmn_route_selection_descriptor = NULL;
  if (include_optional) {
    plmn_route_selection_descriptor = plmn_route_selection_descriptor_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      list_createList()
    );
  } else {
    plmn_route_selection_descriptor = plmn_route_selection_descriptor_create(
      NULL,
      list_createList()
    );
  }

  return plmn_route_selection_descriptor;
}


#ifdef plmn_route_selection_descriptor_MAIN

void test_plmn_route_selection_descriptor(int include_optional) {
    plmn_route_selection_descriptor_t* plmn_route_selection_descriptor_1 = instantiate_plmn_route_selection_descriptor(include_optional);

	cJSON* jsonplmn_route_selection_descriptor_1 = plmn_route_selection_descriptor_convertToJSON(plmn_route_selection_descriptor_1);
	printf("plmn_route_selection_descriptor :\n%s\n", cJSON_Print(jsonplmn_route_selection_descriptor_1));
	plmn_route_selection_descriptor_t* plmn_route_selection_descriptor_2 = plmn_route_selection_descriptor_parseFromJSON(jsonplmn_route_selection_descriptor_1);
	cJSON* jsonplmn_route_selection_descriptor_2 = plmn_route_selection_descriptor_convertToJSON(plmn_route_selection_descriptor_2);
	printf("repeating plmn_route_selection_descriptor:\n%s\n", cJSON_Print(jsonplmn_route_selection_descriptor_2));
}

int main() {
  test_plmn_route_selection_descriptor(1);
  test_plmn_route_selection_descriptor(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_route_selection_descriptor_MAIN
#endif // plmn_route_selection_descriptor_TEST
