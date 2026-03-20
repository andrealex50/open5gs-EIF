#ifndef ecgi_1_TEST
#define ecgi_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ecgi_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ecgi_1.h"
ecgi_1_t* instantiate_ecgi_1(int include_optional);

#include "test_plmn_id_1.c"


ecgi_1_t* instantiate_ecgi_1(int include_optional) {
  ecgi_1_t* ecgi_1 = NULL;
  if (include_optional) {
    ecgi_1 = ecgi_1_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      "a",
      "a"
    );
  } else {
    ecgi_1 = ecgi_1_create(
      NULL,
      "a",
      "a"
    );
  }

  return ecgi_1;
}


#ifdef ecgi_1_MAIN

void test_ecgi_1(int include_optional) {
    ecgi_1_t* ecgi_1_1 = instantiate_ecgi_1(include_optional);

	cJSON* jsonecgi_1_1 = ecgi_1_convertToJSON(ecgi_1_1);
	printf("ecgi_1 :\n%s\n", cJSON_Print(jsonecgi_1_1));
	ecgi_1_t* ecgi_1_2 = ecgi_1_parseFromJSON(jsonecgi_1_1);
	cJSON* jsonecgi_1_2 = ecgi_1_convertToJSON(ecgi_1_2);
	printf("repeating ecgi_1:\n%s\n", cJSON_Print(jsonecgi_1_2));
}

int main() {
  test_ecgi_1(1);
  test_ecgi_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ecgi_1_MAIN
#endif // ecgi_1_TEST
