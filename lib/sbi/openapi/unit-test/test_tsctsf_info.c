#ifndef tsctsf_info_TEST
#define tsctsf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tsctsf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tsctsf_info.h"
tsctsf_info_t* instantiate_tsctsf_info(int include_optional);



tsctsf_info_t* instantiate_tsctsf_info(int include_optional) {
  tsctsf_info_t* tsctsf_info = NULL;
  if (include_optional) {
    tsctsf_info = tsctsf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    tsctsf_info = tsctsf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return tsctsf_info;
}


#ifdef tsctsf_info_MAIN

void test_tsctsf_info(int include_optional) {
    tsctsf_info_t* tsctsf_info_1 = instantiate_tsctsf_info(include_optional);

	cJSON* jsontsctsf_info_1 = tsctsf_info_convertToJSON(tsctsf_info_1);
	printf("tsctsf_info :\n%s\n", cJSON_Print(jsontsctsf_info_1));
	tsctsf_info_t* tsctsf_info_2 = tsctsf_info_parseFromJSON(jsontsctsf_info_1);
	cJSON* jsontsctsf_info_2 = tsctsf_info_convertToJSON(tsctsf_info_2);
	printf("repeating tsctsf_info:\n%s\n", cJSON_Print(jsontsctsf_info_2));
}

int main() {
  test_tsctsf_info(1);
  test_tsctsf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // tsctsf_info_MAIN
#endif // tsctsf_info_TEST
