#ifndef upu_info_1_TEST
#define upu_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upu_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upu_info_1.h"
upu_info_1_t* instantiate_upu_info_1(int include_optional);



upu_info_1_t* instantiate_upu_info_1(int include_optional) {
  upu_info_1_t* upu_info_1 = NULL;
  if (include_optional) {
    upu_info_1 = upu_info_1_create(
      list_createList(),
      1,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ=="
    );
  } else {
    upu_info_1 = upu_info_1_create(
      list_createList(),
      1,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ=="
    );
  }

  return upu_info_1;
}


#ifdef upu_info_1_MAIN

void test_upu_info_1(int include_optional) {
    upu_info_1_t* upu_info_1_1 = instantiate_upu_info_1(include_optional);

	cJSON* jsonupu_info_1_1 = upu_info_1_convertToJSON(upu_info_1_1);
	printf("upu_info_1 :\n%s\n", cJSON_Print(jsonupu_info_1_1));
	upu_info_1_t* upu_info_1_2 = upu_info_1_parseFromJSON(jsonupu_info_1_1);
	cJSON* jsonupu_info_1_2 = upu_info_1_convertToJSON(upu_info_1_2);
	printf("repeating upu_info_1:\n%s\n", cJSON_Print(jsonupu_info_1_2));
}

int main() {
  test_upu_info_1(1);
  test_upu_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // upu_info_1_MAIN
#endif // upu_info_1_TEST
