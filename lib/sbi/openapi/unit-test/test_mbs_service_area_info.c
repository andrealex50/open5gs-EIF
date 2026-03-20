#ifndef mbs_service_area_info_TEST
#define mbs_service_area_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_service_area_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_service_area_info.h"
mbs_service_area_info_t* instantiate_mbs_service_area_info(int include_optional);

#include "test_mbs_service_area.c"


mbs_service_area_info_t* instantiate_mbs_service_area_info(int include_optional) {
  mbs_service_area_info_t* mbs_service_area_info = NULL;
  if (include_optional) {
    mbs_service_area_info = mbs_service_area_info_create(
      0,
       // false, not to have infinite recursion
      instantiate_mbs_service_area(0)
    );
  } else {
    mbs_service_area_info = mbs_service_area_info_create(
      0,
      NULL
    );
  }

  return mbs_service_area_info;
}


#ifdef mbs_service_area_info_MAIN

void test_mbs_service_area_info(int include_optional) {
    mbs_service_area_info_t* mbs_service_area_info_1 = instantiate_mbs_service_area_info(include_optional);

	cJSON* jsonmbs_service_area_info_1 = mbs_service_area_info_convertToJSON(mbs_service_area_info_1);
	printf("mbs_service_area_info :\n%s\n", cJSON_Print(jsonmbs_service_area_info_1));
	mbs_service_area_info_t* mbs_service_area_info_2 = mbs_service_area_info_parseFromJSON(jsonmbs_service_area_info_1);
	cJSON* jsonmbs_service_area_info_2 = mbs_service_area_info_convertToJSON(mbs_service_area_info_2);
	printf("repeating mbs_service_area_info:\n%s\n", cJSON_Print(jsonmbs_service_area_info_2));
}

int main() {
  test_mbs_service_area_info(1);
  test_mbs_service_area_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_service_area_info_MAIN
#endif // mbs_service_area_info_TEST
