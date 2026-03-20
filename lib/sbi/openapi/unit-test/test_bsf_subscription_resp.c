#ifndef bsf_subscription_resp_TEST
#define bsf_subscription_resp_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_subscription_resp_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_subscription_resp.h"
bsf_subscription_resp_t* instantiate_bsf_subscription_resp(int include_optional);

#include "test_snssai_dnn_pair.c"


bsf_subscription_resp_t* instantiate_bsf_subscription_resp(int include_optional) {
  bsf_subscription_resp_t* bsf_subscription_resp = NULL;
  if (include_optional) {
    bsf_subscription_resp = bsf_subscription_resp_create(
      list_createList(),
      "0",
      "0",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_snssai_dnn_pair(0),
      list_createList(),
      "a",
      "0",
      "0",
      nbsf_management_bsf_subscription_resp__NF_SET,
      list_createList()
    );
  } else {
    bsf_subscription_resp = bsf_subscription_resp_create(
      list_createList(),
      "0",
      "0",
      "a",
      "a",
      NULL,
      list_createList(),
      "a",
      "0",
      "0",
      nbsf_management_bsf_subscription_resp__NF_SET,
      list_createList()
    );
  }

  return bsf_subscription_resp;
}


#ifdef bsf_subscription_resp_MAIN

void test_bsf_subscription_resp(int include_optional) {
    bsf_subscription_resp_t* bsf_subscription_resp_1 = instantiate_bsf_subscription_resp(include_optional);

	cJSON* jsonbsf_subscription_resp_1 = bsf_subscription_resp_convertToJSON(bsf_subscription_resp_1);
	printf("bsf_subscription_resp :\n%s\n", cJSON_Print(jsonbsf_subscription_resp_1));
	bsf_subscription_resp_t* bsf_subscription_resp_2 = bsf_subscription_resp_parseFromJSON(jsonbsf_subscription_resp_1);
	cJSON* jsonbsf_subscription_resp_2 = bsf_subscription_resp_convertToJSON(bsf_subscription_resp_2);
	printf("repeating bsf_subscription_resp:\n%s\n", cJSON_Print(jsonbsf_subscription_resp_2));
}

int main() {
  test_bsf_subscription_resp(1);
  test_bsf_subscription_resp(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_subscription_resp_MAIN
#endif // bsf_subscription_resp_TEST
