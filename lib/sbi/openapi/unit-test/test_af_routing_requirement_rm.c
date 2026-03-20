#ifndef af_routing_requirement_rm_TEST
#define af_routing_requirement_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_routing_requirement_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_routing_requirement_rm.h"
af_routing_requirement_rm_t* instantiate_af_routing_requirement_rm(int include_optional);

#include "test_spatial_validity_rm.c"
#include "test_up_path_chg_event.c"


af_routing_requirement_rm_t* instantiate_af_routing_requirement_rm(int include_optional) {
  af_routing_requirement_rm_t* af_routing_requirement_rm = NULL;
  if (include_optional) {
    af_routing_requirement_rm = af_routing_requirement_rm_create(
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_spatial_validity_rm(0),
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
    af_routing_requirement_rm = af_routing_requirement_rm_create(
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

  return af_routing_requirement_rm;
}


#ifdef af_routing_requirement_rm_MAIN

void test_af_routing_requirement_rm(int include_optional) {
    af_routing_requirement_rm_t* af_routing_requirement_rm_1 = instantiate_af_routing_requirement_rm(include_optional);

	cJSON* jsonaf_routing_requirement_rm_1 = af_routing_requirement_rm_convertToJSON(af_routing_requirement_rm_1);
	printf("af_routing_requirement_rm :\n%s\n", cJSON_Print(jsonaf_routing_requirement_rm_1));
	af_routing_requirement_rm_t* af_routing_requirement_rm_2 = af_routing_requirement_rm_parseFromJSON(jsonaf_routing_requirement_rm_1);
	cJSON* jsonaf_routing_requirement_rm_2 = af_routing_requirement_rm_convertToJSON(af_routing_requirement_rm_2);
	printf("repeating af_routing_requirement_rm:\n%s\n", cJSON_Print(jsonaf_routing_requirement_rm_2));
}

int main() {
  test_af_routing_requirement_rm(1);
  test_af_routing_requirement_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_routing_requirement_rm_MAIN
#endif // af_routing_requirement_rm_TEST
