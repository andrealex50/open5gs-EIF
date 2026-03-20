#ifndef tmgi_range_TEST
#define tmgi_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tmgi_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tmgi_range.h"
tmgi_range_t* instantiate_tmgi_range(int include_optional);

#include "test_plmn_id.c"


tmgi_range_t* instantiate_tmgi_range(int include_optional) {
  tmgi_range_t* tmgi_range = NULL;
  if (include_optional) {
    tmgi_range = tmgi_range_create(
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "a"
    );
  } else {
    tmgi_range = tmgi_range_create(
      "a",
      "a",
      NULL,
      "a"
    );
  }

  return tmgi_range;
}


#ifdef tmgi_range_MAIN

void test_tmgi_range(int include_optional) {
    tmgi_range_t* tmgi_range_1 = instantiate_tmgi_range(include_optional);

	cJSON* jsontmgi_range_1 = tmgi_range_convertToJSON(tmgi_range_1);
	printf("tmgi_range :\n%s\n", cJSON_Print(jsontmgi_range_1));
	tmgi_range_t* tmgi_range_2 = tmgi_range_parseFromJSON(jsontmgi_range_1);
	cJSON* jsontmgi_range_2 = tmgi_range_convertToJSON(tmgi_range_2);
	printf("repeating tmgi_range:\n%s\n", cJSON_Print(jsontmgi_range_2));
}

int main() {
  test_tmgi_range(1);
  test_tmgi_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // tmgi_range_MAIN
#endif // tmgi_range_TEST
