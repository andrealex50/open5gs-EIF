#ifndef bdt_policy_status_any_of_TEST
#define bdt_policy_status_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_policy_status_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_policy_status_any_of.h"
bdt_policy_status_any_of_t* instantiate_bdt_policy_status_any_of(int include_optional);



bdt_policy_status_any_of_t* instantiate_bdt_policy_status_any_of(int include_optional) {
  bdt_policy_status_any_of_t* bdt_policy_status_any_of = NULL;
  if (include_optional) {
    bdt_policy_status_any_of = bdt_policy_status_any_of_create(
    );
  } else {
    bdt_policy_status_any_of = bdt_policy_status_any_of_create(
    );
  }

  return bdt_policy_status_any_of;
}


#ifdef bdt_policy_status_any_of_MAIN

void test_bdt_policy_status_any_of(int include_optional) {
    bdt_policy_status_any_of_t* bdt_policy_status_any_of_1 = instantiate_bdt_policy_status_any_of(include_optional);

	cJSON* jsonbdt_policy_status_any_of_1 = bdt_policy_status_any_of_convertToJSON(bdt_policy_status_any_of_1);
	printf("bdt_policy_status_any_of :\n%s\n", cJSON_Print(jsonbdt_policy_status_any_of_1));
	bdt_policy_status_any_of_t* bdt_policy_status_any_of_2 = bdt_policy_status_any_of_parseFromJSON(jsonbdt_policy_status_any_of_1);
	cJSON* jsonbdt_policy_status_any_of_2 = bdt_policy_status_any_of_convertToJSON(bdt_policy_status_any_of_2);
	printf("repeating bdt_policy_status_any_of:\n%s\n", cJSON_Print(jsonbdt_policy_status_any_of_2));
}

int main() {
  test_bdt_policy_status_any_of(1);
  test_bdt_policy_status_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_policy_status_any_of_MAIN
#endif // bdt_policy_status_any_of_TEST
