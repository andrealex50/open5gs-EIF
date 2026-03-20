#ifndef ue_slice_mbr_TEST
#define ue_slice_mbr_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_slice_mbr_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_slice_mbr.h"
ue_slice_mbr_t* instantiate_ue_slice_mbr(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"


ue_slice_mbr_t* instantiate_ue_slice_mbr(int include_optional) {
  ue_slice_mbr_t* ue_slice_mbr = NULL;
  if (include_optional) {
    ue_slice_mbr = ue_slice_mbr_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    ue_slice_mbr = ue_slice_mbr_create(
      list_createList(),
      NULL,
      NULL
    );
  }

  return ue_slice_mbr;
}


#ifdef ue_slice_mbr_MAIN

void test_ue_slice_mbr(int include_optional) {
    ue_slice_mbr_t* ue_slice_mbr_1 = instantiate_ue_slice_mbr(include_optional);

	cJSON* jsonue_slice_mbr_1 = ue_slice_mbr_convertToJSON(ue_slice_mbr_1);
	printf("ue_slice_mbr :\n%s\n", cJSON_Print(jsonue_slice_mbr_1));
	ue_slice_mbr_t* ue_slice_mbr_2 = ue_slice_mbr_parseFromJSON(jsonue_slice_mbr_1);
	cJSON* jsonue_slice_mbr_2 = ue_slice_mbr_convertToJSON(ue_slice_mbr_2);
	printf("repeating ue_slice_mbr:\n%s\n", cJSON_Print(jsonue_slice_mbr_2));
}

int main() {
  test_ue_slice_mbr(1);
  test_ue_slice_mbr(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_slice_mbr_MAIN
#endif // ue_slice_mbr_TEST
