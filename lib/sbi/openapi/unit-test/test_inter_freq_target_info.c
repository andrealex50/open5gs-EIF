#ifndef inter_freq_target_info_TEST
#define inter_freq_target_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inter_freq_target_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inter_freq_target_info.h"
inter_freq_target_info_t* instantiate_inter_freq_target_info(int include_optional);



inter_freq_target_info_t* instantiate_inter_freq_target_info(int include_optional) {
  inter_freq_target_info_t* inter_freq_target_info = NULL;
  if (include_optional) {
    inter_freq_target_info = inter_freq_target_info_create(
      0,
      list_createList()
    );
  } else {
    inter_freq_target_info = inter_freq_target_info_create(
      0,
      list_createList()
    );
  }

  return inter_freq_target_info;
}


#ifdef inter_freq_target_info_MAIN

void test_inter_freq_target_info(int include_optional) {
    inter_freq_target_info_t* inter_freq_target_info_1 = instantiate_inter_freq_target_info(include_optional);

	cJSON* jsoninter_freq_target_info_1 = inter_freq_target_info_convertToJSON(inter_freq_target_info_1);
	printf("inter_freq_target_info :\n%s\n", cJSON_Print(jsoninter_freq_target_info_1));
	inter_freq_target_info_t* inter_freq_target_info_2 = inter_freq_target_info_parseFromJSON(jsoninter_freq_target_info_1);
	cJSON* jsoninter_freq_target_info_2 = inter_freq_target_info_convertToJSON(inter_freq_target_info_2);
	printf("repeating inter_freq_target_info:\n%s\n", cJSON_Print(jsoninter_freq_target_info_2));
}

int main() {
  test_inter_freq_target_info(1);
  test_inter_freq_target_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // inter_freq_target_info_MAIN
#endif // inter_freq_target_info_TEST
