#ifndef tmgi_1_TEST
#define tmgi_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tmgi_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tmgi_1.h"
tmgi_1_t* instantiate_tmgi_1(int include_optional);

#include "test_plmn_id_1.c"


tmgi_1_t* instantiate_tmgi_1(int include_optional) {
  tmgi_1_t* tmgi_1 = NULL;
  if (include_optional) {
    tmgi_1 = tmgi_1_create(
      "a",
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0)
    );
  } else {
    tmgi_1 = tmgi_1_create(
      "a",
      NULL
    );
  }

  return tmgi_1;
}


#ifdef tmgi_1_MAIN

void test_tmgi_1(int include_optional) {
    tmgi_1_t* tmgi_1_1 = instantiate_tmgi_1(include_optional);

	cJSON* jsontmgi_1_1 = tmgi_1_convertToJSON(tmgi_1_1);
	printf("tmgi_1 :\n%s\n", cJSON_Print(jsontmgi_1_1));
	tmgi_1_t* tmgi_1_2 = tmgi_1_parseFromJSON(jsontmgi_1_1);
	cJSON* jsontmgi_1_2 = tmgi_1_convertToJSON(tmgi_1_2);
	printf("repeating tmgi_1:\n%s\n", cJSON_Print(jsontmgi_1_2));
}

int main() {
  test_tmgi_1(1);
  test_tmgi_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // tmgi_1_MAIN
#endif // tmgi_1_TEST
