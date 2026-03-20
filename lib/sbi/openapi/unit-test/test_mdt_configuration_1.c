#ifndef mdt_configuration_1_TEST
#define mdt_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mdt_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mdt_configuration_1.h"
mdt_configuration_1_t* instantiate_mdt_configuration_1(int include_optional);

#include "test_area_scope.c"


mdt_configuration_1_t* instantiate_mdt_configuration_1(int include_optional) {
  mdt_configuration_1_t* mdt_configuration_1 = NULL;
  if (include_optional) {
    mdt_configuration_1 = mdt_configuration_1_create(
      nudr_datarepository_api_openapi_file_mdt_configuration_1__IMMEDIATE_MDT_ONLY,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__PERIODICAL,
       // false, not to have infinite recursion
      instantiate_area_scope(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__120,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__120,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1,
      0,
      0,
      0,
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__128,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__128,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__600,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__600,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__GNSS,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mdt_configuration_1 = mdt_configuration_1_create(
      nudr_datarepository_api_openapi_file_mdt_configuration_1__IMMEDIATE_MDT_ONLY,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__PERIODICAL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__120,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__120,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1,
      0,
      0,
      0,
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__128,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__128,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__600,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__600,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__GNSS,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration_1__1024,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mdt_configuration_1;
}


#ifdef mdt_configuration_1_MAIN

void test_mdt_configuration_1(int include_optional) {
    mdt_configuration_1_t* mdt_configuration_1_1 = instantiate_mdt_configuration_1(include_optional);

	cJSON* jsonmdt_configuration_1_1 = mdt_configuration_1_convertToJSON(mdt_configuration_1_1);
	printf("mdt_configuration_1 :\n%s\n", cJSON_Print(jsonmdt_configuration_1_1));
	mdt_configuration_1_t* mdt_configuration_1_2 = mdt_configuration_1_parseFromJSON(jsonmdt_configuration_1_1);
	cJSON* jsonmdt_configuration_1_2 = mdt_configuration_1_convertToJSON(mdt_configuration_1_2);
	printf("repeating mdt_configuration_1:\n%s\n", cJSON_Print(jsonmdt_configuration_1_2));
}

int main() {
  test_mdt_configuration_1(1);
  test_mdt_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // mdt_configuration_1_MAIN
#endif // mdt_configuration_1_TEST
