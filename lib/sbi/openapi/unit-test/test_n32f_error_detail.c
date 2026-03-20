#ifndef n32f_error_detail_TEST
#define n32f_error_detail_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n32f_error_detail_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n32f_error_detail.h"
n32f_error_detail_t* instantiate_n32f_error_detail(int include_optional);



n32f_error_detail_t* instantiate_n32f_error_detail(int include_optional) {
  n32f_error_detail_t* n32f_error_detail = NULL;
  if (include_optional) {
    n32f_error_detail = n32f_error_detail_create(
      "0",
      n32_handshake_api_n32f_error_detail__INVALID_JSON_POINTER
    );
  } else {
    n32f_error_detail = n32f_error_detail_create(
      "0",
      n32_handshake_api_n32f_error_detail__INVALID_JSON_POINTER
    );
  }

  return n32f_error_detail;
}


#ifdef n32f_error_detail_MAIN

void test_n32f_error_detail(int include_optional) {
    n32f_error_detail_t* n32f_error_detail_1 = instantiate_n32f_error_detail(include_optional);

	cJSON* jsonn32f_error_detail_1 = n32f_error_detail_convertToJSON(n32f_error_detail_1);
	printf("n32f_error_detail :\n%s\n", cJSON_Print(jsonn32f_error_detail_1));
	n32f_error_detail_t* n32f_error_detail_2 = n32f_error_detail_parseFromJSON(jsonn32f_error_detail_1);
	cJSON* jsonn32f_error_detail_2 = n32f_error_detail_convertToJSON(n32f_error_detail_2);
	printf("repeating n32f_error_detail:\n%s\n", cJSON_Print(jsonn32f_error_detail_2));
}

int main() {
  test_n32f_error_detail(1);
  test_n32f_error_detail(0);

  printf("Hello world \n");
  return 0;
}

#endif // n32f_error_detail_MAIN
#endif // n32f_error_detail_TEST
