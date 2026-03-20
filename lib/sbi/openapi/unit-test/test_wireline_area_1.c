#ifndef wireline_area_1_TEST
#define wireline_area_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define wireline_area_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/wireline_area_1.h"
wireline_area_1_t* instantiate_wireline_area_1(int include_optional);



wireline_area_1_t* instantiate_wireline_area_1(int include_optional) {
  wireline_area_1_t* wireline_area_1 = NULL;
  if (include_optional) {
    wireline_area_1 = wireline_area_1_create(
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  } else {
    wireline_area_1 = wireline_area_1_create(
      list_createList(),
      list_createList(),
      "0",
      "0"
    );
  }

  return wireline_area_1;
}


#ifdef wireline_area_1_MAIN

void test_wireline_area_1(int include_optional) {
    wireline_area_1_t* wireline_area_1_1 = instantiate_wireline_area_1(include_optional);

	cJSON* jsonwireline_area_1_1 = wireline_area_1_convertToJSON(wireline_area_1_1);
	printf("wireline_area_1 :\n%s\n", cJSON_Print(jsonwireline_area_1_1));
	wireline_area_1_t* wireline_area_1_2 = wireline_area_1_parseFromJSON(jsonwireline_area_1_1);
	cJSON* jsonwireline_area_1_2 = wireline_area_1_convertToJSON(wireline_area_1_2);
	printf("repeating wireline_area_1:\n%s\n", cJSON_Print(jsonwireline_area_1_2));
}

int main() {
  test_wireline_area_1(1);
  test_wireline_area_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // wireline_area_1_MAIN
#endif // wireline_area_1_TEST
