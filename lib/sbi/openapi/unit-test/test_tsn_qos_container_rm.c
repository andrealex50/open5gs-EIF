#ifndef tsn_qos_container_rm_TEST
#define tsn_qos_container_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tsn_qos_container_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tsn_qos_container_rm.h"
tsn_qos_container_rm_t* instantiate_tsn_qos_container_rm(int include_optional);



tsn_qos_container_rm_t* instantiate_tsn_qos_container_rm(int include_optional) {
  tsn_qos_container_rm_t* tsn_qos_container_rm = NULL;
  if (include_optional) {
    tsn_qos_container_rm = tsn_qos_container_rm_create(
      4096,
      1,
      1
    );
  } else {
    tsn_qos_container_rm = tsn_qos_container_rm_create(
      4096,
      1,
      1
    );
  }

  return tsn_qos_container_rm;
}


#ifdef tsn_qos_container_rm_MAIN

void test_tsn_qos_container_rm(int include_optional) {
    tsn_qos_container_rm_t* tsn_qos_container_rm_1 = instantiate_tsn_qos_container_rm(include_optional);

	cJSON* jsontsn_qos_container_rm_1 = tsn_qos_container_rm_convertToJSON(tsn_qos_container_rm_1);
	printf("tsn_qos_container_rm :\n%s\n", cJSON_Print(jsontsn_qos_container_rm_1));
	tsn_qos_container_rm_t* tsn_qos_container_rm_2 = tsn_qos_container_rm_parseFromJSON(jsontsn_qos_container_rm_1);
	cJSON* jsontsn_qos_container_rm_2 = tsn_qos_container_rm_convertToJSON(tsn_qos_container_rm_2);
	printf("repeating tsn_qos_container_rm:\n%s\n", cJSON_Print(jsontsn_qos_container_rm_2));
}

int main() {
  test_tsn_qos_container_rm(1);
  test_tsn_qos_container_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // tsn_qos_container_rm_MAIN
#endif // tsn_qos_container_rm_TEST
