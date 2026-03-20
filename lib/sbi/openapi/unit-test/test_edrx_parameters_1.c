#ifndef edrx_parameters_1_TEST
#define edrx_parameters_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define edrx_parameters_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/edrx_parameters_1.h"
edrx_parameters_1_t* instantiate_edrx_parameters_1(int include_optional);



edrx_parameters_1_t* instantiate_edrx_parameters_1(int include_optional) {
  edrx_parameters_1_t* edrx_parameters_1 = NULL;
  if (include_optional) {
    edrx_parameters_1 = edrx_parameters_1_create(
      nudr_datarepository_api_openapi_file_edrx_parameters_1__NR,
      "a"
    );
  } else {
    edrx_parameters_1 = edrx_parameters_1_create(
      nudr_datarepository_api_openapi_file_edrx_parameters_1__NR,
      "a"
    );
  }

  return edrx_parameters_1;
}


#ifdef edrx_parameters_1_MAIN

void test_edrx_parameters_1(int include_optional) {
    edrx_parameters_1_t* edrx_parameters_1_1 = instantiate_edrx_parameters_1(include_optional);

	cJSON* jsonedrx_parameters_1_1 = edrx_parameters_1_convertToJSON(edrx_parameters_1_1);
	printf("edrx_parameters_1 :\n%s\n", cJSON_Print(jsonedrx_parameters_1_1));
	edrx_parameters_1_t* edrx_parameters_1_2 = edrx_parameters_1_parseFromJSON(jsonedrx_parameters_1_1);
	cJSON* jsonedrx_parameters_1_2 = edrx_parameters_1_convertToJSON(edrx_parameters_1_2);
	printf("repeating edrx_parameters_1:\n%s\n", cJSON_Print(jsonedrx_parameters_1_2));
}

int main() {
  test_edrx_parameters_1(1);
  test_edrx_parameters_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // edrx_parameters_1_MAIN
#endif // edrx_parameters_1_TEST
