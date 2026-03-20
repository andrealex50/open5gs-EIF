#ifndef bdt_policy_status_TEST
#define bdt_policy_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_policy_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_policy_status.h"
bdt_policy_status_t* instantiate_bdt_policy_status(int include_optional);



bdt_policy_status_t* instantiate_bdt_policy_status(int include_optional) {
  bdt_policy_status_t* bdt_policy_status = NULL;
  if (include_optional) {
    bdt_policy_status = bdt_policy_status_create(
    );
  } else {
    bdt_policy_status = bdt_policy_status_create(
    );
  }

  return bdt_policy_status;
}


#ifdef bdt_policy_status_MAIN

void test_bdt_policy_status(int include_optional) {
    bdt_policy_status_t* bdt_policy_status_1 = instantiate_bdt_policy_status(include_optional);

	cJSON* jsonbdt_policy_status_1 = bdt_policy_status_convertToJSON(bdt_policy_status_1);
	printf("bdt_policy_status :\n%s\n", cJSON_Print(jsonbdt_policy_status_1));
	bdt_policy_status_t* bdt_policy_status_2 = bdt_policy_status_parseFromJSON(jsonbdt_policy_status_1);
	cJSON* jsonbdt_policy_status_2 = bdt_policy_status_convertToJSON(bdt_policy_status_2);
	printf("repeating bdt_policy_status:\n%s\n", cJSON_Print(jsonbdt_policy_status_2));
}

int main() {
  test_bdt_policy_status(1);
  test_bdt_policy_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_policy_status_MAIN
#endif // bdt_policy_status_TEST
