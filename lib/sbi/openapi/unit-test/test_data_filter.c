#ifndef data_filter_TEST
#define data_filter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_filter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_filter.h"
data_filter_t* instantiate_data_filter(int include_optional);

#include "test_data_ind.c"


data_filter_t* instantiate_data_filter(int include_optional) {
  data_filter_t* data_filter = NULL;
  if (include_optional) {
    data_filter = data_filter_create(
      null,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList()
    );
  } else {
    data_filter = data_filter_create(
      null,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList()
    );
  }

  return data_filter;
}


#ifdef data_filter_MAIN

void test_data_filter(int include_optional) {
    data_filter_t* data_filter_1 = instantiate_data_filter(include_optional);

	cJSON* jsondata_filter_1 = data_filter_convertToJSON(data_filter_1);
	printf("data_filter :\n%s\n", cJSON_Print(jsondata_filter_1));
	data_filter_t* data_filter_2 = data_filter_parseFromJSON(jsondata_filter_1);
	cJSON* jsondata_filter_2 = data_filter_convertToJSON(data_filter_2);
	printf("repeating data_filter:\n%s\n", cJSON_Print(jsondata_filter_2));
}

int main() {
  test_data_filter(1);
  test_data_filter(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_filter_MAIN
#endif // data_filter_TEST
