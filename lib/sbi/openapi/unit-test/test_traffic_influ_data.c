#ifndef traffic_influ_data_TEST
#define traffic_influ_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_influ_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_influ_data.h"
traffic_influ_data_t* instantiate_traffic_influ_data(int include_optional);

#include "test_snssai.c"
#include "test_network_area_info_2.c"


traffic_influ_data_t* instantiate_traffic_influ_data(int include_optional) {
  traffic_influ_data_t* traffic_influ_data = NULL;
  if (include_optional) {
    traffic_influ_data = traffic_influ_data_create(
      "0",
      1,
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a",
      "a",
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
      list_createList(),
      nudr_datarepository_api_openapi_file_traffic_influ_data__EARLY,
      1,
      1,
      0,
      1,
      56,
      "a",
      "0",
      list_createList()
    );
  } else {
    traffic_influ_data = traffic_influ_data_create(
      "0",
      1,
      "0",
      "0",
      list_createList(),
      NULL,
      "a",
      "a",
      list_createList(),
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      NULL,
      "0",
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_traffic_influ_data__EARLY,
      1,
      1,
      0,
      1,
      56,
      "a",
      "0",
      list_createList()
    );
  }

  return traffic_influ_data;
}


#ifdef traffic_influ_data_MAIN

void test_traffic_influ_data(int include_optional) {
    traffic_influ_data_t* traffic_influ_data_1 = instantiate_traffic_influ_data(include_optional);

	cJSON* jsontraffic_influ_data_1 = traffic_influ_data_convertToJSON(traffic_influ_data_1);
	printf("traffic_influ_data :\n%s\n", cJSON_Print(jsontraffic_influ_data_1));
	traffic_influ_data_t* traffic_influ_data_2 = traffic_influ_data_parseFromJSON(jsontraffic_influ_data_1);
	cJSON* jsontraffic_influ_data_2 = traffic_influ_data_convertToJSON(traffic_influ_data_2);
	printf("repeating traffic_influ_data:\n%s\n", cJSON_Print(jsontraffic_influ_data_2));
}

int main() {
  test_traffic_influ_data(1);
  test_traffic_influ_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_influ_data_MAIN
#endif // traffic_influ_data_TEST
