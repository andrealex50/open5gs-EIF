#ifndef upu_data_1_TEST
#define upu_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upu_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upu_data_1.h"
upu_data_1_t* instantiate_upu_data_1(int include_optional);



upu_data_1_t* instantiate_upu_data_1(int include_optional) {
  upu_data_1_t* upu_data_1 = NULL;
  if (include_optional) {
    upu_data_1 = upu_data_1_create(
      "YQ==",
      list_createList(),
      "a"
    );
  } else {
    upu_data_1 = upu_data_1_create(
      "YQ==",
      list_createList(),
      "a"
    );
  }

  return upu_data_1;
}


#ifdef upu_data_1_MAIN

void test_upu_data_1(int include_optional) {
    upu_data_1_t* upu_data_1_1 = instantiate_upu_data_1(include_optional);

	cJSON* jsonupu_data_1_1 = upu_data_1_convertToJSON(upu_data_1_1);
	printf("upu_data_1 :\n%s\n", cJSON_Print(jsonupu_data_1_1));
	upu_data_1_t* upu_data_1_2 = upu_data_1_parseFromJSON(jsonupu_data_1_1);
	cJSON* jsonupu_data_1_2 = upu_data_1_convertToJSON(upu_data_1_2);
	printf("repeating upu_data_1:\n%s\n", cJSON_Print(jsonupu_data_1_2));
}

int main() {
  test_upu_data_1(1);
  test_upu_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // upu_data_1_MAIN
#endif // upu_data_1_TEST
