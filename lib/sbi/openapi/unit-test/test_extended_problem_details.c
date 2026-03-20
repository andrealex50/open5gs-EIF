#ifndef extended_problem_details_TEST
#define extended_problem_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_problem_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_problem_details.h"
extended_problem_details_t* instantiate_extended_problem_details(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"
#include "test_acceptable_service_info.c"


extended_problem_details_t* instantiate_extended_problem_details(int include_optional) {
  extended_problem_details_t* extended_problem_details = NULL;
  if (include_optional) {
    extended_problem_details = extended_problem_details_create(
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
      "a",
       // false, not to have infinite recursion
      instantiate_acceptable_service_info(0)
    );
  } else {
    extended_problem_details = extended_problem_details_create(
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
      "a",
      NULL
    );
  }

  return extended_problem_details;
}


#ifdef extended_problem_details_MAIN

void test_extended_problem_details(int include_optional) {
    extended_problem_details_t* extended_problem_details_1 = instantiate_extended_problem_details(include_optional);

	cJSON* jsonextended_problem_details_1 = extended_problem_details_convertToJSON(extended_problem_details_1);
	printf("extended_problem_details :\n%s\n", cJSON_Print(jsonextended_problem_details_1));
	extended_problem_details_t* extended_problem_details_2 = extended_problem_details_parseFromJSON(jsonextended_problem_details_1);
	cJSON* jsonextended_problem_details_2 = extended_problem_details_convertToJSON(extended_problem_details_2);
	printf("repeating extended_problem_details:\n%s\n", cJSON_Print(jsonextended_problem_details_2));
}

int main() {
  test_extended_problem_details(1);
  test_extended_problem_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_problem_details_MAIN
#endif // extended_problem_details_TEST
