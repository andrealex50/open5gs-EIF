#ifndef snssai_route_selection_descriptor_TEST
#define snssai_route_selection_descriptor_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snssai_route_selection_descriptor_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snssai_route_selection_descriptor.h"
snssai_route_selection_descriptor_t* instantiate_snssai_route_selection_descriptor(int include_optional);

#include "test_snssai.c"


snssai_route_selection_descriptor_t* instantiate_snssai_route_selection_descriptor(int include_optional) {
  snssai_route_selection_descriptor_t* snssai_route_selection_descriptor = NULL;
  if (include_optional) {
    snssai_route_selection_descriptor = snssai_route_selection_descriptor_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList()
    );
  } else {
    snssai_route_selection_descriptor = snssai_route_selection_descriptor_create(
      NULL,
      list_createList()
    );
  }

  return snssai_route_selection_descriptor;
}


#ifdef snssai_route_selection_descriptor_MAIN

void test_snssai_route_selection_descriptor(int include_optional) {
    snssai_route_selection_descriptor_t* snssai_route_selection_descriptor_1 = instantiate_snssai_route_selection_descriptor(include_optional);

	cJSON* jsonsnssai_route_selection_descriptor_1 = snssai_route_selection_descriptor_convertToJSON(snssai_route_selection_descriptor_1);
	printf("snssai_route_selection_descriptor :\n%s\n", cJSON_Print(jsonsnssai_route_selection_descriptor_1));
	snssai_route_selection_descriptor_t* snssai_route_selection_descriptor_2 = snssai_route_selection_descriptor_parseFromJSON(jsonsnssai_route_selection_descriptor_1);
	cJSON* jsonsnssai_route_selection_descriptor_2 = snssai_route_selection_descriptor_convertToJSON(snssai_route_selection_descriptor_2);
	printf("repeating snssai_route_selection_descriptor:\n%s\n", cJSON_Print(jsonsnssai_route_selection_descriptor_2));
}

int main() {
  test_snssai_route_selection_descriptor(1);
  test_snssai_route_selection_descriptor(0);

  printf("Hello world \n");
  return 0;
}

#endif // snssai_route_selection_descriptor_MAIN
#endif // snssai_route_selection_descriptor_TEST
