#ifndef nidd_information_1_TEST
#define nidd_information_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nidd_information_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nidd_information_1.h"
nidd_information_1_t* instantiate_nidd_information_1(int include_optional);



nidd_information_1_t* instantiate_nidd_information_1(int include_optional) {
  nidd_information_1_t* nidd_information_1 = NULL;
  if (include_optional) {
    nidd_information_1 = nidd_information_1_create(
      "0",
      "a",
      "a"
    );
  } else {
    nidd_information_1 = nidd_information_1_create(
      "0",
      "a",
      "a"
    );
  }

  return nidd_information_1;
}


#ifdef nidd_information_1_MAIN

void test_nidd_information_1(int include_optional) {
    nidd_information_1_t* nidd_information_1_1 = instantiate_nidd_information_1(include_optional);

	cJSON* jsonnidd_information_1_1 = nidd_information_1_convertToJSON(nidd_information_1_1);
	printf("nidd_information_1 :\n%s\n", cJSON_Print(jsonnidd_information_1_1));
	nidd_information_1_t* nidd_information_1_2 = nidd_information_1_parseFromJSON(jsonnidd_information_1_1);
	cJSON* jsonnidd_information_1_2 = nidd_information_1_convertToJSON(nidd_information_1_2);
	printf("repeating nidd_information_1:\n%s\n", cJSON_Print(jsonnidd_information_1_2));
}

int main() {
  test_nidd_information_1(1);
  test_nidd_information_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // nidd_information_1_MAIN
#endif // nidd_information_1_TEST
