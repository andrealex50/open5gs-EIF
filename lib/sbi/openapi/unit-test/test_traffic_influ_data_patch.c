#ifndef traffic_influ_data_patch_TEST
#define traffic_influ_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_influ_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_influ_data_patch.h"
traffic_influ_data_patch_t* instantiate_traffic_influ_data_patch(int include_optional);

#include "test_network_area_info_2.c"


traffic_influ_data_patch_t* instantiate_traffic_influ_data_patch(int include_optional) {
  traffic_influ_data_patch_t* traffic_influ_data_patch = NULL;
  if (include_optional) {
    traffic_influ_data_patch = traffic_influ_data_patch_create(
      "0",
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_network_area_info_2(0),
      "0",
      list_createList(),
      1,
      1,
      0,
      1,
      56
    );
  } else {
    traffic_influ_data_patch = traffic_influ_data_patch_create(
      "0",
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      NULL,
      "0",
      list_createList(),
      1,
      1,
      0,
      1,
      56
    );
  }

  return traffic_influ_data_patch;
}


#ifdef traffic_influ_data_patch_MAIN

void test_traffic_influ_data_patch(int include_optional) {
    traffic_influ_data_patch_t* traffic_influ_data_patch_1 = instantiate_traffic_influ_data_patch(include_optional);

	cJSON* jsontraffic_influ_data_patch_1 = traffic_influ_data_patch_convertToJSON(traffic_influ_data_patch_1);
	printf("traffic_influ_data_patch :\n%s\n", cJSON_Print(jsontraffic_influ_data_patch_1));
	traffic_influ_data_patch_t* traffic_influ_data_patch_2 = traffic_influ_data_patch_parseFromJSON(jsontraffic_influ_data_patch_1);
	cJSON* jsontraffic_influ_data_patch_2 = traffic_influ_data_patch_convertToJSON(traffic_influ_data_patch_2);
	printf("repeating traffic_influ_data_patch:\n%s\n", cJSON_Print(jsontraffic_influ_data_patch_2));
}

int main() {
  test_traffic_influ_data_patch(1);
  test_traffic_influ_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_influ_data_patch_MAIN
#endif // traffic_influ_data_patch_TEST
