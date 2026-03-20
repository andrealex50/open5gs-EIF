#ifndef port_management_container_TEST
#define port_management_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define port_management_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/port_management_container.h"
port_management_container_t* instantiate_port_management_container(int include_optional);



port_management_container_t* instantiate_port_management_container(int include_optional) {
  port_management_container_t* port_management_container = NULL;
  if (include_optional) {
    port_management_container = port_management_container_create(
      "YQ==",
      0
    );
  } else {
    port_management_container = port_management_container_create(
      "YQ==",
      0
    );
  }

  return port_management_container;
}


#ifdef port_management_container_MAIN

void test_port_management_container(int include_optional) {
    port_management_container_t* port_management_container_1 = instantiate_port_management_container(include_optional);

	cJSON* jsonport_management_container_1 = port_management_container_convertToJSON(port_management_container_1);
	printf("port_management_container :\n%s\n", cJSON_Print(jsonport_management_container_1));
	port_management_container_t* port_management_container_2 = port_management_container_parseFromJSON(jsonport_management_container_1);
	cJSON* jsonport_management_container_2 = port_management_container_convertToJSON(port_management_container_2);
	printf("repeating port_management_container:\n%s\n", cJSON_Print(jsonport_management_container_2));
}

int main() {
  test_port_management_container(1);
  test_port_management_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // port_management_container_MAIN
#endif // port_management_container_TEST
