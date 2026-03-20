#ifndef tngf_info_TEST
#define tngf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tngf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tngf_info.h"
tngf_info_t* instantiate_tngf_info(int include_optional);



tngf_info_t* instantiate_tngf_info(int include_optional) {
  tngf_info_t* tngf_info = NULL;
  if (include_optional) {
    tngf_info = tngf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    tngf_info = tngf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return tngf_info;
}


#ifdef tngf_info_MAIN

void test_tngf_info(int include_optional) {
    tngf_info_t* tngf_info_1 = instantiate_tngf_info(include_optional);

	cJSON* jsontngf_info_1 = tngf_info_convertToJSON(tngf_info_1);
	printf("tngf_info :\n%s\n", cJSON_Print(jsontngf_info_1));
	tngf_info_t* tngf_info_2 = tngf_info_parseFromJSON(jsontngf_info_1);
	cJSON* jsontngf_info_2 = tngf_info_convertToJSON(tngf_info_2);
	printf("repeating tngf_info:\n%s\n", cJSON_Print(jsontngf_info_2));
}

int main() {
  test_tngf_info(1);
  test_tngf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // tngf_info_MAIN
#endif // tngf_info_TEST
