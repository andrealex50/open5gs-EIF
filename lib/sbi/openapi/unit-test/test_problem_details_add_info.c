#ifndef problem_details_add_info_TEST
#define problem_details_add_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define problem_details_add_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/problem_details_add_info.h"
problem_details_add_info_t* instantiate_problem_details_add_info(int include_optional);



problem_details_add_info_t* instantiate_problem_details_add_info(int include_optional) {
  problem_details_add_info_t* problem_details_add_info = NULL;
  if (include_optional) {
    problem_details_add_info = problem_details_add_info_create(
      1
    );
  } else {
    problem_details_add_info = problem_details_add_info_create(
      1
    );
  }

  return problem_details_add_info;
}


#ifdef problem_details_add_info_MAIN

void test_problem_details_add_info(int include_optional) {
    problem_details_add_info_t* problem_details_add_info_1 = instantiate_problem_details_add_info(include_optional);

	cJSON* jsonproblem_details_add_info_1 = problem_details_add_info_convertToJSON(problem_details_add_info_1);
	printf("problem_details_add_info :\n%s\n", cJSON_Print(jsonproblem_details_add_info_1));
	problem_details_add_info_t* problem_details_add_info_2 = problem_details_add_info_parseFromJSON(jsonproblem_details_add_info_1);
	cJSON* jsonproblem_details_add_info_2 = problem_details_add_info_convertToJSON(problem_details_add_info_2);
	printf("repeating problem_details_add_info:\n%s\n", cJSON_Print(jsonproblem_details_add_info_2));
}

int main() {
  test_problem_details_add_info(1);
  test_problem_details_add_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // problem_details_add_info_MAIN
#endif // problem_details_add_info_TEST
