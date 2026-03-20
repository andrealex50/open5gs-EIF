#ifndef location_area_1_TEST
#define location_area_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_area_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_area_1.h"
location_area_1_t* instantiate_location_area_1(int include_optional);

#include "test_network_area_info_1.c"
#include "test_umt_time_1.c"


location_area_1_t* instantiate_location_area_1(int include_optional) {
  location_area_1_t* location_area_1 = NULL;
  if (include_optional) {
    location_area_1 = location_area_1_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_network_area_info_1(0),
       // false, not to have infinite recursion
      instantiate_umt_time_1(0)
    );
  } else {
    location_area_1 = location_area_1_create(
      list_createList(),
      list_createList(),
      NULL,
      NULL
    );
  }

  return location_area_1;
}


#ifdef location_area_1_MAIN

void test_location_area_1(int include_optional) {
    location_area_1_t* location_area_1_1 = instantiate_location_area_1(include_optional);

	cJSON* jsonlocation_area_1_1 = location_area_1_convertToJSON(location_area_1_1);
	printf("location_area_1 :\n%s\n", cJSON_Print(jsonlocation_area_1_1));
	location_area_1_t* location_area_1_2 = location_area_1_parseFromJSON(jsonlocation_area_1_1);
	cJSON* jsonlocation_area_1_2 = location_area_1_convertToJSON(location_area_1_2);
	printf("repeating location_area_1:\n%s\n", cJSON_Print(jsonlocation_area_1_2));
}

int main() {
  test_location_area_1(1);
  test_location_area_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_area_1_MAIN
#endif // location_area_1_TEST
