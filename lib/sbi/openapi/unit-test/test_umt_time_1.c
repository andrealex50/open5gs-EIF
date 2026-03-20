#ifndef umt_time_1_TEST
#define umt_time_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define umt_time_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/umt_time_1.h"
umt_time_1_t* instantiate_umt_time_1(int include_optional);



umt_time_1_t* instantiate_umt_time_1(int include_optional) {
  umt_time_1_t* umt_time_1 = NULL;
  if (include_optional) {
    umt_time_1 = umt_time_1_create(
      "0",
      1
    );
  } else {
    umt_time_1 = umt_time_1_create(
      "0",
      1
    );
  }

  return umt_time_1;
}


#ifdef umt_time_1_MAIN

void test_umt_time_1(int include_optional) {
    umt_time_1_t* umt_time_1_1 = instantiate_umt_time_1(include_optional);

	cJSON* jsonumt_time_1_1 = umt_time_1_convertToJSON(umt_time_1_1);
	printf("umt_time_1 :\n%s\n", cJSON_Print(jsonumt_time_1_1));
	umt_time_1_t* umt_time_1_2 = umt_time_1_parseFromJSON(jsonumt_time_1_1);
	cJSON* jsonumt_time_1_2 = umt_time_1_convertToJSON(umt_time_1_2);
	printf("repeating umt_time_1:\n%s\n", cJSON_Print(jsonumt_time_1_2));
}

int main() {
  test_umt_time_1(1);
  test_umt_time_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // umt_time_1_MAIN
#endif // umt_time_1_TEST
