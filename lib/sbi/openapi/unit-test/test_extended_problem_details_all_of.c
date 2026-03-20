#ifndef extended_problem_details_all_of_TEST
#define extended_problem_details_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_problem_details_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_problem_details_all_of.h"
extended_problem_details_all_of_t* instantiate_extended_problem_details_all_of(int include_optional);

#include "test_acceptable_service_info.c"


extended_problem_details_all_of_t* instantiate_extended_problem_details_all_of(int include_optional) {
  extended_problem_details_all_of_t* extended_problem_details_all_of = NULL;
  if (include_optional) {
    extended_problem_details_all_of = extended_problem_details_all_of_create(
       // false, not to have infinite recursion
      instantiate_acceptable_service_info(0)
    );
  } else {
    extended_problem_details_all_of = extended_problem_details_all_of_create(
      NULL
    );
  }

  return extended_problem_details_all_of;
}


#ifdef extended_problem_details_all_of_MAIN

void test_extended_problem_details_all_of(int include_optional) {
    extended_problem_details_all_of_t* extended_problem_details_all_of_1 = instantiate_extended_problem_details_all_of(include_optional);

	cJSON* jsonextended_problem_details_all_of_1 = extended_problem_details_all_of_convertToJSON(extended_problem_details_all_of_1);
	printf("extended_problem_details_all_of :\n%s\n", cJSON_Print(jsonextended_problem_details_all_of_1));
	extended_problem_details_all_of_t* extended_problem_details_all_of_2 = extended_problem_details_all_of_parseFromJSON(jsonextended_problem_details_all_of_1);
	cJSON* jsonextended_problem_details_all_of_2 = extended_problem_details_all_of_convertToJSON(extended_problem_details_all_of_2);
	printf("repeating extended_problem_details_all_of:\n%s\n", cJSON_Print(jsonextended_problem_details_all_of_2));
}

int main() {
  test_extended_problem_details_all_of(1);
  test_extended_problem_details_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_problem_details_all_of_MAIN
#endif // extended_problem_details_all_of_TEST
