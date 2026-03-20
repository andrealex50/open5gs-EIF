#ifndef bridge_management_container_TEST
#define bridge_management_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bridge_management_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bridge_management_container.h"
bridge_management_container_t* instantiate_bridge_management_container(int include_optional);



bridge_management_container_t* instantiate_bridge_management_container(int include_optional) {
  bridge_management_container_t* bridge_management_container = NULL;
  if (include_optional) {
    bridge_management_container = bridge_management_container_create(
      "YQ=="
    );
  } else {
    bridge_management_container = bridge_management_container_create(
      "YQ=="
    );
  }

  return bridge_management_container;
}


#ifdef bridge_management_container_MAIN

void test_bridge_management_container(int include_optional) {
    bridge_management_container_t* bridge_management_container_1 = instantiate_bridge_management_container(include_optional);

	cJSON* jsonbridge_management_container_1 = bridge_management_container_convertToJSON(bridge_management_container_1);
	printf("bridge_management_container :\n%s\n", cJSON_Print(jsonbridge_management_container_1));
	bridge_management_container_t* bridge_management_container_2 = bridge_management_container_parseFromJSON(jsonbridge_management_container_1);
	cJSON* jsonbridge_management_container_2 = bridge_management_container_convertToJSON(bridge_management_container_2);
	printf("repeating bridge_management_container:\n%s\n", cJSON_Print(jsonbridge_management_container_2));
}

int main() {
  test_bridge_management_container(1);
  test_bridge_management_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // bridge_management_container_MAIN
#endif // bridge_management_container_TEST
