#ifndef mbsfn_area_TEST
#define mbsfn_area_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbsfn_area_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbsfn_area.h"
mbsfn_area_t* instantiate_mbsfn_area(int include_optional);



mbsfn_area_t* instantiate_mbsfn_area(int include_optional) {
  mbsfn_area_t* mbsfn_area = NULL;
  if (include_optional) {
    mbsfn_area = mbsfn_area_create(
      0,
      0
    );
  } else {
    mbsfn_area = mbsfn_area_create(
      0,
      0
    );
  }

  return mbsfn_area;
}


#ifdef mbsfn_area_MAIN

void test_mbsfn_area(int include_optional) {
    mbsfn_area_t* mbsfn_area_1 = instantiate_mbsfn_area(include_optional);

	cJSON* jsonmbsfn_area_1 = mbsfn_area_convertToJSON(mbsfn_area_1);
	printf("mbsfn_area :\n%s\n", cJSON_Print(jsonmbsfn_area_1));
	mbsfn_area_t* mbsfn_area_2 = mbsfn_area_parseFromJSON(jsonmbsfn_area_1);
	cJSON* jsonmbsfn_area_2 = mbsfn_area_convertToJSON(mbsfn_area_2);
	printf("repeating mbsfn_area:\n%s\n", cJSON_Print(jsonmbsfn_area_2));
}

int main() {
  test_mbsfn_area(1);
  test_mbsfn_area(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbsfn_area_MAIN
#endif // mbsfn_area_TEST
