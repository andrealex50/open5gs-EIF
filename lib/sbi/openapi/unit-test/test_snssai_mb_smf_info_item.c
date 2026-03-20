#ifndef snssai_mb_smf_info_item_TEST
#define snssai_mb_smf_info_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snssai_mb_smf_info_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snssai_mb_smf_info_item.h"
snssai_mb_smf_info_item_t* instantiate_snssai_mb_smf_info_item(int include_optional);

#include "test_ext_snssai.c"


snssai_mb_smf_info_item_t* instantiate_snssai_mb_smf_info_item(int include_optional) {
  snssai_mb_smf_info_item_t* snssai_mb_smf_info_item = NULL;
  if (include_optional) {
    snssai_mb_smf_info_item = snssai_mb_smf_info_item_create(
      null,
      list_createList()
    );
  } else {
    snssai_mb_smf_info_item = snssai_mb_smf_info_item_create(
      null,
      list_createList()
    );
  }

  return snssai_mb_smf_info_item;
}


#ifdef snssai_mb_smf_info_item_MAIN

void test_snssai_mb_smf_info_item(int include_optional) {
    snssai_mb_smf_info_item_t* snssai_mb_smf_info_item_1 = instantiate_snssai_mb_smf_info_item(include_optional);

	cJSON* jsonsnssai_mb_smf_info_item_1 = snssai_mb_smf_info_item_convertToJSON(snssai_mb_smf_info_item_1);
	printf("snssai_mb_smf_info_item :\n%s\n", cJSON_Print(jsonsnssai_mb_smf_info_item_1));
	snssai_mb_smf_info_item_t* snssai_mb_smf_info_item_2 = snssai_mb_smf_info_item_parseFromJSON(jsonsnssai_mb_smf_info_item_1);
	cJSON* jsonsnssai_mb_smf_info_item_2 = snssai_mb_smf_info_item_convertToJSON(snssai_mb_smf_info_item_2);
	printf("repeating snssai_mb_smf_info_item:\n%s\n", cJSON_Print(jsonsnssai_mb_smf_info_item_2));
}

int main() {
  test_snssai_mb_smf_info_item(1);
  test_snssai_mb_smf_info_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // snssai_mb_smf_info_item_MAIN
#endif // snssai_mb_smf_info_item_TEST
