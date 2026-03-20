#ifndef udsf_info_TEST
#define udsf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define udsf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/udsf_info.h"
udsf_info_t* instantiate_udsf_info(int include_optional);



udsf_info_t* instantiate_udsf_info(int include_optional) {
  udsf_info_t* udsf_info = NULL;
  if (include_optional) {
    udsf_info = udsf_info_create(
      "0",
      list_createList(),
      list_createList()
    );
  } else {
    udsf_info = udsf_info_create(
      "0",
      list_createList(),
      list_createList()
    );
  }

  return udsf_info;
}


#ifdef udsf_info_MAIN

void test_udsf_info(int include_optional) {
    udsf_info_t* udsf_info_1 = instantiate_udsf_info(include_optional);

	cJSON* jsonudsf_info_1 = udsf_info_convertToJSON(udsf_info_1);
	printf("udsf_info :\n%s\n", cJSON_Print(jsonudsf_info_1));
	udsf_info_t* udsf_info_2 = udsf_info_parseFromJSON(jsonudsf_info_1);
	cJSON* jsonudsf_info_2 = udsf_info_convertToJSON(udsf_info_2);
	printf("repeating udsf_info:\n%s\n", cJSON_Print(jsonudsf_info_2));
}

int main() {
  test_udsf_info(1);
  test_udsf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // udsf_info_MAIN
#endif // udsf_info_TEST
