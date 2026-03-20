#ifndef spatial_validity_TEST
#define spatial_validity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define spatial_validity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/spatial_validity.h"
spatial_validity_t* instantiate_spatial_validity(int include_optional);



spatial_validity_t* instantiate_spatial_validity(int include_optional) {
  spatial_validity_t* spatial_validity = NULL;
  if (include_optional) {
    spatial_validity = spatial_validity_create(
      list_createList()
    );
  } else {
    spatial_validity = spatial_validity_create(
      list_createList()
    );
  }

  return spatial_validity;
}


#ifdef spatial_validity_MAIN

void test_spatial_validity(int include_optional) {
    spatial_validity_t* spatial_validity_1 = instantiate_spatial_validity(include_optional);

	cJSON* jsonspatial_validity_1 = spatial_validity_convertToJSON(spatial_validity_1);
	printf("spatial_validity :\n%s\n", cJSON_Print(jsonspatial_validity_1));
	spatial_validity_t* spatial_validity_2 = spatial_validity_parseFromJSON(jsonspatial_validity_1);
	cJSON* jsonspatial_validity_2 = spatial_validity_convertToJSON(spatial_validity_2);
	printf("repeating spatial_validity:\n%s\n", cJSON_Print(jsonspatial_validity_2));
}

int main() {
  test_spatial_validity(1);
  test_spatial_validity(0);

  printf("Hello world \n");
  return 0;
}

#endif // spatial_validity_MAIN
#endif // spatial_validity_TEST
