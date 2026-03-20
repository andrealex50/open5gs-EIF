#ifndef uri_scheme_TEST
#define uri_scheme_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define uri_scheme_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/uri_scheme.h"
uri_scheme_t* instantiate_uri_scheme(int include_optional);



uri_scheme_t* instantiate_uri_scheme(int include_optional) {
  uri_scheme_t* uri_scheme = NULL;
  if (include_optional) {
    uri_scheme = uri_scheme_create(
    );
  } else {
    uri_scheme = uri_scheme_create(
    );
  }

  return uri_scheme;
}


#ifdef uri_scheme_MAIN

void test_uri_scheme(int include_optional) {
    uri_scheme_t* uri_scheme_1 = instantiate_uri_scheme(include_optional);

	cJSON* jsonuri_scheme_1 = uri_scheme_convertToJSON(uri_scheme_1);
	printf("uri_scheme :\n%s\n", cJSON_Print(jsonuri_scheme_1));
	uri_scheme_t* uri_scheme_2 = uri_scheme_parseFromJSON(jsonuri_scheme_1);
	cJSON* jsonuri_scheme_2 = uri_scheme_convertToJSON(uri_scheme_2);
	printf("repeating uri_scheme:\n%s\n", cJSON_Print(jsonuri_scheme_2));
}

int main() {
  test_uri_scheme(1);
  test_uri_scheme(0);

  printf("Hello world \n");
  return 0;
}

#endif // uri_scheme_MAIN
#endif // uri_scheme_TEST
