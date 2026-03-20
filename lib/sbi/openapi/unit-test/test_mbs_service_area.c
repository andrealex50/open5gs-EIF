#ifndef mbs_service_area_TEST
#define mbs_service_area_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_service_area_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_service_area.h"
mbs_service_area_t* instantiate_mbs_service_area(int include_optional);



mbs_service_area_t* instantiate_mbs_service_area(int include_optional) {
  mbs_service_area_t* mbs_service_area = NULL;
  if (include_optional) {
    mbs_service_area = mbs_service_area_create(
      list_createList(),
      list_createList()
    );
  } else {
    mbs_service_area = mbs_service_area_create(
      list_createList(),
      list_createList()
    );
  }

  return mbs_service_area;
}


#ifdef mbs_service_area_MAIN

void test_mbs_service_area(int include_optional) {
    mbs_service_area_t* mbs_service_area_1 = instantiate_mbs_service_area(include_optional);

	cJSON* jsonmbs_service_area_1 = mbs_service_area_convertToJSON(mbs_service_area_1);
	printf("mbs_service_area :\n%s\n", cJSON_Print(jsonmbs_service_area_1));
	mbs_service_area_t* mbs_service_area_2 = mbs_service_area_parseFromJSON(jsonmbs_service_area_1);
	cJSON* jsonmbs_service_area_2 = mbs_service_area_convertToJSON(mbs_service_area_2);
	printf("repeating mbs_service_area:\n%s\n", cJSON_Print(jsonmbs_service_area_2));
}

int main() {
  test_mbs_service_area(1);
  test_mbs_service_area(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_service_area_MAIN
#endif // mbs_service_area_TEST
