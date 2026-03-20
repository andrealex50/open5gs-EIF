#ifndef inter_freq_target_info_1_TEST
#define inter_freq_target_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inter_freq_target_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inter_freq_target_info_1.h"
inter_freq_target_info_1_t* instantiate_inter_freq_target_info_1(int include_optional);



inter_freq_target_info_1_t* instantiate_inter_freq_target_info_1(int include_optional) {
  inter_freq_target_info_1_t* inter_freq_target_info_1 = NULL;
  if (include_optional) {
    inter_freq_target_info_1 = inter_freq_target_info_1_create(
      0,
      list_createList()
    );
  } else {
    inter_freq_target_info_1 = inter_freq_target_info_1_create(
      0,
      list_createList()
    );
  }

  return inter_freq_target_info_1;
}


#ifdef inter_freq_target_info_1_MAIN

void test_inter_freq_target_info_1(int include_optional) {
    inter_freq_target_info_1_t* inter_freq_target_info_1_1 = instantiate_inter_freq_target_info_1(include_optional);

	cJSON* jsoninter_freq_target_info_1_1 = inter_freq_target_info_1_convertToJSON(inter_freq_target_info_1_1);
	printf("inter_freq_target_info_1 :\n%s\n", cJSON_Print(jsoninter_freq_target_info_1_1));
	inter_freq_target_info_1_t* inter_freq_target_info_1_2 = inter_freq_target_info_1_parseFromJSON(jsoninter_freq_target_info_1_1);
	cJSON* jsoninter_freq_target_info_1_2 = inter_freq_target_info_1_convertToJSON(inter_freq_target_info_1_2);
	printf("repeating inter_freq_target_info_1:\n%s\n", cJSON_Print(jsoninter_freq_target_info_1_2));
}

int main() {
  test_inter_freq_target_info_1(1);
  test_inter_freq_target_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // inter_freq_target_info_1_MAIN
#endif // inter_freq_target_info_1_TEST
