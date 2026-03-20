#ifndef traffic_influ_sub_TEST
#define traffic_influ_sub_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_influ_sub_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_influ_sub.h"
traffic_influ_sub_t* instantiate_traffic_influ_sub(int include_optional);



traffic_influ_sub_t* instantiate_traffic_influ_sub(int include_optional) {
  traffic_influ_sub_t* traffic_influ_sub = NULL;
  if (include_optional) {
    traffic_influ_sub = traffic_influ_sub_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  } else {
    traffic_influ_sub = traffic_influ_sub_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  }

  return traffic_influ_sub;
}


#ifdef traffic_influ_sub_MAIN

void test_traffic_influ_sub(int include_optional) {
    traffic_influ_sub_t* traffic_influ_sub_1 = instantiate_traffic_influ_sub(include_optional);

	cJSON* jsontraffic_influ_sub_1 = traffic_influ_sub_convertToJSON(traffic_influ_sub_1);
	printf("traffic_influ_sub :\n%s\n", cJSON_Print(jsontraffic_influ_sub_1));
	traffic_influ_sub_t* traffic_influ_sub_2 = traffic_influ_sub_parseFromJSON(jsontraffic_influ_sub_1);
	cJSON* jsontraffic_influ_sub_2 = traffic_influ_sub_convertToJSON(traffic_influ_sub_2);
	printf("repeating traffic_influ_sub:\n%s\n", cJSON_Print(jsontraffic_influ_sub_2));
}

int main() {
  test_traffic_influ_sub(1);
  test_traffic_influ_sub(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_influ_sub_MAIN
#endif // traffic_influ_sub_TEST
