#ifndef uri_list_TEST
#define uri_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define uri_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/uri_list.h"
uri_list_t* instantiate_uri_list(int include_optional);



uri_list_t* instantiate_uri_list(int include_optional) {
  uri_list_t* uri_list = NULL;
  if (include_optional) {
    uri_list = uri_list_create(
      list_createList(),
      56
    );
  } else {
    uri_list = uri_list_create(
      list_createList(),
      56
    );
  }

  return uri_list;
}


#ifdef uri_list_MAIN

void test_uri_list(int include_optional) {
    uri_list_t* uri_list_1 = instantiate_uri_list(include_optional);

	cJSON* jsonuri_list_1 = uri_list_convertToJSON(uri_list_1);
	printf("uri_list :\n%s\n", cJSON_Print(jsonuri_list_1));
	uri_list_t* uri_list_2 = uri_list_parseFromJSON(jsonuri_list_1);
	cJSON* jsonuri_list_2 = uri_list_convertToJSON(uri_list_2);
	printf("repeating uri_list:\n%s\n", cJSON_Print(jsonuri_list_2));
}

int main() {
  test_uri_list(1);
  test_uri_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // uri_list_MAIN
#endif // uri_list_TEST
