#ifndef area_1_TEST
#define area_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define area_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/area_1.h"
area_1_t* instantiate_area_1(int include_optional);



area_1_t* instantiate_area_1(int include_optional) {
  area_1_t* area_1 = NULL;
  if (include_optional) {
    area_1 = area_1_create(
      list_createList(),
      "0"
    );
  } else {
    area_1 = area_1_create(
      list_createList(),
      "0"
    );
  }

  return area_1;
}


#ifdef area_1_MAIN

void test_area_1(int include_optional) {
    area_1_t* area_1_1 = instantiate_area_1(include_optional);

	cJSON* jsonarea_1_1 = area_1_convertToJSON(area_1_1);
	printf("area_1 :\n%s\n", cJSON_Print(jsonarea_1_1));
	area_1_t* area_1_2 = area_1_parseFromJSON(jsonarea_1_1);
	cJSON* jsonarea_1_2 = area_1_convertToJSON(area_1_2);
	printf("repeating area_1:\n%s\n", cJSON_Print(jsonarea_1_2));
}

int main() {
  test_area_1(1);
  test_area_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // area_1_MAIN
#endif // area_1_TEST
