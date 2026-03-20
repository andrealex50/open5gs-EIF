#ifndef pp5g_vn_group_profile_data_TEST
#define pp5g_vn_group_profile_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp5g_vn_group_profile_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp5g_vn_group_profile_data.h"
pp5g_vn_group_profile_data_t* instantiate_pp5g_vn_group_profile_data(int include_optional);



pp5g_vn_group_profile_data_t* instantiate_pp5g_vn_group_profile_data(int include_optional) {
  pp5g_vn_group_profile_data_t* pp5g_vn_group_profile_data = NULL;
  if (include_optional) {
    pp5g_vn_group_profile_data = pp5g_vn_group_profile_data_create(
      list_createList(),
      "a"
    );
  } else {
    pp5g_vn_group_profile_data = pp5g_vn_group_profile_data_create(
      list_createList(),
      "a"
    );
  }

  return pp5g_vn_group_profile_data;
}


#ifdef pp5g_vn_group_profile_data_MAIN

void test_pp5g_vn_group_profile_data(int include_optional) {
    pp5g_vn_group_profile_data_t* pp5g_vn_group_profile_data_1 = instantiate_pp5g_vn_group_profile_data(include_optional);

	cJSON* jsonpp5g_vn_group_profile_data_1 = pp5g_vn_group_profile_data_convertToJSON(pp5g_vn_group_profile_data_1);
	printf("pp5g_vn_group_profile_data :\n%s\n", cJSON_Print(jsonpp5g_vn_group_profile_data_1));
	pp5g_vn_group_profile_data_t* pp5g_vn_group_profile_data_2 = pp5g_vn_group_profile_data_parseFromJSON(jsonpp5g_vn_group_profile_data_1);
	cJSON* jsonpp5g_vn_group_profile_data_2 = pp5g_vn_group_profile_data_convertToJSON(pp5g_vn_group_profile_data_2);
	printf("repeating pp5g_vn_group_profile_data:\n%s\n", cJSON_Print(jsonpp5g_vn_group_profile_data_2));
}

int main() {
  test_pp5g_vn_group_profile_data(1);
  test_pp5g_vn_group_profile_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp5g_vn_group_profile_data_MAIN
#endif // pp5g_vn_group_profile_data_TEST
