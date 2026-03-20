#ifndef tsn_qos_container_TEST
#define tsn_qos_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tsn_qos_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tsn_qos_container.h"
tsn_qos_container_t* instantiate_tsn_qos_container(int include_optional);



tsn_qos_container_t* instantiate_tsn_qos_container(int include_optional) {
  tsn_qos_container_t* tsn_qos_container = NULL;
  if (include_optional) {
    tsn_qos_container = tsn_qos_container_create(
      4096,
      1,
      1
    );
  } else {
    tsn_qos_container = tsn_qos_container_create(
      4096,
      1,
      1
    );
  }

  return tsn_qos_container;
}


#ifdef tsn_qos_container_MAIN

void test_tsn_qos_container(int include_optional) {
    tsn_qos_container_t* tsn_qos_container_1 = instantiate_tsn_qos_container(include_optional);

	cJSON* jsontsn_qos_container_1 = tsn_qos_container_convertToJSON(tsn_qos_container_1);
	printf("tsn_qos_container :\n%s\n", cJSON_Print(jsontsn_qos_container_1));
	tsn_qos_container_t* tsn_qos_container_2 = tsn_qos_container_parseFromJSON(jsontsn_qos_container_1);
	cJSON* jsontsn_qos_container_2 = tsn_qos_container_convertToJSON(tsn_qos_container_2);
	printf("repeating tsn_qos_container:\n%s\n", cJSON_Print(jsontsn_qos_container_2));
}

int main() {
  test_tsn_qos_container(1);
  test_tsn_qos_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // tsn_qos_container_MAIN
#endif // tsn_qos_container_TEST
