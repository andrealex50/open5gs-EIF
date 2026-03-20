#ifndef spatial_validity_cond_TEST
#define spatial_validity_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define spatial_validity_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/spatial_validity_cond.h"
spatial_validity_cond_t* instantiate_spatial_validity_cond(int include_optional);

#include "test_geo_service_area.c"


spatial_validity_cond_t* instantiate_spatial_validity_cond(int include_optional) {
  spatial_validity_cond_t* spatial_validity_cond = NULL;
  if (include_optional) {
    spatial_validity_cond = spatial_validity_cond_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_geo_service_area(0)
    );
  } else {
    spatial_validity_cond = spatial_validity_cond_create(
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return spatial_validity_cond;
}


#ifdef spatial_validity_cond_MAIN

void test_spatial_validity_cond(int include_optional) {
    spatial_validity_cond_t* spatial_validity_cond_1 = instantiate_spatial_validity_cond(include_optional);

	cJSON* jsonspatial_validity_cond_1 = spatial_validity_cond_convertToJSON(spatial_validity_cond_1);
	printf("spatial_validity_cond :\n%s\n", cJSON_Print(jsonspatial_validity_cond_1));
	spatial_validity_cond_t* spatial_validity_cond_2 = spatial_validity_cond_parseFromJSON(jsonspatial_validity_cond_1);
	cJSON* jsonspatial_validity_cond_2 = spatial_validity_cond_convertToJSON(spatial_validity_cond_2);
	printf("repeating spatial_validity_cond:\n%s\n", cJSON_Print(jsonspatial_validity_cond_2));
}

int main() {
  test_spatial_validity_cond(1);
  test_spatial_validity_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // spatial_validity_cond_MAIN
#endif // spatial_validity_cond_TEST
