#ifndef ec_restriction_1_TEST
#define ec_restriction_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ec_restriction_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ec_restriction_1.h"
ec_restriction_1_t* instantiate_ec_restriction_1(int include_optional);



ec_restriction_1_t* instantiate_ec_restriction_1(int include_optional) {
  ec_restriction_1_t* ec_restriction_1 = NULL;
  if (include_optional) {
    ec_restriction_1 = ec_restriction_1_create(
      "0",
      56,
      list_createList(),
      "0"
    );
  } else {
    ec_restriction_1 = ec_restriction_1_create(
      "0",
      56,
      list_createList(),
      "0"
    );
  }

  return ec_restriction_1;
}


#ifdef ec_restriction_1_MAIN

void test_ec_restriction_1(int include_optional) {
    ec_restriction_1_t* ec_restriction_1_1 = instantiate_ec_restriction_1(include_optional);

	cJSON* jsonec_restriction_1_1 = ec_restriction_1_convertToJSON(ec_restriction_1_1);
	printf("ec_restriction_1 :\n%s\n", cJSON_Print(jsonec_restriction_1_1));
	ec_restriction_1_t* ec_restriction_1_2 = ec_restriction_1_parseFromJSON(jsonec_restriction_1_1);
	cJSON* jsonec_restriction_1_2 = ec_restriction_1_convertToJSON(ec_restriction_1_2);
	printf("repeating ec_restriction_1:\n%s\n", cJSON_Print(jsonec_restriction_1_2));
}

int main() {
  test_ec_restriction_1(1);
  test_ec_restriction_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ec_restriction_1_MAIN
#endif // ec_restriction_1_TEST
