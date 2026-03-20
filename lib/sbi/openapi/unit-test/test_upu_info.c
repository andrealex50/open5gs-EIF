#ifndef upu_info_TEST
#define upu_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upu_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upu_info.h"
upu_info_t* instantiate_upu_info(int include_optional);



upu_info_t* instantiate_upu_info(int include_optional) {
  upu_info_t* upu_info = NULL;
  if (include_optional) {
    upu_info = upu_info_create(
      list_createList(),
      1,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ=="
    );
  } else {
    upu_info = upu_info_create(
      list_createList(),
      1,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ=="
    );
  }

  return upu_info;
}


#ifdef upu_info_MAIN

void test_upu_info(int include_optional) {
    upu_info_t* upu_info_1 = instantiate_upu_info(include_optional);

	cJSON* jsonupu_info_1 = upu_info_convertToJSON(upu_info_1);
	printf("upu_info :\n%s\n", cJSON_Print(jsonupu_info_1));
	upu_info_t* upu_info_2 = upu_info_parseFromJSON(jsonupu_info_1);
	cJSON* jsonupu_info_2 = upu_info_convertToJSON(upu_info_2);
	printf("repeating upu_info:\n%s\n", cJSON_Print(jsonupu_info_2));
}

int main() {
  test_upu_info(1);
  test_upu_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // upu_info_MAIN
#endif // upu_info_TEST
