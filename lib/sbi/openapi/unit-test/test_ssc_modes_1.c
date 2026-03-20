#ifndef ssc_modes_1_TEST
#define ssc_modes_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ssc_modes_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ssc_modes_1.h"
ssc_modes_1_t* instantiate_ssc_modes_1(int include_optional);



ssc_modes_1_t* instantiate_ssc_modes_1(int include_optional) {
  ssc_modes_1_t* ssc_modes_1 = NULL;
  if (include_optional) {
    ssc_modes_1 = ssc_modes_1_create(
      nudr_datarepository_api_openapi_file_ssc_modes_1__SSC_MODE_1,
      list_createList()
    );
  } else {
    ssc_modes_1 = ssc_modes_1_create(
      nudr_datarepository_api_openapi_file_ssc_modes_1__SSC_MODE_1,
      list_createList()
    );
  }

  return ssc_modes_1;
}


#ifdef ssc_modes_1_MAIN

void test_ssc_modes_1(int include_optional) {
    ssc_modes_1_t* ssc_modes_1_1 = instantiate_ssc_modes_1(include_optional);

	cJSON* jsonssc_modes_1_1 = ssc_modes_1_convertToJSON(ssc_modes_1_1);
	printf("ssc_modes_1 :\n%s\n", cJSON_Print(jsonssc_modes_1_1));
	ssc_modes_1_t* ssc_modes_1_2 = ssc_modes_1_parseFromJSON(jsonssc_modes_1_1);
	cJSON* jsonssc_modes_1_2 = ssc_modes_1_convertToJSON(ssc_modes_1_2);
	printf("repeating ssc_modes_1:\n%s\n", cJSON_Print(jsonssc_modes_1_2));
}

int main() {
  test_ssc_modes_1(1);
  test_ssc_modes_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ssc_modes_1_MAIN
#endif // ssc_modes_1_TEST
