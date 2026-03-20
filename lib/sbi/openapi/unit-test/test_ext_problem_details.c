#ifndef ext_problem_details_TEST
#define ext_problem_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ext_problem_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ext_problem_details.h"
ext_problem_details_t* instantiate_ext_problem_details(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"


ext_problem_details_t* instantiate_ext_problem_details(int include_optional) {
  ext_problem_details_t* ext_problem_details = NULL;
  if (include_optional) {
    ext_problem_details = ext_problem_details_create(
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
      "a",
      list_createList()
    );
  } else {
    ext_problem_details = ext_problem_details_create(
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
      "a",
      list_createList()
    );
  }

  return ext_problem_details;
}


#ifdef ext_problem_details_MAIN

void test_ext_problem_details(int include_optional) {
    ext_problem_details_t* ext_problem_details_1 = instantiate_ext_problem_details(include_optional);

	cJSON* jsonext_problem_details_1 = ext_problem_details_convertToJSON(ext_problem_details_1);
	printf("ext_problem_details :\n%s\n", cJSON_Print(jsonext_problem_details_1));
	ext_problem_details_t* ext_problem_details_2 = ext_problem_details_parseFromJSON(jsonext_problem_details_1);
	cJSON* jsonext_problem_details_2 = ext_problem_details_convertToJSON(ext_problem_details_2);
	printf("repeating ext_problem_details:\n%s\n", cJSON_Print(jsonext_problem_details_2));
}

int main() {
  test_ext_problem_details(1);
  test_ext_problem_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // ext_problem_details_MAIN
#endif // ext_problem_details_TEST
