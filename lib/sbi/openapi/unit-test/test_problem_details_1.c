#ifndef problem_details_1_TEST
#define problem_details_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define problem_details_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/problem_details_1.h"
problem_details_1_t* instantiate_problem_details_1(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"


problem_details_1_t* instantiate_problem_details_1(int include_optional) {
  problem_details_1_t* problem_details_1 = NULL;
  if (include_optional) {
    problem_details_1 = problem_details_1_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_access_token_err(0),
       // false, not to have infinite recursion
      instantiate_access_token_req(0),
      "a"
    );
  } else {
    problem_details_1 = problem_details_1_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
      NULL,
      NULL,
      "a"
    );
  }

  return problem_details_1;
}


#ifdef problem_details_1_MAIN

void test_problem_details_1(int include_optional) {
    problem_details_1_t* problem_details_1_1 = instantiate_problem_details_1(include_optional);

	cJSON* jsonproblem_details_1_1 = problem_details_1_convertToJSON(problem_details_1_1);
	printf("problem_details_1 :\n%s\n", cJSON_Print(jsonproblem_details_1_1));
	problem_details_1_t* problem_details_1_2 = problem_details_1_parseFromJSON(jsonproblem_details_1_1);
	cJSON* jsonproblem_details_1_2 = problem_details_1_convertToJSON(problem_details_1_2);
	printf("repeating problem_details_1:\n%s\n", cJSON_Print(jsonproblem_details_1_2));
}

int main() {
  test_problem_details_1(1);
  test_problem_details_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // problem_details_1_MAIN
#endif // problem_details_1_TEST
