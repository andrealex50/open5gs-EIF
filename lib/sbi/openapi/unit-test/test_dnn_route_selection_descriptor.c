#ifndef dnn_route_selection_descriptor_TEST
#define dnn_route_selection_descriptor_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_route_selection_descriptor_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_route_selection_descriptor.h"
dnn_route_selection_descriptor_t* instantiate_dnn_route_selection_descriptor(int include_optional);



dnn_route_selection_descriptor_t* instantiate_dnn_route_selection_descriptor(int include_optional) {
  dnn_route_selection_descriptor_t* dnn_route_selection_descriptor = NULL;
  if (include_optional) {
    dnn_route_selection_descriptor = dnn_route_selection_descriptor_create(
      "0",
      list_createList(),
      list_createList(),
      1
    );
  } else {
    dnn_route_selection_descriptor = dnn_route_selection_descriptor_create(
      "0",
      list_createList(),
      list_createList(),
      1
    );
  }

  return dnn_route_selection_descriptor;
}


#ifdef dnn_route_selection_descriptor_MAIN

void test_dnn_route_selection_descriptor(int include_optional) {
    dnn_route_selection_descriptor_t* dnn_route_selection_descriptor_1 = instantiate_dnn_route_selection_descriptor(include_optional);

	cJSON* jsondnn_route_selection_descriptor_1 = dnn_route_selection_descriptor_convertToJSON(dnn_route_selection_descriptor_1);
	printf("dnn_route_selection_descriptor :\n%s\n", cJSON_Print(jsondnn_route_selection_descriptor_1));
	dnn_route_selection_descriptor_t* dnn_route_selection_descriptor_2 = dnn_route_selection_descriptor_parseFromJSON(jsondnn_route_selection_descriptor_1);
	cJSON* jsondnn_route_selection_descriptor_2 = dnn_route_selection_descriptor_convertToJSON(dnn_route_selection_descriptor_2);
	printf("repeating dnn_route_selection_descriptor:\n%s\n", cJSON_Print(jsondnn_route_selection_descriptor_2));
}

int main() {
  test_dnn_route_selection_descriptor(1);
  test_dnn_route_selection_descriptor(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_route_selection_descriptor_MAIN
#endif // dnn_route_selection_descriptor_TEST
