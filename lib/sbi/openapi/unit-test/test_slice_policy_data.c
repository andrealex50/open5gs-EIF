#ifndef slice_policy_data_TEST
#define slice_policy_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_policy_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_policy_data.h"
slice_policy_data_t* instantiate_slice_policy_data(int include_optional);



slice_policy_data_t* instantiate_slice_policy_data(int include_optional) {
  slice_policy_data_t* slice_policy_data = NULL;
  if (include_optional) {
    slice_policy_data = slice_policy_data_create(
      "a",
      "a",
      "a",
      "a",
      "a",
      list_createList()
    );
  } else {
    slice_policy_data = slice_policy_data_create(
      "a",
      "a",
      "a",
      "a",
      "a",
      list_createList()
    );
  }

  return slice_policy_data;
}


#ifdef slice_policy_data_MAIN

void test_slice_policy_data(int include_optional) {
    slice_policy_data_t* slice_policy_data_1 = instantiate_slice_policy_data(include_optional);

	cJSON* jsonslice_policy_data_1 = slice_policy_data_convertToJSON(slice_policy_data_1);
	printf("slice_policy_data :\n%s\n", cJSON_Print(jsonslice_policy_data_1));
	slice_policy_data_t* slice_policy_data_2 = slice_policy_data_parseFromJSON(jsonslice_policy_data_1);
	cJSON* jsonslice_policy_data_2 = slice_policy_data_convertToJSON(slice_policy_data_2);
	printf("repeating slice_policy_data:\n%s\n", cJSON_Print(jsonslice_policy_data_2));
}

int main() {
  test_slice_policy_data(1);
  test_slice_policy_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_policy_data_MAIN
#endif // slice_policy_data_TEST
