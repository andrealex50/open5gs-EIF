#ifndef mdt_configuration_TEST
#define mdt_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mdt_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mdt_configuration.h"
mdt_configuration_t* instantiate_mdt_configuration(int include_optional);

#include "test_area_scope.c"


mdt_configuration_t* instantiate_mdt_configuration(int include_optional) {
  mdt_configuration_t* mdt_configuration = NULL;
  if (include_optional) {
    mdt_configuration = mdt_configuration_create(
      nudr_datarepository_api_openapi_file_mdt_configuration__IMMEDIATE_MDT_ONLY,
      nudr_datarepository_api_openapi_file_mdt_configuration__PERIODICAL,
       // false, not to have infinite recursion
      instantiate_area_scope(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__120,
      nudr_datarepository_api_openapi_file_mdt_configuration__120,
      nudr_datarepository_api_openapi_file_mdt_configuration__1,
      0,
      0,
      0,
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__128,
      nudr_datarepository_api_openapi_file_mdt_configuration__128,
      nudr_datarepository_api_openapi_file_mdt_configuration__600,
      nudr_datarepository_api_openapi_file_mdt_configuration__600,
      nudr_datarepository_api_openapi_file_mdt_configuration__GNSS,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mdt_configuration = mdt_configuration_create(
      nudr_datarepository_api_openapi_file_mdt_configuration__IMMEDIATE_MDT_ONLY,
      nudr_datarepository_api_openapi_file_mdt_configuration__PERIODICAL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__120,
      nudr_datarepository_api_openapi_file_mdt_configuration__120,
      nudr_datarepository_api_openapi_file_mdt_configuration__1,
      0,
      0,
      0,
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__128,
      nudr_datarepository_api_openapi_file_mdt_configuration__128,
      nudr_datarepository_api_openapi_file_mdt_configuration__600,
      nudr_datarepository_api_openapi_file_mdt_configuration__600,
      nudr_datarepository_api_openapi_file_mdt_configuration__GNSS,
      list_createList(),
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      nudr_datarepository_api_openapi_file_mdt_configuration__1024,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mdt_configuration;
}


#ifdef mdt_configuration_MAIN

void test_mdt_configuration(int include_optional) {
    mdt_configuration_t* mdt_configuration_1 = instantiate_mdt_configuration(include_optional);

	cJSON* jsonmdt_configuration_1 = mdt_configuration_convertToJSON(mdt_configuration_1);
	printf("mdt_configuration :\n%s\n", cJSON_Print(jsonmdt_configuration_1));
	mdt_configuration_t* mdt_configuration_2 = mdt_configuration_parseFromJSON(jsonmdt_configuration_1);
	cJSON* jsonmdt_configuration_2 = mdt_configuration_convertToJSON(mdt_configuration_2);
	printf("repeating mdt_configuration:\n%s\n", cJSON_Print(jsonmdt_configuration_2));
}

int main() {
  test_mdt_configuration(1);
  test_mdt_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // mdt_configuration_MAIN
#endif // mdt_configuration_TEST
