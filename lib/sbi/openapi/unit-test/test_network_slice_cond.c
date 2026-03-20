#ifndef network_slice_cond_TEST
#define network_slice_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define network_slice_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/network_slice_cond.h"
network_slice_cond_t* instantiate_network_slice_cond(int include_optional);



network_slice_cond_t* instantiate_network_slice_cond(int include_optional) {
  network_slice_cond_t* network_slice_cond = NULL;
  if (include_optional) {
    network_slice_cond = network_slice_cond_create(
      list_createList(),
      list_createList()
    );
  } else {
    network_slice_cond = network_slice_cond_create(
      list_createList(),
      list_createList()
    );
  }

  return network_slice_cond;
}


#ifdef network_slice_cond_MAIN

void test_network_slice_cond(int include_optional) {
    network_slice_cond_t* network_slice_cond_1 = instantiate_network_slice_cond(include_optional);

	cJSON* jsonnetwork_slice_cond_1 = network_slice_cond_convertToJSON(network_slice_cond_1);
	printf("network_slice_cond :\n%s\n", cJSON_Print(jsonnetwork_slice_cond_1));
	network_slice_cond_t* network_slice_cond_2 = network_slice_cond_parseFromJSON(jsonnetwork_slice_cond_1);
	cJSON* jsonnetwork_slice_cond_2 = network_slice_cond_convertToJSON(network_slice_cond_2);
	printf("repeating network_slice_cond:\n%s\n", cJSON_Print(jsonnetwork_slice_cond_2));
}

int main() {
  test_network_slice_cond(1);
  test_network_slice_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // network_slice_cond_MAIN
#endif // network_slice_cond_TEST
