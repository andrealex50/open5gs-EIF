#ifndef spatial_validity_cond_1_TEST
#define spatial_validity_cond_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define spatial_validity_cond_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/spatial_validity_cond_1.h"
spatial_validity_cond_1_t* instantiate_spatial_validity_cond_1(int include_optional);

#include "test_geo_service_area_1.c"


spatial_validity_cond_1_t* instantiate_spatial_validity_cond_1(int include_optional) {
  spatial_validity_cond_1_t* spatial_validity_cond_1 = NULL;
  if (include_optional) {
    spatial_validity_cond_1 = spatial_validity_cond_1_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_geo_service_area_1(0)
    );
  } else {
    spatial_validity_cond_1 = spatial_validity_cond_1_create(
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return spatial_validity_cond_1;
}


#ifdef spatial_validity_cond_1_MAIN

void test_spatial_validity_cond_1(int include_optional) {
    spatial_validity_cond_1_t* spatial_validity_cond_1_1 = instantiate_spatial_validity_cond_1(include_optional);

	cJSON* jsonspatial_validity_cond_1_1 = spatial_validity_cond_1_convertToJSON(spatial_validity_cond_1_1);
	printf("spatial_validity_cond_1 :\n%s\n", cJSON_Print(jsonspatial_validity_cond_1_1));
	spatial_validity_cond_1_t* spatial_validity_cond_1_2 = spatial_validity_cond_1_parseFromJSON(jsonspatial_validity_cond_1_1);
	cJSON* jsonspatial_validity_cond_1_2 = spatial_validity_cond_1_convertToJSON(spatial_validity_cond_1_2);
	printf("repeating spatial_validity_cond_1:\n%s\n", cJSON_Print(jsonspatial_validity_cond_1_2));
}

int main() {
  test_spatial_validity_cond_1(1);
  test_spatial_validity_cond_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // spatial_validity_cond_1_MAIN
#endif // spatial_validity_cond_1_TEST
