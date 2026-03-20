#ifndef tai_1_TEST
#define tai_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tai_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tai_1.h"
tai_1_t* instantiate_tai_1(int include_optional);

#include "test_plmn_id_1.c"


tai_1_t* instantiate_tai_1(int include_optional) {
  tai_1_t* tai_1 = NULL;
  if (include_optional) {
    tai_1 = tai_1_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      "a",
      "a"
    );
  } else {
    tai_1 = tai_1_create(
      NULL,
      "a",
      "a"
    );
  }

  return tai_1;
}


#ifdef tai_1_MAIN

void test_tai_1(int include_optional) {
    tai_1_t* tai_1_1 = instantiate_tai_1(include_optional);

	cJSON* jsontai_1_1 = tai_1_convertToJSON(tai_1_1);
	printf("tai_1 :\n%s\n", cJSON_Print(jsontai_1_1));
	tai_1_t* tai_1_2 = tai_1_parseFromJSON(jsontai_1_1);
	cJSON* jsontai_1_2 = tai_1_convertToJSON(tai_1_2);
	printf("repeating tai_1:\n%s\n", cJSON_Print(jsontai_1_2));
}

int main() {
  test_tai_1(1);
  test_tai_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // tai_1_MAIN
#endif // tai_1_TEST
