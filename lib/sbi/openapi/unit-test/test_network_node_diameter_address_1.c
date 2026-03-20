#ifndef network_node_diameter_address_1_TEST
#define network_node_diameter_address_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define network_node_diameter_address_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/network_node_diameter_address_1.h"
network_node_diameter_address_1_t* instantiate_network_node_diameter_address_1(int include_optional);



network_node_diameter_address_1_t* instantiate_network_node_diameter_address_1(int include_optional) {
  network_node_diameter_address_1_t* network_node_diameter_address_1 = NULL;
  if (include_optional) {
    network_node_diameter_address_1 = network_node_diameter_address_1_create(
      "a",
      "a"
    );
  } else {
    network_node_diameter_address_1 = network_node_diameter_address_1_create(
      "a",
      "a"
    );
  }

  return network_node_diameter_address_1;
}


#ifdef network_node_diameter_address_1_MAIN

void test_network_node_diameter_address_1(int include_optional) {
    network_node_diameter_address_1_t* network_node_diameter_address_1_1 = instantiate_network_node_diameter_address_1(include_optional);

	cJSON* jsonnetwork_node_diameter_address_1_1 = network_node_diameter_address_1_convertToJSON(network_node_diameter_address_1_1);
	printf("network_node_diameter_address_1 :\n%s\n", cJSON_Print(jsonnetwork_node_diameter_address_1_1));
	network_node_diameter_address_1_t* network_node_diameter_address_1_2 = network_node_diameter_address_1_parseFromJSON(jsonnetwork_node_diameter_address_1_1);
	cJSON* jsonnetwork_node_diameter_address_1_2 = network_node_diameter_address_1_convertToJSON(network_node_diameter_address_1_2);
	printf("repeating network_node_diameter_address_1:\n%s\n", cJSON_Print(jsonnetwork_node_diameter_address_1_2));
}

int main() {
  test_network_node_diameter_address_1(1);
  test_network_node_diameter_address_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // network_node_diameter_address_1_MAIN
#endif // network_node_diameter_address_1_TEST
