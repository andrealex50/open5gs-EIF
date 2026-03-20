#ifndef bdt_data_TEST
#define bdt_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bdt_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bdt_data.h"
bdt_data_t* instantiate_bdt_data(int include_optional);

#include "test_transfer_policy.c"
#include "test_network_area_info_2.c"
#include "test_usage_threshold.c"
#include "test_snssai.c"
#include "test_bdt_policy_status.c"


bdt_data_t* instantiate_bdt_data(int include_optional) {
  bdt_data_t* bdt_data = NULL;
  if (include_optional) {
    bdt_data = bdt_data_create(
      "0",
       // false, not to have infinite recursion
      instantiate_transfer_policy(0),
      "0",
       // false, not to have infinite recursion
      instantiate_network_area_info_2(0),
      0,
       // false, not to have infinite recursion
      instantiate_usage_threshold(0),
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      null,
      "a",
      list_createList()
    );
  } else {
    bdt_data = bdt_data_create(
      "0",
      NULL,
      "0",
      NULL,
      0,
      NULL,
      "0",
      NULL,
      "0",
      null,
      "a",
      list_createList()
    );
  }

  return bdt_data;
}


#ifdef bdt_data_MAIN

void test_bdt_data(int include_optional) {
    bdt_data_t* bdt_data_1 = instantiate_bdt_data(include_optional);

	cJSON* jsonbdt_data_1 = bdt_data_convertToJSON(bdt_data_1);
	printf("bdt_data :\n%s\n", cJSON_Print(jsonbdt_data_1));
	bdt_data_t* bdt_data_2 = bdt_data_parseFromJSON(jsonbdt_data_1);
	cJSON* jsonbdt_data_2 = bdt_data_convertToJSON(bdt_data_2);
	printf("repeating bdt_data:\n%s\n", cJSON_Print(jsonbdt_data_2));
}

int main() {
  test_bdt_data(1);
  test_bdt_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // bdt_data_MAIN
#endif // bdt_data_TEST
