#ifndef resynchronization_info_1_TEST
#define resynchronization_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resynchronization_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resynchronization_info_1.h"
resynchronization_info_1_t* instantiate_resynchronization_info_1(int include_optional);



resynchronization_info_1_t* instantiate_resynchronization_info_1(int include_optional) {
  resynchronization_info_1_t* resynchronization_info_1 = NULL;
  if (include_optional) {
    resynchronization_info_1 = resynchronization_info_1_create(
      "a",
      "a"
    );
  } else {
    resynchronization_info_1 = resynchronization_info_1_create(
      "a",
      "a"
    );
  }

  return resynchronization_info_1;
}


#ifdef resynchronization_info_1_MAIN

void test_resynchronization_info_1(int include_optional) {
    resynchronization_info_1_t* resynchronization_info_1_1 = instantiate_resynchronization_info_1(include_optional);

	cJSON* jsonresynchronization_info_1_1 = resynchronization_info_1_convertToJSON(resynchronization_info_1_1);
	printf("resynchronization_info_1 :\n%s\n", cJSON_Print(jsonresynchronization_info_1_1));
	resynchronization_info_1_t* resynchronization_info_1_2 = resynchronization_info_1_parseFromJSON(jsonresynchronization_info_1_1);
	cJSON* jsonresynchronization_info_1_2 = resynchronization_info_1_convertToJSON(resynchronization_info_1_2);
	printf("repeating resynchronization_info_1:\n%s\n", cJSON_Print(jsonresynchronization_info_1_2));
}

int main() {
  test_resynchronization_info_1(1);
  test_resynchronization_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // resynchronization_info_1_MAIN
#endif // resynchronization_info_1_TEST
