#ifndef af_external_TEST
#define af_external_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_external_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_external.h"
af_external_t* instantiate_af_external(int include_optional);

#include "test_valid_time_period.c"


af_external_t* instantiate_af_external(int include_optional) {
  af_external_t* af_external = NULL;
  if (include_optional) {
    af_external = af_external_create(
      "0",
      list_createList(),
      nudr_datarepository_api_openapi_file_af_external__LOCATION_NOT_ALLOWED,
       // false, not to have infinite recursion
      instantiate_valid_time_period(0)
    );
  } else {
    af_external = af_external_create(
      "0",
      list_createList(),
      nudr_datarepository_api_openapi_file_af_external__LOCATION_NOT_ALLOWED,
      NULL
    );
  }

  return af_external;
}


#ifdef af_external_MAIN

void test_af_external(int include_optional) {
    af_external_t* af_external_1 = instantiate_af_external(include_optional);

	cJSON* jsonaf_external_1 = af_external_convertToJSON(af_external_1);
	printf("af_external :\n%s\n", cJSON_Print(jsonaf_external_1));
	af_external_t* af_external_2 = af_external_parseFromJSON(jsonaf_external_1);
	cJSON* jsonaf_external_2 = af_external_convertToJSON(af_external_2);
	printf("repeating af_external:\n%s\n", cJSON_Print(jsonaf_external_2));
}

int main() {
  test_af_external(1);
  test_af_external(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_external_MAIN
#endif // af_external_TEST
