#ifndef slice_mbr_rm_TEST
#define slice_mbr_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_mbr_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_mbr_rm.h"
slice_mbr_rm_t* instantiate_slice_mbr_rm(int include_optional);



slice_mbr_rm_t* instantiate_slice_mbr_rm(int include_optional) {
  slice_mbr_rm_t* slice_mbr_rm = NULL;
  if (include_optional) {
    slice_mbr_rm = slice_mbr_rm_create(
      "a",
      "a"
    );
  } else {
    slice_mbr_rm = slice_mbr_rm_create(
      "a",
      "a"
    );
  }

  return slice_mbr_rm;
}


#ifdef slice_mbr_rm_MAIN

void test_slice_mbr_rm(int include_optional) {
    slice_mbr_rm_t* slice_mbr_rm_1 = instantiate_slice_mbr_rm(include_optional);

	cJSON* jsonslice_mbr_rm_1 = slice_mbr_rm_convertToJSON(slice_mbr_rm_1);
	printf("slice_mbr_rm :\n%s\n", cJSON_Print(jsonslice_mbr_rm_1));
	slice_mbr_rm_t* slice_mbr_rm_2 = slice_mbr_rm_parseFromJSON(jsonslice_mbr_rm_1);
	cJSON* jsonslice_mbr_rm_2 = slice_mbr_rm_convertToJSON(slice_mbr_rm_2);
	printf("repeating slice_mbr_rm:\n%s\n", cJSON_Print(jsonslice_mbr_rm_2));
}

int main() {
  test_slice_mbr_rm(1);
  test_slice_mbr_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_mbr_rm_MAIN
#endif // slice_mbr_rm_TEST
