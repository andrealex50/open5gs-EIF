#ifndef traffic_descriptor_components_TEST
#define traffic_descriptor_components_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_descriptor_components_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_descriptor_components.h"
traffic_descriptor_components_t* instantiate_traffic_descriptor_components(int include_optional);



traffic_descriptor_components_t* instantiate_traffic_descriptor_components(int include_optional) {
  traffic_descriptor_components_t* traffic_descriptor_components = NULL;
  if (include_optional) {
    traffic_descriptor_components = traffic_descriptor_components_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    traffic_descriptor_components = traffic_descriptor_components_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return traffic_descriptor_components;
}


#ifdef traffic_descriptor_components_MAIN

void test_traffic_descriptor_components(int include_optional) {
    traffic_descriptor_components_t* traffic_descriptor_components_1 = instantiate_traffic_descriptor_components(include_optional);

	cJSON* jsontraffic_descriptor_components_1 = traffic_descriptor_components_convertToJSON(traffic_descriptor_components_1);
	printf("traffic_descriptor_components :\n%s\n", cJSON_Print(jsontraffic_descriptor_components_1));
	traffic_descriptor_components_t* traffic_descriptor_components_2 = traffic_descriptor_components_parseFromJSON(jsontraffic_descriptor_components_1);
	cJSON* jsontraffic_descriptor_components_2 = traffic_descriptor_components_convertToJSON(traffic_descriptor_components_2);
	printf("repeating traffic_descriptor_components:\n%s\n", cJSON_Print(jsontraffic_descriptor_components_2));
}

int main() {
  test_traffic_descriptor_components(1);
  test_traffic_descriptor_components(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_descriptor_components_MAIN
#endif // traffic_descriptor_components_TEST
