#ifndef dccf_info_TEST
#define dccf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dccf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dccf_info.h"
dccf_info_t* instantiate_dccf_info(int include_optional);



dccf_info_t* instantiate_dccf_info(int include_optional) {
  dccf_info_t* dccf_info = NULL;
  if (include_optional) {
    dccf_info = dccf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    dccf_info = dccf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return dccf_info;
}


#ifdef dccf_info_MAIN

void test_dccf_info(int include_optional) {
    dccf_info_t* dccf_info_1 = instantiate_dccf_info(include_optional);

	cJSON* jsondccf_info_1 = dccf_info_convertToJSON(dccf_info_1);
	printf("dccf_info :\n%s\n", cJSON_Print(jsondccf_info_1));
	dccf_info_t* dccf_info_2 = dccf_info_parseFromJSON(jsondccf_info_1);
	cJSON* jsondccf_info_2 = dccf_info_convertToJSON(dccf_info_2);
	printf("repeating dccf_info:\n%s\n", cJSON_Print(jsondccf_info_2));
}

int main() {
  test_dccf_info(1);
  test_dccf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // dccf_info_MAIN
#endif // dccf_info_TEST
