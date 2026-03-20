#ifndef search_result_TEST
#define search_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define search_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/search_result.h"
search_result_t* instantiate_search_result(int include_optional);

#include "test_preferred_search.c"
#include "test_no_profile_match_info.c"


search_result_t* instantiate_search_result(int include_optional) {
  search_result_t* search_result = NULL;
  if (include_optional) {
    search_result = search_result_create(
      56,
      list_createList(),
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_preferred_search(0),
      "a",
      list_createList(),
      1,
       // false, not to have infinite recursion
      instantiate_no_profile_match_info(0)
    );
  } else {
    search_result = search_result_create(
      56,
      list_createList(),
      "0",
      0,
      NULL,
      "a",
      list_createList(),
      1,
      NULL
    );
  }

  return search_result;
}


#ifdef search_result_MAIN

void test_search_result(int include_optional) {
    search_result_t* search_result_1 = instantiate_search_result(include_optional);

	cJSON* jsonsearch_result_1 = search_result_convertToJSON(search_result_1);
	printf("search_result :\n%s\n", cJSON_Print(jsonsearch_result_1));
	search_result_t* search_result_2 = search_result_parseFromJSON(jsonsearch_result_1);
	cJSON* jsonsearch_result_2 = search_result_convertToJSON(search_result_2);
	printf("repeating search_result:\n%s\n", cJSON_Print(jsonsearch_result_2));
}

int main() {
  test_search_result(1);
  test_search_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // search_result_MAIN
#endif // search_result_TEST
