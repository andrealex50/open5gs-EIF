#ifndef ptw_parameters_TEST
#define ptw_parameters_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ptw_parameters_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ptw_parameters.h"
ptw_parameters_t* instantiate_ptw_parameters(int include_optional);



ptw_parameters_t* instantiate_ptw_parameters(int include_optional) {
  ptw_parameters_t* ptw_parameters = NULL;
  if (include_optional) {
    ptw_parameters = ptw_parameters_create(
      nudr_datarepository_api_openapi_file_ptw_parameters__WB_S1,
      "a"
    );
  } else {
    ptw_parameters = ptw_parameters_create(
      nudr_datarepository_api_openapi_file_ptw_parameters__WB_S1,
      "a"
    );
  }

  return ptw_parameters;
}


#ifdef ptw_parameters_MAIN

void test_ptw_parameters(int include_optional) {
    ptw_parameters_t* ptw_parameters_1 = instantiate_ptw_parameters(include_optional);

	cJSON* jsonptw_parameters_1 = ptw_parameters_convertToJSON(ptw_parameters_1);
	printf("ptw_parameters :\n%s\n", cJSON_Print(jsonptw_parameters_1));
	ptw_parameters_t* ptw_parameters_2 = ptw_parameters_parseFromJSON(jsonptw_parameters_1);
	cJSON* jsonptw_parameters_2 = ptw_parameters_convertToJSON(ptw_parameters_2);
	printf("repeating ptw_parameters:\n%s\n", cJSON_Print(jsonptw_parameters_2));
}

int main() {
  test_ptw_parameters(1);
  test_ptw_parameters(0);

  printf("Hello world \n");
  return 0;
}

#endif // ptw_parameters_MAIN
#endif // ptw_parameters_TEST
