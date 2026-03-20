#ifndef n32f_context_info_TEST
#define n32f_context_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n32f_context_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n32f_context_info.h"
n32f_context_info_t* instantiate_n32f_context_info(int include_optional);



n32f_context_info_t* instantiate_n32f_context_info(int include_optional) {
  n32f_context_info_t* n32f_context_info = NULL;
  if (include_optional) {
    n32f_context_info = n32f_context_info_create(
      "a"
    );
  } else {
    n32f_context_info = n32f_context_info_create(
      "a"
    );
  }

  return n32f_context_info;
}


#ifdef n32f_context_info_MAIN

void test_n32f_context_info(int include_optional) {
    n32f_context_info_t* n32f_context_info_1 = instantiate_n32f_context_info(include_optional);

	cJSON* jsonn32f_context_info_1 = n32f_context_info_convertToJSON(n32f_context_info_1);
	printf("n32f_context_info :\n%s\n", cJSON_Print(jsonn32f_context_info_1));
	n32f_context_info_t* n32f_context_info_2 = n32f_context_info_parseFromJSON(jsonn32f_context_info_1);
	cJSON* jsonn32f_context_info_2 = n32f_context_info_convertToJSON(n32f_context_info_2);
	printf("repeating n32f_context_info:\n%s\n", cJSON_Print(jsonn32f_context_info_2));
}

int main() {
  test_n32f_context_info(1);
  test_n32f_context_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // n32f_context_info_MAIN
#endif // n32f_context_info_TEST
