#ifndef ee_profile_data_TEST
#define ee_profile_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ee_profile_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ee_profile_data.h"
ee_profile_data_t* instantiate_ee_profile_data(int include_optional);



ee_profile_data_t* instantiate_ee_profile_data(int include_optional) {
  ee_profile_data_t* ee_profile_data = NULL;
  if (include_optional) {
    ee_profile_data = ee_profile_data_create(
      list_createList(),
      "a",
      list_createList(),
      1,
      "a",
      "0"
    );
  } else {
    ee_profile_data = ee_profile_data_create(
      list_createList(),
      "a",
      list_createList(),
      1,
      "a",
      "0"
    );
  }

  return ee_profile_data;
}


#ifdef ee_profile_data_MAIN

void test_ee_profile_data(int include_optional) {
    ee_profile_data_t* ee_profile_data_1 = instantiate_ee_profile_data(include_optional);

	cJSON* jsonee_profile_data_1 = ee_profile_data_convertToJSON(ee_profile_data_1);
	printf("ee_profile_data :\n%s\n", cJSON_Print(jsonee_profile_data_1));
	ee_profile_data_t* ee_profile_data_2 = ee_profile_data_parseFromJSON(jsonee_profile_data_1);
	cJSON* jsonee_profile_data_2 = ee_profile_data_convertToJSON(ee_profile_data_2);
	printf("repeating ee_profile_data:\n%s\n", cJSON_Print(jsonee_profile_data_2));
}

int main() {
  test_ee_profile_data(1);
  test_ee_profile_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // ee_profile_data_MAIN
#endif // ee_profile_data_TEST
