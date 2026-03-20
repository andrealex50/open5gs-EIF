#ifndef ecs_server_addr_TEST
#define ecs_server_addr_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ecs_server_addr_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ecs_server_addr.h"
ecs_server_addr_t* instantiate_ecs_server_addr(int include_optional);



ecs_server_addr_t* instantiate_ecs_server_addr(int include_optional) {
  ecs_server_addr_t* ecs_server_addr = NULL;
  if (include_optional) {
    ecs_server_addr = ecs_server_addr_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    ecs_server_addr = ecs_server_addr_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return ecs_server_addr;
}


#ifdef ecs_server_addr_MAIN

void test_ecs_server_addr(int include_optional) {
    ecs_server_addr_t* ecs_server_addr_1 = instantiate_ecs_server_addr(include_optional);

	cJSON* jsonecs_server_addr_1 = ecs_server_addr_convertToJSON(ecs_server_addr_1);
	printf("ecs_server_addr :\n%s\n", cJSON_Print(jsonecs_server_addr_1));
	ecs_server_addr_t* ecs_server_addr_2 = ecs_server_addr_parseFromJSON(jsonecs_server_addr_1);
	cJSON* jsonecs_server_addr_2 = ecs_server_addr_convertToJSON(ecs_server_addr_2);
	printf("repeating ecs_server_addr:\n%s\n", cJSON_Print(jsonecs_server_addr_2));
}

int main() {
  test_ecs_server_addr(1);
  test_ecs_server_addr(0);

  printf("Hello world \n");
  return 0;
}

#endif // ecs_server_addr_MAIN
#endif // ecs_server_addr_TEST
