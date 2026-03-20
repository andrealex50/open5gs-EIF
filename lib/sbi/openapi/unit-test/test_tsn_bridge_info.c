#ifndef tsn_bridge_info_TEST
#define tsn_bridge_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tsn_bridge_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tsn_bridge_info.h"
tsn_bridge_info_t* instantiate_tsn_bridge_info(int include_optional);



tsn_bridge_info_t* instantiate_tsn_bridge_info(int include_optional) {
  tsn_bridge_info_t* tsn_bridge_info = NULL;
  if (include_optional) {
    tsn_bridge_info = tsn_bridge_info_create(
      0,
      "a",
      0,
      0
    );
  } else {
    tsn_bridge_info = tsn_bridge_info_create(
      0,
      "a",
      0,
      0
    );
  }

  return tsn_bridge_info;
}


#ifdef tsn_bridge_info_MAIN

void test_tsn_bridge_info(int include_optional) {
    tsn_bridge_info_t* tsn_bridge_info_1 = instantiate_tsn_bridge_info(include_optional);

	cJSON* jsontsn_bridge_info_1 = tsn_bridge_info_convertToJSON(tsn_bridge_info_1);
	printf("tsn_bridge_info :\n%s\n", cJSON_Print(jsontsn_bridge_info_1));
	tsn_bridge_info_t* tsn_bridge_info_2 = tsn_bridge_info_parseFromJSON(jsontsn_bridge_info_1);
	cJSON* jsontsn_bridge_info_2 = tsn_bridge_info_convertToJSON(tsn_bridge_info_2);
	printf("repeating tsn_bridge_info:\n%s\n", cJSON_Print(jsontsn_bridge_info_2));
}

int main() {
  test_tsn_bridge_info(1);
  test_tsn_bridge_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // tsn_bridge_info_MAIN
#endif // tsn_bridge_info_TEST
