#ifndef nidd_information_TEST
#define nidd_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nidd_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nidd_information.h"
nidd_information_t* instantiate_nidd_information(int include_optional);



nidd_information_t* instantiate_nidd_information(int include_optional) {
  nidd_information_t* nidd_information = NULL;
  if (include_optional) {
    nidd_information = nidd_information_create(
      "0",
      "a",
      "a"
    );
  } else {
    nidd_information = nidd_information_create(
      "0",
      "a",
      "a"
    );
  }

  return nidd_information;
}


#ifdef nidd_information_MAIN

void test_nidd_information(int include_optional) {
    nidd_information_t* nidd_information_1 = instantiate_nidd_information(include_optional);

	cJSON* jsonnidd_information_1 = nidd_information_convertToJSON(nidd_information_1);
	printf("nidd_information :\n%s\n", cJSON_Print(jsonnidd_information_1));
	nidd_information_t* nidd_information_2 = nidd_information_parseFromJSON(jsonnidd_information_1);
	cJSON* jsonnidd_information_2 = nidd_information_convertToJSON(nidd_information_2);
	printf("repeating nidd_information:\n%s\n", cJSON_Print(jsonnidd_information_2));
}

int main() {
  test_nidd_information(1);
  test_nidd_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // nidd_information_MAIN
#endif // nidd_information_TEST
