#ifndef ecs_addr_config_info_1_TEST
#define ecs_addr_config_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ecs_addr_config_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ecs_addr_config_info_1.h"
ecs_addr_config_info_1_t* instantiate_ecs_addr_config_info_1(int include_optional);

#include "test_ecs_server_addr.c"
#include "test_spatial_validity_cond_1.c"


ecs_addr_config_info_1_t* instantiate_ecs_addr_config_info_1(int include_optional) {
  ecs_addr_config_info_1_t* ecs_addr_config_info_1 = NULL;
  if (include_optional) {
    ecs_addr_config_info_1 = ecs_addr_config_info_1_create(
       // false, not to have infinite recursion
      instantiate_ecs_server_addr(0),
       // false, not to have infinite recursion
      instantiate_spatial_validity_cond_1(0)
    );
  } else {
    ecs_addr_config_info_1 = ecs_addr_config_info_1_create(
      NULL,
      NULL
    );
  }

  return ecs_addr_config_info_1;
}


#ifdef ecs_addr_config_info_1_MAIN

void test_ecs_addr_config_info_1(int include_optional) {
    ecs_addr_config_info_1_t* ecs_addr_config_info_1_1 = instantiate_ecs_addr_config_info_1(include_optional);

	cJSON* jsonecs_addr_config_info_1_1 = ecs_addr_config_info_1_convertToJSON(ecs_addr_config_info_1_1);
	printf("ecs_addr_config_info_1 :\n%s\n", cJSON_Print(jsonecs_addr_config_info_1_1));
	ecs_addr_config_info_1_t* ecs_addr_config_info_1_2 = ecs_addr_config_info_1_parseFromJSON(jsonecs_addr_config_info_1_1);
	cJSON* jsonecs_addr_config_info_1_2 = ecs_addr_config_info_1_convertToJSON(ecs_addr_config_info_1_2);
	printf("repeating ecs_addr_config_info_1:\n%s\n", cJSON_Print(jsonecs_addr_config_info_1_2));
}

int main() {
  test_ecs_addr_config_info_1(1);
  test_ecs_addr_config_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ecs_addr_config_info_1_MAIN
#endif // ecs_addr_config_info_1_TEST
