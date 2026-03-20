#ifndef sor_info_1_TEST
#define sor_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sor_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sor_info_1.h"
sor_info_1_t* instantiate_sor_info_1(int include_optional);

#include "test_steering_container.c"


sor_info_1_t* instantiate_sor_info_1(int include_optional) {
  sor_info_1_t* sor_info_1 = NULL;
  if (include_optional) {
    sor_info_1 = sor_info_1_create(
      null,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ==",
      "YQ==",
      1,
      1
    );
  } else {
    sor_info_1 = sor_info_1_create(
      null,
      1,
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ==",
      "YQ==",
      1,
      1
    );
  }

  return sor_info_1;
}


#ifdef sor_info_1_MAIN

void test_sor_info_1(int include_optional) {
    sor_info_1_t* sor_info_1_1 = instantiate_sor_info_1(include_optional);

	cJSON* jsonsor_info_1_1 = sor_info_1_convertToJSON(sor_info_1_1);
	printf("sor_info_1 :\n%s\n", cJSON_Print(jsonsor_info_1_1));
	sor_info_1_t* sor_info_1_2 = sor_info_1_parseFromJSON(jsonsor_info_1_1);
	cJSON* jsonsor_info_1_2 = sor_info_1_convertToJSON(sor_info_1_2);
	printf("repeating sor_info_1:\n%s\n", cJSON_Print(jsonsor_info_1_2));
}

int main() {
  test_sor_info_1(1);
  test_sor_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // sor_info_1_MAIN
#endif // sor_info_1_TEST
