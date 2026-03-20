#ifndef ssc_modes_TEST
#define ssc_modes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ssc_modes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ssc_modes.h"
ssc_modes_t* instantiate_ssc_modes(int include_optional);



ssc_modes_t* instantiate_ssc_modes(int include_optional) {
  ssc_modes_t* ssc_modes = NULL;
  if (include_optional) {
    ssc_modes = ssc_modes_create(
      nudr_datarepository_api_openapi_file_ssc_modes__SSC_MODE_1,
      list_createList()
    );
  } else {
    ssc_modes = ssc_modes_create(
      nudr_datarepository_api_openapi_file_ssc_modes__SSC_MODE_1,
      list_createList()
    );
  }

  return ssc_modes;
}


#ifdef ssc_modes_MAIN

void test_ssc_modes(int include_optional) {
    ssc_modes_t* ssc_modes_1 = instantiate_ssc_modes(include_optional);

	cJSON* jsonssc_modes_1 = ssc_modes_convertToJSON(ssc_modes_1);
	printf("ssc_modes :\n%s\n", cJSON_Print(jsonssc_modes_1));
	ssc_modes_t* ssc_modes_2 = ssc_modes_parseFromJSON(jsonssc_modes_1);
	cJSON* jsonssc_modes_2 = ssc_modes_convertToJSON(ssc_modes_2);
	printf("repeating ssc_modes:\n%s\n", cJSON_Print(jsonssc_modes_2));
}

int main() {
  test_ssc_modes(1);
  test_ssc_modes(0);

  printf("Hello world \n");
  return 0;
}

#endif // ssc_modes_MAIN
#endif // ssc_modes_TEST
