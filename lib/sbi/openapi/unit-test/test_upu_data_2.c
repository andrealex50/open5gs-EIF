#ifndef upu_data_2_TEST
#define upu_data_2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upu_data_2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upu_data_2.h"
upu_data_2_t* instantiate_upu_data_2(int include_optional);



upu_data_2_t* instantiate_upu_data_2(int include_optional) {
  upu_data_2_t* upu_data_2 = NULL;
  if (include_optional) {
    upu_data_2 = upu_data_2_create(
      "YQ==",
      list_createList(),
      "a"
    );
  } else {
    upu_data_2 = upu_data_2_create(
      "YQ==",
      list_createList(),
      "a"
    );
  }

  return upu_data_2;
}


#ifdef upu_data_2_MAIN

void test_upu_data_2(int include_optional) {
    upu_data_2_t* upu_data_2_1 = instantiate_upu_data_2(include_optional);

	cJSON* jsonupu_data_2_1 = upu_data_2_convertToJSON(upu_data_2_1);
	printf("upu_data_2 :\n%s\n", cJSON_Print(jsonupu_data_2_1));
	upu_data_2_t* upu_data_2_2 = upu_data_2_parseFromJSON(jsonupu_data_2_1);
	cJSON* jsonupu_data_2_2 = upu_data_2_convertToJSON(upu_data_2_2);
	printf("repeating upu_data_2:\n%s\n", cJSON_Print(jsonupu_data_2_2));
}

int main() {
  test_upu_data_2(1);
  test_upu_data_2(0);

  printf("Hello world \n");
  return 0;
}

#endif // upu_data_2_MAIN
#endif // upu_data_2_TEST
