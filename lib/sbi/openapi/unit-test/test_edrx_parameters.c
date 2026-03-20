#ifndef edrx_parameters_TEST
#define edrx_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define edrx_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/edrx_parameters.h"
edrx_parameters_t* instantiate_edrx_parameters(int include_optional);



edrx_parameters_t* instantiate_edrx_parameters(int include_optional) {
  edrx_parameters_t* edrx_parameters = NULL;
  if (include_optional) {
    edrx_parameters = edrx_parameters_create(
      nudr_datarepository_api_openapi_file_edrx_parameters__NR,
      "a"
    );
  } else {
    edrx_parameters = edrx_parameters_create(
      nudr_datarepository_api_openapi_file_edrx_parameters__NR,
      "a"
    );
  }

  return edrx_parameters;
}


#ifdef edrx_parameters_MAIN

void test_edrx_parameters(int include_optional) {
    edrx_parameters_t* edrx_parameters_1 = instantiate_edrx_parameters(include_optional);

	cJSON* jsonedrx_parameters_1 = edrx_parameters_convertToJSON(edrx_parameters_1);
	printf("edrx_parameters :\n%s\n", cJSON_Print(jsonedrx_parameters_1));
	edrx_parameters_t* edrx_parameters_2 = edrx_parameters_parseFromJSON(jsonedrx_parameters_1);
	cJSON* jsonedrx_parameters_2 = edrx_parameters_convertToJSON(edrx_parameters_2);
	printf("repeating edrx_parameters:\n%s\n", cJSON_Print(jsonedrx_parameters_2));
}

int main() {
  test_edrx_parameters(1);
  test_edrx_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // edrx_parameters_MAIN
#endif // edrx_parameters_TEST
