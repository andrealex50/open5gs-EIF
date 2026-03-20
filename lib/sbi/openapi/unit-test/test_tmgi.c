#ifndef tmgi_TEST
#define tmgi_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tmgi_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tmgi.h"
tmgi_t* instantiate_tmgi(int include_optional);

#include "test_plmn_id.c"


tmgi_t* instantiate_tmgi(int include_optional) {
  tmgi_t* tmgi = NULL;
  if (include_optional) {
    tmgi = tmgi_create(
      "a",
       // false, not to have infinite recursion
      instantiate_plmn_id(0)
    );
  } else {
    tmgi = tmgi_create(
      "a",
      NULL
    );
  }

  return tmgi;
}


#ifdef tmgi_MAIN

void test_tmgi(int include_optional) {
    tmgi_t* tmgi_1 = instantiate_tmgi(include_optional);

	cJSON* jsontmgi_1 = tmgi_convertToJSON(tmgi_1);
	printf("tmgi :\n%s\n", cJSON_Print(jsontmgi_1));
	tmgi_t* tmgi_2 = tmgi_parseFromJSON(jsontmgi_1);
	cJSON* jsontmgi_2 = tmgi_convertToJSON(tmgi_2);
	printf("repeating tmgi:\n%s\n", cJSON_Print(jsontmgi_2));
}

int main() {
  test_tmgi(1);
  test_tmgi(0);

  printf("Hello world \n");
  return 0;
}

#endif // tmgi_MAIN
#endif // tmgi_TEST
