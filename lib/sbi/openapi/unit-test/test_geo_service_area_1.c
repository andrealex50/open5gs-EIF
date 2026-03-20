#ifndef geo_service_area_1_TEST
#define geo_service_area_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define geo_service_area_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/geo_service_area_1.h"
geo_service_area_1_t* instantiate_geo_service_area_1(int include_optional);



geo_service_area_1_t* instantiate_geo_service_area_1(int include_optional) {
  geo_service_area_1_t* geo_service_area_1 = NULL;
  if (include_optional) {
    geo_service_area_1 = geo_service_area_1_create(
      list_createList(),
      list_createList()
    );
  } else {
    geo_service_area_1 = geo_service_area_1_create(
      list_createList(),
      list_createList()
    );
  }

  return geo_service_area_1;
}


#ifdef geo_service_area_1_MAIN

void test_geo_service_area_1(int include_optional) {
    geo_service_area_1_t* geo_service_area_1_1 = instantiate_geo_service_area_1(include_optional);

	cJSON* jsongeo_service_area_1_1 = geo_service_area_1_convertToJSON(geo_service_area_1_1);
	printf("geo_service_area_1 :\n%s\n", cJSON_Print(jsongeo_service_area_1_1));
	geo_service_area_1_t* geo_service_area_1_2 = geo_service_area_1_parseFromJSON(jsongeo_service_area_1_1);
	cJSON* jsongeo_service_area_1_2 = geo_service_area_1_convertToJSON(geo_service_area_1_2);
	printf("repeating geo_service_area_1:\n%s\n", cJSON_Print(jsongeo_service_area_1_2));
}

int main() {
  test_geo_service_area_1(1);
  test_geo_service_area_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // geo_service_area_1_MAIN
#endif // geo_service_area_1_TEST
