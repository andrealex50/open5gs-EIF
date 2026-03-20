#ifndef snssai_info_item_TEST
#define snssai_info_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snssai_info_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snssai_info_item.h"
snssai_info_item_t* instantiate_snssai_info_item(int include_optional);

#include "test_ext_snssai.c"


snssai_info_item_t* instantiate_snssai_info_item(int include_optional) {
  snssai_info_item_t* snssai_info_item = NULL;
  if (include_optional) {
    snssai_info_item = snssai_info_item_create(
      null,
      list_createList()
    );
  } else {
    snssai_info_item = snssai_info_item_create(
      null,
      list_createList()
    );
  }

  return snssai_info_item;
}


#ifdef snssai_info_item_MAIN

void test_snssai_info_item(int include_optional) {
    snssai_info_item_t* snssai_info_item_1 = instantiate_snssai_info_item(include_optional);

	cJSON* jsonsnssai_info_item_1 = snssai_info_item_convertToJSON(snssai_info_item_1);
	printf("snssai_info_item :\n%s\n", cJSON_Print(jsonsnssai_info_item_1));
	snssai_info_item_t* snssai_info_item_2 = snssai_info_item_parseFromJSON(jsonsnssai_info_item_1);
	cJSON* jsonsnssai_info_item_2 = snssai_info_item_convertToJSON(snssai_info_item_2);
	printf("repeating snssai_info_item:\n%s\n", cJSON_Print(jsonsnssai_info_item_2));
}

int main() {
  test_snssai_info_item(1);
  test_snssai_info_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // snssai_info_item_MAIN
#endif // snssai_info_item_TEST
