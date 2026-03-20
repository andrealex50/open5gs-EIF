#ifndef slice_mbr_1_TEST
#define slice_mbr_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_mbr_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_mbr_1.h"
slice_mbr_1_t* instantiate_slice_mbr_1(int include_optional);



slice_mbr_1_t* instantiate_slice_mbr_1(int include_optional) {
  slice_mbr_1_t* slice_mbr_1 = NULL;
  if (include_optional) {
    slice_mbr_1 = slice_mbr_1_create(
      "a",
      "a"
    );
  } else {
    slice_mbr_1 = slice_mbr_1_create(
      "a",
      "a"
    );
  }

  return slice_mbr_1;
}


#ifdef slice_mbr_1_MAIN

void test_slice_mbr_1(int include_optional) {
    slice_mbr_1_t* slice_mbr_1_1 = instantiate_slice_mbr_1(include_optional);

	cJSON* jsonslice_mbr_1_1 = slice_mbr_1_convertToJSON(slice_mbr_1_1);
	printf("slice_mbr_1 :\n%s\n", cJSON_Print(jsonslice_mbr_1_1));
	slice_mbr_1_t* slice_mbr_1_2 = slice_mbr_1_parseFromJSON(jsonslice_mbr_1_1);
	cJSON* jsonslice_mbr_1_2 = slice_mbr_1_convertToJSON(slice_mbr_1_2);
	printf("repeating slice_mbr_1:\n%s\n", cJSON_Print(jsonslice_mbr_1_2));
}

int main() {
  test_slice_mbr_1(1);
  test_slice_mbr_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_mbr_1_MAIN
#endif // slice_mbr_1_TEST
