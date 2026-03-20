#ifndef ue_context_in_smf_data_sub_filter_TEST
#define ue_context_in_smf_data_sub_filter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_context_in_smf_data_sub_filter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_context_in_smf_data_sub_filter.h"
ue_context_in_smf_data_sub_filter_t* instantiate_ue_context_in_smf_data_sub_filter(int include_optional);



ue_context_in_smf_data_sub_filter_t* instantiate_ue_context_in_smf_data_sub_filter(int include_optional) {
  ue_context_in_smf_data_sub_filter_t* ue_context_in_smf_data_sub_filter = NULL;
  if (include_optional) {
    ue_context_in_smf_data_sub_filter = ue_context_in_smf_data_sub_filter_create(
      list_createList(),
      list_createList(),
      1
    );
  } else {
    ue_context_in_smf_data_sub_filter = ue_context_in_smf_data_sub_filter_create(
      list_createList(),
      list_createList(),
      1
    );
  }

  return ue_context_in_smf_data_sub_filter;
}


#ifdef ue_context_in_smf_data_sub_filter_MAIN

void test_ue_context_in_smf_data_sub_filter(int include_optional) {
    ue_context_in_smf_data_sub_filter_t* ue_context_in_smf_data_sub_filter_1 = instantiate_ue_context_in_smf_data_sub_filter(include_optional);

	cJSON* jsonue_context_in_smf_data_sub_filter_1 = ue_context_in_smf_data_sub_filter_convertToJSON(ue_context_in_smf_data_sub_filter_1);
	printf("ue_context_in_smf_data_sub_filter :\n%s\n", cJSON_Print(jsonue_context_in_smf_data_sub_filter_1));
	ue_context_in_smf_data_sub_filter_t* ue_context_in_smf_data_sub_filter_2 = ue_context_in_smf_data_sub_filter_parseFromJSON(jsonue_context_in_smf_data_sub_filter_1);
	cJSON* jsonue_context_in_smf_data_sub_filter_2 = ue_context_in_smf_data_sub_filter_convertToJSON(ue_context_in_smf_data_sub_filter_2);
	printf("repeating ue_context_in_smf_data_sub_filter:\n%s\n", cJSON_Print(jsonue_context_in_smf_data_sub_filter_2));
}

int main() {
  test_ue_context_in_smf_data_sub_filter(1);
  test_ue_context_in_smf_data_sub_filter(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_context_in_smf_data_sub_filter_MAIN
#endif // ue_context_in_smf_data_sub_filter_TEST
