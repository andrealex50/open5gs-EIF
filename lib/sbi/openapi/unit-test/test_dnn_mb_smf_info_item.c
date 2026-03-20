#ifndef dnn_mb_smf_info_item_TEST
#define dnn_mb_smf_info_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_mb_smf_info_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_mb_smf_info_item.h"
dnn_mb_smf_info_item_t* instantiate_dnn_mb_smf_info_item(int include_optional);



dnn_mb_smf_info_item_t* instantiate_dnn_mb_smf_info_item(int include_optional) {
  dnn_mb_smf_info_item_t* dnn_mb_smf_info_item = NULL;
  if (include_optional) {
    dnn_mb_smf_info_item = dnn_mb_smf_info_item_create(
      "0"
    );
  } else {
    dnn_mb_smf_info_item = dnn_mb_smf_info_item_create(
      "0"
    );
  }

  return dnn_mb_smf_info_item;
}


#ifdef dnn_mb_smf_info_item_MAIN

void test_dnn_mb_smf_info_item(int include_optional) {
    dnn_mb_smf_info_item_t* dnn_mb_smf_info_item_1 = instantiate_dnn_mb_smf_info_item(include_optional);

	cJSON* jsondnn_mb_smf_info_item_1 = dnn_mb_smf_info_item_convertToJSON(dnn_mb_smf_info_item_1);
	printf("dnn_mb_smf_info_item :\n%s\n", cJSON_Print(jsondnn_mb_smf_info_item_1));
	dnn_mb_smf_info_item_t* dnn_mb_smf_info_item_2 = dnn_mb_smf_info_item_parseFromJSON(jsondnn_mb_smf_info_item_1);
	cJSON* jsondnn_mb_smf_info_item_2 = dnn_mb_smf_info_item_convertToJSON(dnn_mb_smf_info_item_2);
	printf("repeating dnn_mb_smf_info_item:\n%s\n", cJSON_Print(jsondnn_mb_smf_info_item_2));
}

int main() {
  test_dnn_mb_smf_info_item(1);
  test_dnn_mb_smf_info_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_mb_smf_info_item_MAIN
#endif // dnn_mb_smf_info_item_TEST
