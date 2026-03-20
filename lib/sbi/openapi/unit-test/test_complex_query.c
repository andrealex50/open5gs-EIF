#ifndef complex_query_TEST
#define complex_query_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define complex_query_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/complex_query.h"
complex_query_t* instantiate_complex_query(int include_optional);



complex_query_t* instantiate_complex_query(int include_optional) {
  complex_query_t* complex_query = NULL;
  if (include_optional) {
    complex_query = complex_query_create(
      list_createList(),
      list_createList()
    );
  } else {
    complex_query = complex_query_create(
      list_createList(),
      list_createList()
    );
  }

  return complex_query;
}


#ifdef complex_query_MAIN

void test_complex_query(int include_optional) {
    complex_query_t* complex_query_1 = instantiate_complex_query(include_optional);

	cJSON* jsoncomplex_query_1 = complex_query_convertToJSON(complex_query_1);
	printf("complex_query :\n%s\n", cJSON_Print(jsoncomplex_query_1));
	complex_query_t* complex_query_2 = complex_query_parseFromJSON(jsoncomplex_query_1);
	cJSON* jsoncomplex_query_2 = complex_query_convertToJSON(complex_query_2);
	printf("repeating complex_query:\n%s\n", cJSON_Print(jsoncomplex_query_2));
}

int main() {
  test_complex_query(1);
  test_complex_query(0);

  printf("Hello world \n");
  return 0;
}

#endif // complex_query_MAIN
#endif // complex_query_TEST
