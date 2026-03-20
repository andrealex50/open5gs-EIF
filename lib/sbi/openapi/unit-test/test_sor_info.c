#ifndef sor_info_TEST
#define sor_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sor_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sor_info.h"
sor_info_t* instantiate_sor_info(int include_optional);

#include "test_steering_container.c"


sor_info_t* instantiate_sor_info(int include_optional) {
  sor_info_t* sor_info = NULL;
  if (include_optional) {
    sor_info = sor_info_create(
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
    sor_info = sor_info_create(
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

  return sor_info;
}


#ifdef sor_info_MAIN

void test_sor_info(int include_optional) {
    sor_info_t* sor_info_1 = instantiate_sor_info(include_optional);

	cJSON* jsonsor_info_1 = sor_info_convertToJSON(sor_info_1);
	printf("sor_info :\n%s\n", cJSON_Print(jsonsor_info_1));
	sor_info_t* sor_info_2 = sor_info_parseFromJSON(jsonsor_info_1);
	cJSON* jsonsor_info_2 = sor_info_convertToJSON(sor_info_2);
	printf("repeating sor_info:\n%s\n", cJSON_Print(jsonsor_info_2));
}

int main() {
  test_sor_info(1);
  test_sor_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // sor_info_MAIN
#endif // sor_info_TEST
