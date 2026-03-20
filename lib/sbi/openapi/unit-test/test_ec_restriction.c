#ifndef ec_restriction_TEST
#define ec_restriction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ec_restriction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ec_restriction.h"
ec_restriction_t* instantiate_ec_restriction(int include_optional);



ec_restriction_t* instantiate_ec_restriction(int include_optional) {
  ec_restriction_t* ec_restriction = NULL;
  if (include_optional) {
    ec_restriction = ec_restriction_create(
      "0",
      56,
      list_createList(),
      "0"
    );
  } else {
    ec_restriction = ec_restriction_create(
      "0",
      56,
      list_createList(),
      "0"
    );
  }

  return ec_restriction;
}


#ifdef ec_restriction_MAIN

void test_ec_restriction(int include_optional) {
    ec_restriction_t* ec_restriction_1 = instantiate_ec_restriction(include_optional);

	cJSON* jsonec_restriction_1 = ec_restriction_convertToJSON(ec_restriction_1);
	printf("ec_restriction :\n%s\n", cJSON_Print(jsonec_restriction_1));
	ec_restriction_t* ec_restriction_2 = ec_restriction_parseFromJSON(jsonec_restriction_1);
	cJSON* jsonec_restriction_2 = ec_restriction_convertToJSON(ec_restriction_2);
	printf("repeating ec_restriction:\n%s\n", cJSON_Print(jsonec_restriction_2));
}

int main() {
  test_ec_restriction(1);
  test_ec_restriction(0);

  printf("Hello world \n");
  return 0;
}

#endif // ec_restriction_MAIN
#endif // ec_restriction_TEST
