#ifndef udr_info_TEST
#define udr_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define udr_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/udr_info.h"
udr_info_t* instantiate_udr_info(int include_optional);



udr_info_t* instantiate_udr_info(int include_optional) {
  udr_info_t* udr_info = NULL;
  if (include_optional) {
    udr_info = udr_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    udr_info = udr_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return udr_info;
}


#ifdef udr_info_MAIN

void test_udr_info(int include_optional) {
    udr_info_t* udr_info_1 = instantiate_udr_info(include_optional);

	cJSON* jsonudr_info_1 = udr_info_convertToJSON(udr_info_1);
	printf("udr_info :\n%s\n", cJSON_Print(jsonudr_info_1));
	udr_info_t* udr_info_2 = udr_info_parseFromJSON(jsonudr_info_1);
	cJSON* jsonudr_info_2 = udr_info_convertToJSON(udr_info_2);
	printf("repeating udr_info:\n%s\n", cJSON_Print(jsonudr_info_2));
}

int main() {
  test_udr_info(1);
  test_udr_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // udr_info_MAIN
#endif // udr_info_TEST
