#ifndef lmf_info_TEST
#define lmf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lmf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lmf_info.h"
lmf_info_t* instantiate_lmf_info(int include_optional);



lmf_info_t* instantiate_lmf_info(int include_optional) {
  lmf_info_t* lmf_info = NULL;
  if (include_optional) {
    lmf_info = lmf_info_create(
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    lmf_info = lmf_info_create(
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return lmf_info;
}


#ifdef lmf_info_MAIN

void test_lmf_info(int include_optional) {
    lmf_info_t* lmf_info_1 = instantiate_lmf_info(include_optional);

	cJSON* jsonlmf_info_1 = lmf_info_convertToJSON(lmf_info_1);
	printf("lmf_info :\n%s\n", cJSON_Print(jsonlmf_info_1));
	lmf_info_t* lmf_info_2 = lmf_info_parseFromJSON(jsonlmf_info_1);
	cJSON* jsonlmf_info_2 = lmf_info_convertToJSON(lmf_info_2);
	printf("repeating lmf_info:\n%s\n", cJSON_Print(jsonlmf_info_2));
}

int main() {
  test_lmf_info(1);
  test_lmf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // lmf_info_MAIN
#endif // lmf_info_TEST
