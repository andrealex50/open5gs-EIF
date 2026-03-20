#ifndef ue_context_in_smf_data_sub_filter_1_TEST
#define ue_context_in_smf_data_sub_filter_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_context_in_smf_data_sub_filter_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_context_in_smf_data_sub_filter_1.h"
ue_context_in_smf_data_sub_filter_1_t* instantiate_ue_context_in_smf_data_sub_filter_1(int include_optional);



ue_context_in_smf_data_sub_filter_1_t* instantiate_ue_context_in_smf_data_sub_filter_1(int include_optional) {
  ue_context_in_smf_data_sub_filter_1_t* ue_context_in_smf_data_sub_filter_1 = NULL;
  if (include_optional) {
    ue_context_in_smf_data_sub_filter_1 = ue_context_in_smf_data_sub_filter_1_create(
      list_createList(),
      list_createList(),
      1
    );
  } else {
    ue_context_in_smf_data_sub_filter_1 = ue_context_in_smf_data_sub_filter_1_create(
      list_createList(),
      list_createList(),
      1
    );
  }

  return ue_context_in_smf_data_sub_filter_1;
}


#ifdef ue_context_in_smf_data_sub_filter_1_MAIN

void test_ue_context_in_smf_data_sub_filter_1(int include_optional) {
    ue_context_in_smf_data_sub_filter_1_t* ue_context_in_smf_data_sub_filter_1_1 = instantiate_ue_context_in_smf_data_sub_filter_1(include_optional);

	cJSON* jsonue_context_in_smf_data_sub_filter_1_1 = ue_context_in_smf_data_sub_filter_1_convertToJSON(ue_context_in_smf_data_sub_filter_1_1);
	printf("ue_context_in_smf_data_sub_filter_1 :\n%s\n", cJSON_Print(jsonue_context_in_smf_data_sub_filter_1_1));
	ue_context_in_smf_data_sub_filter_1_t* ue_context_in_smf_data_sub_filter_1_2 = ue_context_in_smf_data_sub_filter_1_parseFromJSON(jsonue_context_in_smf_data_sub_filter_1_1);
	cJSON* jsonue_context_in_smf_data_sub_filter_1_2 = ue_context_in_smf_data_sub_filter_1_convertToJSON(ue_context_in_smf_data_sub_filter_1_2);
	printf("repeating ue_context_in_smf_data_sub_filter_1:\n%s\n", cJSON_Print(jsonue_context_in_smf_data_sub_filter_1_2));
}

int main() {
  test_ue_context_in_smf_data_sub_filter_1(1);
  test_ue_context_in_smf_data_sub_filter_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_context_in_smf_data_sub_filter_1_MAIN
#endif // ue_context_in_smf_data_sub_filter_1_TEST
