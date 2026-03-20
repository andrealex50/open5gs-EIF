#ifndef ptw_parameters_1_TEST
#define ptw_parameters_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ptw_parameters_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ptw_parameters_1.h"
ptw_parameters_1_t* instantiate_ptw_parameters_1(int include_optional);



ptw_parameters_1_t* instantiate_ptw_parameters_1(int include_optional) {
  ptw_parameters_1_t* ptw_parameters_1 = NULL;
  if (include_optional) {
    ptw_parameters_1 = ptw_parameters_1_create(
      nudr_datarepository_api_openapi_file_ptw_parameters_1__WB_S1,
      "a"
    );
  } else {
    ptw_parameters_1 = ptw_parameters_1_create(
      nudr_datarepository_api_openapi_file_ptw_parameters_1__WB_S1,
      "a"
    );
  }

  return ptw_parameters_1;
}


#ifdef ptw_parameters_1_MAIN

void test_ptw_parameters_1(int include_optional) {
    ptw_parameters_1_t* ptw_parameters_1_1 = instantiate_ptw_parameters_1(include_optional);

	cJSON* jsonptw_parameters_1_1 = ptw_parameters_1_convertToJSON(ptw_parameters_1_1);
	printf("ptw_parameters_1 :\n%s\n", cJSON_Print(jsonptw_parameters_1_1));
	ptw_parameters_1_t* ptw_parameters_1_2 = ptw_parameters_1_parseFromJSON(jsonptw_parameters_1_1);
	cJSON* jsonptw_parameters_1_2 = ptw_parameters_1_convertToJSON(ptw_parameters_1_2);
	printf("repeating ptw_parameters_1:\n%s\n", cJSON_Print(jsonptw_parameters_1_2));
}

int main() {
  test_ptw_parameters_1(1);
  test_ptw_parameters_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ptw_parameters_1_MAIN
#endif // ptw_parameters_1_TEST
