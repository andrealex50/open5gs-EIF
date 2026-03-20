#ifndef bdt_policy_data_TEST
#define bdt_policy_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_policy_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_policy_data.h"
bdt_policy_data_t* instantiate_bdt_policy_data(int include_optional);

#include "test_snssai.c"


bdt_policy_data_t* instantiate_bdt_policy_data(int include_optional) {
  bdt_policy_data_t* bdt_policy_data = NULL;
  if (include_optional) {
    bdt_policy_data = bdt_policy_data_create(
      "a",
      "a",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      list_createList()
    );
  } else {
    bdt_policy_data = bdt_policy_data_create(
      "a",
      "a",
      "0",
      "0",
      NULL,
      "0",
      list_createList()
    );
  }

  return bdt_policy_data;
}


#ifdef bdt_policy_data_MAIN

void test_bdt_policy_data(int include_optional) {
    bdt_policy_data_t* bdt_policy_data_1 = instantiate_bdt_policy_data(include_optional);

	cJSON* jsonbdt_policy_data_1 = bdt_policy_data_convertToJSON(bdt_policy_data_1);
	printf("bdt_policy_data :\n%s\n", cJSON_Print(jsonbdt_policy_data_1));
	bdt_policy_data_t* bdt_policy_data_2 = bdt_policy_data_parseFromJSON(jsonbdt_policy_data_1);
	cJSON* jsonbdt_policy_data_2 = bdt_policy_data_convertToJSON(bdt_policy_data_2);
	printf("repeating bdt_policy_data:\n%s\n", cJSON_Print(jsonbdt_policy_data_2));
}

int main() {
  test_bdt_policy_data(1);
  test_bdt_policy_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_policy_data_MAIN
#endif // bdt_policy_data_TEST
