#ifndef spatial_validity_rm_TEST
#define spatial_validity_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define spatial_validity_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/spatial_validity_rm.h"
spatial_validity_rm_t* instantiate_spatial_validity_rm(int include_optional);



spatial_validity_rm_t* instantiate_spatial_validity_rm(int include_optional) {
  spatial_validity_rm_t* spatial_validity_rm = NULL;
  if (include_optional) {
    spatial_validity_rm = spatial_validity_rm_create(
      list_createList()
    );
  } else {
    spatial_validity_rm = spatial_validity_rm_create(
      list_createList()
    );
  }

  return spatial_validity_rm;
}


#ifdef spatial_validity_rm_MAIN

void test_spatial_validity_rm(int include_optional) {
    spatial_validity_rm_t* spatial_validity_rm_1 = instantiate_spatial_validity_rm(include_optional);

	cJSON* jsonspatial_validity_rm_1 = spatial_validity_rm_convertToJSON(spatial_validity_rm_1);
	printf("spatial_validity_rm :\n%s\n", cJSON_Print(jsonspatial_validity_rm_1));
	spatial_validity_rm_t* spatial_validity_rm_2 = spatial_validity_rm_parseFromJSON(jsonspatial_validity_rm_1);
	cJSON* jsonspatial_validity_rm_2 = spatial_validity_rm_convertToJSON(spatial_validity_rm_2);
	printf("repeating spatial_validity_rm:\n%s\n", cJSON_Print(jsonspatial_validity_rm_2));
}

int main() {
  test_spatial_validity_rm(1);
  test_spatial_validity_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // spatial_validity_rm_MAIN
#endif // spatial_validity_rm_TEST
