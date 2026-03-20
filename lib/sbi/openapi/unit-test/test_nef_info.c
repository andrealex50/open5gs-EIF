#ifndef nef_info_TEST
#define nef_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nef_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nef_info.h"
nef_info_t* instantiate_nef_info(int include_optional);

#include "test_pfd_data.c"
#include "test_af_event_exposure_data.c"


nef_info_t* instantiate_nef_info(int include_optional) {
  nef_info_t* nef_info = NULL;
  if (include_optional) {
    nef_info = nef_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_pfd_data(0),
       // false, not to have infinite recursion
      instantiate_af_event_exposure_data(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1
    );
  } else {
    nef_info = nef_info_create(
      "0",
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1
    );
  }

  return nef_info;
}


#ifdef nef_info_MAIN

void test_nef_info(int include_optional) {
    nef_info_t* nef_info_1 = instantiate_nef_info(include_optional);

	cJSON* jsonnef_info_1 = nef_info_convertToJSON(nef_info_1);
	printf("nef_info :\n%s\n", cJSON_Print(jsonnef_info_1));
	nef_info_t* nef_info_2 = nef_info_parseFromJSON(jsonnef_info_1);
	cJSON* jsonnef_info_2 = nef_info_convertToJSON(nef_info_2);
	printf("repeating nef_info:\n%s\n", cJSON_Print(jsonnef_info_2));
}

int main() {
  test_nef_info(1);
  test_nef_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nef_info_MAIN
#endif // nef_info_TEST
