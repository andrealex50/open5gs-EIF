#ifndef lcs_client_external_TEST
#define lcs_client_external_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_client_external_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_client_external.h"
lcs_client_external_t* instantiate_lcs_client_external(int include_optional);

#include "test_valid_time_period.c"


lcs_client_external_t* instantiate_lcs_client_external(int include_optional) {
  lcs_client_external_t* lcs_client_external = NULL;
  if (include_optional) {
    lcs_client_external = lcs_client_external_create(
      list_createList(),
      nudr_datarepository_api_openapi_file_lcs_client_external__LOCATION_NOT_ALLOWED,
       // false, not to have infinite recursion
      instantiate_valid_time_period(0)
    );
  } else {
    lcs_client_external = lcs_client_external_create(
      list_createList(),
      nudr_datarepository_api_openapi_file_lcs_client_external__LOCATION_NOT_ALLOWED,
      NULL
    );
  }

  return lcs_client_external;
}


#ifdef lcs_client_external_MAIN

void test_lcs_client_external(int include_optional) {
    lcs_client_external_t* lcs_client_external_1 = instantiate_lcs_client_external(include_optional);

	cJSON* jsonlcs_client_external_1 = lcs_client_external_convertToJSON(lcs_client_external_1);
	printf("lcs_client_external :\n%s\n", cJSON_Print(jsonlcs_client_external_1));
	lcs_client_external_t* lcs_client_external_2 = lcs_client_external_parseFromJSON(jsonlcs_client_external_1);
	cJSON* jsonlcs_client_external_2 = lcs_client_external_convertToJSON(lcs_client_external_2);
	printf("repeating lcs_client_external:\n%s\n", cJSON_Print(jsonlcs_client_external_2));
}

int main() {
  test_lcs_client_external(1);
  test_lcs_client_external(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_client_external_MAIN
#endif // lcs_client_external_TEST
