#ifndef ambr_1_TEST
#define ambr_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ambr_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ambr_1.h"
ambr_1_t* instantiate_ambr_1(int include_optional);



ambr_1_t* instantiate_ambr_1(int include_optional) {
  ambr_1_t* ambr_1 = NULL;
  if (include_optional) {
    ambr_1 = ambr_1_create(
      "a",
      "a"
    );
  } else {
    ambr_1 = ambr_1_create(
      "a",
      "a"
    );
  }

  return ambr_1;
}


#ifdef ambr_1_MAIN

void test_ambr_1(int include_optional) {
    ambr_1_t* ambr_1_1 = instantiate_ambr_1(include_optional);

	cJSON* jsonambr_1_1 = ambr_1_convertToJSON(ambr_1_1);
	printf("ambr_1 :\n%s\n", cJSON_Print(jsonambr_1_1));
	ambr_1_t* ambr_1_2 = ambr_1_parseFromJSON(jsonambr_1_1);
	cJSON* jsonambr_1_2 = ambr_1_convertToJSON(ambr_1_2);
	printf("repeating ambr_1:\n%s\n", cJSON_Print(jsonambr_1_2));
}

int main() {
  test_ambr_1(1);
  test_ambr_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ambr_1_MAIN
#endif // ambr_1_TEST
