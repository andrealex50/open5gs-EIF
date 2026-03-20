#ifndef transfer_policy_TEST
#define transfer_policy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_policy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_policy.h"
transfer_policy_t* instantiate_transfer_policy(int include_optional);

#include "test_time_window.c"


transfer_policy_t* instantiate_transfer_policy(int include_optional) {
  transfer_policy_t* transfer_policy = NULL;
  if (include_optional) {
    transfer_policy = transfer_policy_create(
      "a",
      "a",
      56,
       // false, not to have infinite recursion
      instantiate_time_window(0),
      56
    );
  } else {
    transfer_policy = transfer_policy_create(
      "a",
      "a",
      56,
      NULL,
      56
    );
  }

  return transfer_policy;
}


#ifdef transfer_policy_MAIN

void test_transfer_policy(int include_optional) {
    transfer_policy_t* transfer_policy_1 = instantiate_transfer_policy(include_optional);

	cJSON* jsontransfer_policy_1 = transfer_policy_convertToJSON(transfer_policy_1);
	printf("transfer_policy :\n%s\n", cJSON_Print(jsontransfer_policy_1));
	transfer_policy_t* transfer_policy_2 = transfer_policy_parseFromJSON(jsontransfer_policy_1);
	cJSON* jsontransfer_policy_2 = transfer_policy_convertToJSON(transfer_policy_2);
	printf("repeating transfer_policy:\n%s\n", cJSON_Print(jsontransfer_policy_2));
}

int main() {
  test_transfer_policy(1);
  test_transfer_policy(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_policy_MAIN
#endif // transfer_policy_TEST
