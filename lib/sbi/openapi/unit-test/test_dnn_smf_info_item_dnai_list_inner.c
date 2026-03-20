#ifndef dnn_smf_info_item_dnai_list_inner_TEST
#define dnn_smf_info_item_dnai_list_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_smf_info_item_dnai_list_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_smf_info_item_dnai_list_inner.h"
dnn_smf_info_item_dnai_list_inner_t* instantiate_dnn_smf_info_item_dnai_list_inner(int include_optional);



dnn_smf_info_item_dnai_list_inner_t* instantiate_dnn_smf_info_item_dnai_list_inner(int include_optional) {
  dnn_smf_info_item_dnai_list_inner_t* dnn_smf_info_item_dnai_list_inner = NULL;
  if (include_optional) {
    dnn_smf_info_item_dnai_list_inner = dnn_smf_info_item_dnai_list_inner_create(
    );
  } else {
    dnn_smf_info_item_dnai_list_inner = dnn_smf_info_item_dnai_list_inner_create(
    );
  }

  return dnn_smf_info_item_dnai_list_inner;
}


#ifdef dnn_smf_info_item_dnai_list_inner_MAIN

void test_dnn_smf_info_item_dnai_list_inner(int include_optional) {
    dnn_smf_info_item_dnai_list_inner_t* dnn_smf_info_item_dnai_list_inner_1 = instantiate_dnn_smf_info_item_dnai_list_inner(include_optional);

	cJSON* jsondnn_smf_info_item_dnai_list_inner_1 = dnn_smf_info_item_dnai_list_inner_convertToJSON(dnn_smf_info_item_dnai_list_inner_1);
	printf("dnn_smf_info_item_dnai_list_inner :\n%s\n", cJSON_Print(jsondnn_smf_info_item_dnai_list_inner_1));
	dnn_smf_info_item_dnai_list_inner_t* dnn_smf_info_item_dnai_list_inner_2 = dnn_smf_info_item_dnai_list_inner_parseFromJSON(jsondnn_smf_info_item_dnai_list_inner_1);
	cJSON* jsondnn_smf_info_item_dnai_list_inner_2 = dnn_smf_info_item_dnai_list_inner_convertToJSON(dnn_smf_info_item_dnai_list_inner_2);
	printf("repeating dnn_smf_info_item_dnai_list_inner:\n%s\n", cJSON_Print(jsondnn_smf_info_item_dnai_list_inner_2));
}

int main() {
  test_dnn_smf_info_item_dnai_list_inner(1);
  test_dnn_smf_info_item_dnai_list_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_smf_info_item_dnai_list_inner_MAIN
#endif // dnn_smf_info_item_dnai_list_inner_TEST
