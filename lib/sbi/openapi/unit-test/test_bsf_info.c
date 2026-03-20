#ifndef bsf_info_TEST
#define bsf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_info.h"
bsf_info_t* instantiate_bsf_info(int include_optional);



bsf_info_t* instantiate_bsf_info(int include_optional) {
  bsf_info_t* bsf_info = NULL;
  if (include_optional) {
    bsf_info = bsf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      "0",
      list_createList(),
      list_createList()
    );
  } else {
    bsf_info = bsf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      "0",
      list_createList(),
      list_createList()
    );
  }

  return bsf_info;
}


#ifdef bsf_info_MAIN

void test_bsf_info(int include_optional) {
    bsf_info_t* bsf_info_1 = instantiate_bsf_info(include_optional);

	cJSON* jsonbsf_info_1 = bsf_info_convertToJSON(bsf_info_1);
	printf("bsf_info :\n%s\n", cJSON_Print(jsonbsf_info_1));
	bsf_info_t* bsf_info_2 = bsf_info_parseFromJSON(jsonbsf_info_1);
	cJSON* jsonbsf_info_2 = bsf_info_convertToJSON(bsf_info_2);
	printf("repeating bsf_info:\n%s\n", cJSON_Print(jsonbsf_info_2));
}

int main() {
  test_bsf_info(1);
  test_bsf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_info_MAIN
#endif // bsf_info_TEST
