#ifndef stored_search_result_TEST
#define stored_search_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define stored_search_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/stored_search_result.h"
stored_search_result_t* instantiate_stored_search_result(int include_optional);



stored_search_result_t* instantiate_stored_search_result(int include_optional) {
  stored_search_result_t* stored_search_result = NULL;
  if (include_optional) {
    stored_search_result = stored_search_result_create(
      list_createList()
    );
  } else {
    stored_search_result = stored_search_result_create(
      list_createList()
    );
  }

  return stored_search_result;
}


#ifdef stored_search_result_MAIN

void test_stored_search_result(int include_optional) {
    stored_search_result_t* stored_search_result_1 = instantiate_stored_search_result(include_optional);

	cJSON* jsonstored_search_result_1 = stored_search_result_convertToJSON(stored_search_result_1);
	printf("stored_search_result :\n%s\n", cJSON_Print(jsonstored_search_result_1));
	stored_search_result_t* stored_search_result_2 = stored_search_result_parseFromJSON(jsonstored_search_result_1);
	cJSON* jsonstored_search_result_2 = stored_search_result_convertToJSON(stored_search_result_2);
	printf("repeating stored_search_result:\n%s\n", cJSON_Print(jsonstored_search_result_2));
}

int main() {
  test_stored_search_result(1);
  test_stored_search_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // stored_search_result_MAIN
#endif // stored_search_result_TEST
