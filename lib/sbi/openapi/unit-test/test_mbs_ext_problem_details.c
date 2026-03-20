#ifndef mbs_ext_problem_details_TEST
#define mbs_ext_problem_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_ext_problem_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_ext_problem_details.h"
mbs_ext_problem_details_t* instantiate_mbs_ext_problem_details(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"


mbs_ext_problem_details_t* instantiate_mbs_ext_problem_details(int include_optional) {
  mbs_ext_problem_details_t* mbs_ext_problem_details = NULL;
  if (include_optional) {
    mbs_ext_problem_details = mbs_ext_problem_details_create(
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
    mbs_ext_problem_details = mbs_ext_problem_details_create(
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

  return mbs_ext_problem_details;
}


#ifdef mbs_ext_problem_details_MAIN

void test_mbs_ext_problem_details(int include_optional) {
    mbs_ext_problem_details_t* mbs_ext_problem_details_1 = instantiate_mbs_ext_problem_details(include_optional);

	cJSON* jsonmbs_ext_problem_details_1 = mbs_ext_problem_details_convertToJSON(mbs_ext_problem_details_1);
	printf("mbs_ext_problem_details :\n%s\n", cJSON_Print(jsonmbs_ext_problem_details_1));
	mbs_ext_problem_details_t* mbs_ext_problem_details_2 = mbs_ext_problem_details_parseFromJSON(jsonmbs_ext_problem_details_1);
	cJSON* jsonmbs_ext_problem_details_2 = mbs_ext_problem_details_convertToJSON(mbs_ext_problem_details_2);
	printf("repeating mbs_ext_problem_details:\n%s\n", cJSON_Print(jsonmbs_ext_problem_details_2));
}

int main() {
  test_mbs_ext_problem_details(1);
  test_mbs_ext_problem_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_ext_problem_details_MAIN
#endif // mbs_ext_problem_details_TEST
