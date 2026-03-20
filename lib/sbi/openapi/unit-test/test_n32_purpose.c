#ifndef n32_purpose_TEST
#define n32_purpose_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n32_purpose_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n32_purpose.h"
n32_purpose_t* instantiate_n32_purpose(int include_optional);



n32_purpose_t* instantiate_n32_purpose(int include_optional) {
  n32_purpose_t* n32_purpose = NULL;
  if (include_optional) {
    n32_purpose = n32_purpose_create(
    );
  } else {
    n32_purpose = n32_purpose_create(
    );
  }

  return n32_purpose;
}


#ifdef n32_purpose_MAIN

void test_n32_purpose(int include_optional) {
    n32_purpose_t* n32_purpose_1 = instantiate_n32_purpose(include_optional);

	cJSON* jsonn32_purpose_1 = n32_purpose_convertToJSON(n32_purpose_1);
	printf("n32_purpose :\n%s\n", cJSON_Print(jsonn32_purpose_1));
	n32_purpose_t* n32_purpose_2 = n32_purpose_parseFromJSON(jsonn32_purpose_1);
	cJSON* jsonn32_purpose_2 = n32_purpose_convertToJSON(n32_purpose_2);
	printf("repeating n32_purpose:\n%s\n", cJSON_Print(jsonn32_purpose_2));
}

int main() {
  test_n32_purpose(1);
  test_n32_purpose(0);

  printf("Hello world \n");
  return 0;
}

#endif // n32_purpose_MAIN
#endif // n32_purpose_TEST
