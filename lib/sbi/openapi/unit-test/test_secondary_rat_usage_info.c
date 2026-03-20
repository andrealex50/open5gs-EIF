#ifndef secondary_rat_usage_info_TEST
#define secondary_rat_usage_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define secondary_rat_usage_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/secondary_rat_usage_info.h"
secondary_rat_usage_info_t* instantiate_secondary_rat_usage_info(int include_optional);



secondary_rat_usage_info_t* instantiate_secondary_rat_usage_info(int include_optional) {
  secondary_rat_usage_info_t* secondary_rat_usage_info = NULL;
  if (include_optional) {
    secondary_rat_usage_info = secondary_rat_usage_info_create(
      nsmf_pdusession_secondary_rat_usage_info__NR,
      list_createList(),
      list_createList()
    );
  } else {
    secondary_rat_usage_info = secondary_rat_usage_info_create(
      nsmf_pdusession_secondary_rat_usage_info__NR,
      list_createList(),
      list_createList()
    );
  }

  return secondary_rat_usage_info;
}


#ifdef secondary_rat_usage_info_MAIN

void test_secondary_rat_usage_info(int include_optional) {
    secondary_rat_usage_info_t* secondary_rat_usage_info_1 = instantiate_secondary_rat_usage_info(include_optional);

	cJSON* jsonsecondary_rat_usage_info_1 = secondary_rat_usage_info_convertToJSON(secondary_rat_usage_info_1);
	printf("secondary_rat_usage_info :\n%s\n", cJSON_Print(jsonsecondary_rat_usage_info_1));
	secondary_rat_usage_info_t* secondary_rat_usage_info_2 = secondary_rat_usage_info_parseFromJSON(jsonsecondary_rat_usage_info_1);
	cJSON* jsonsecondary_rat_usage_info_2 = secondary_rat_usage_info_convertToJSON(secondary_rat_usage_info_2);
	printf("repeating secondary_rat_usage_info:\n%s\n", cJSON_Print(jsonsecondary_rat_usage_info_2));
}

int main() {
  test_secondary_rat_usage_info(1);
  test_secondary_rat_usage_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // secondary_rat_usage_info_MAIN
#endif // secondary_rat_usage_info_TEST
