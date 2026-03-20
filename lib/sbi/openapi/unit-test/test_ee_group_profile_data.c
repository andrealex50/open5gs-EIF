#ifndef ee_group_profile_data_TEST
#define ee_group_profile_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ee_group_profile_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ee_group_profile_data.h"
ee_group_profile_data_t* instantiate_ee_group_profile_data(int include_optional);



ee_group_profile_data_t* instantiate_ee_group_profile_data(int include_optional) {
  ee_group_profile_data_t* ee_group_profile_data = NULL;
  if (include_optional) {
    ee_group_profile_data = ee_group_profile_data_create(
      list_createList(),
      list_createList(),
      "a",
      1,
      "a",
      "0"
    );
  } else {
    ee_group_profile_data = ee_group_profile_data_create(
      list_createList(),
      list_createList(),
      "a",
      1,
      "a",
      "0"
    );
  }

  return ee_group_profile_data;
}


#ifdef ee_group_profile_data_MAIN

void test_ee_group_profile_data(int include_optional) {
    ee_group_profile_data_t* ee_group_profile_data_1 = instantiate_ee_group_profile_data(include_optional);

	cJSON* jsonee_group_profile_data_1 = ee_group_profile_data_convertToJSON(ee_group_profile_data_1);
	printf("ee_group_profile_data :\n%s\n", cJSON_Print(jsonee_group_profile_data_1));
	ee_group_profile_data_t* ee_group_profile_data_2 = ee_group_profile_data_parseFromJSON(jsonee_group_profile_data_1);
	cJSON* jsonee_group_profile_data_2 = ee_group_profile_data_convertToJSON(ee_group_profile_data_2);
	printf("repeating ee_group_profile_data:\n%s\n", cJSON_Print(jsonee_group_profile_data_2));
}

int main() {
  test_ee_group_profile_data(1);
  test_ee_group_profile_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // ee_group_profile_data_MAIN
#endif // ee_group_profile_data_TEST
