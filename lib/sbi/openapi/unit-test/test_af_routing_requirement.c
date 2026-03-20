#ifndef af_routing_requirement_TEST
#define af_routing_requirement_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_routing_requirement_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_routing_requirement.h"
af_routing_requirement_t* instantiate_af_routing_requirement(int include_optional);

#include "test_spatial_validity.c"
#include "test_up_path_chg_event.c"


af_routing_requirement_t* instantiate_af_routing_requirement(int include_optional) {
  af_routing_requirement_t* af_routing_requirement = NULL;
  if (include_optional) {
    af_routing_requirement = af_routing_requirement_create(
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_spatial_validity(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_up_path_chg_event(0),
      1,
      1,
      56,
      list_createList(),
      1,
      0
    );
  } else {
    af_routing_requirement = af_routing_requirement_create(
      1,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      1,
      1,
      56,
      list_createList(),
      1,
      0
    );
  }

  return af_routing_requirement;
}


#ifdef af_routing_requirement_MAIN

void test_af_routing_requirement(int include_optional) {
    af_routing_requirement_t* af_routing_requirement_1 = instantiate_af_routing_requirement(include_optional);

	cJSON* jsonaf_routing_requirement_1 = af_routing_requirement_convertToJSON(af_routing_requirement_1);
	printf("af_routing_requirement :\n%s\n", cJSON_Print(jsonaf_routing_requirement_1));
	af_routing_requirement_t* af_routing_requirement_2 = af_routing_requirement_parseFromJSON(jsonaf_routing_requirement_1);
	cJSON* jsonaf_routing_requirement_2 = af_routing_requirement_convertToJSON(af_routing_requirement_2);
	printf("repeating af_routing_requirement:\n%s\n", cJSON_Print(jsonaf_routing_requirement_2));
}

int main() {
  test_af_routing_requirement(1);
  test_af_routing_requirement(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_routing_requirement_MAIN
#endif // af_routing_requirement_TEST
