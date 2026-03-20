#ifndef preferred_search_TEST
#define preferred_search_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define preferred_search_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/preferred_search.h"
preferred_search_t* instantiate_preferred_search(int include_optional);



preferred_search_t* instantiate_preferred_search(int include_optional) {
  preferred_search_t* preferred_search = NULL;
  if (include_optional) {
    preferred_search = preferred_search_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    preferred_search = preferred_search_create(
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return preferred_search;
}


#ifdef preferred_search_MAIN

void test_preferred_search(int include_optional) {
    preferred_search_t* preferred_search_1 = instantiate_preferred_search(include_optional);

	cJSON* jsonpreferred_search_1 = preferred_search_convertToJSON(preferred_search_1);
	printf("preferred_search :\n%s\n", cJSON_Print(jsonpreferred_search_1));
	preferred_search_t* preferred_search_2 = preferred_search_parseFromJSON(jsonpreferred_search_1);
	cJSON* jsonpreferred_search_2 = preferred_search_convertToJSON(preferred_search_2);
	printf("repeating preferred_search:\n%s\n", cJSON_Print(jsonpreferred_search_2));
}

int main() {
  test_preferred_search(1);
  test_preferred_search(0);

  printf("Hello world \n");
  return 0;
}

#endif // preferred_search_MAIN
#endif // preferred_search_TEST
