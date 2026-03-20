#ifndef serving_nf_identity_TEST
#define serving_nf_identity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define serving_nf_identity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/serving_nf_identity.h"
serving_nf_identity_t* instantiate_serving_nf_identity(int include_optional);

#include "test_guami.c"
#include "test_an_gw_address.c"
#include "test_sgsn_address.c"


serving_nf_identity_t* instantiate_serving_nf_identity(int include_optional) {
  serving_nf_identity_t* serving_nf_identity = NULL;
  if (include_optional) {
    serving_nf_identity = serving_nf_identity_create(
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
       // false, not to have infinite recursion
      instantiate_an_gw_address(0),
       // false, not to have infinite recursion
      instantiate_sgsn_address(0)
    );
  } else {
    serving_nf_identity = serving_nf_identity_create(
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return serving_nf_identity;
}


#ifdef serving_nf_identity_MAIN

void test_serving_nf_identity(int include_optional) {
    serving_nf_identity_t* serving_nf_identity_1 = instantiate_serving_nf_identity(include_optional);

	cJSON* jsonserving_nf_identity_1 = serving_nf_identity_convertToJSON(serving_nf_identity_1);
	printf("serving_nf_identity :\n%s\n", cJSON_Print(jsonserving_nf_identity_1));
	serving_nf_identity_t* serving_nf_identity_2 = serving_nf_identity_parseFromJSON(jsonserving_nf_identity_1);
	cJSON* jsonserving_nf_identity_2 = serving_nf_identity_convertToJSON(serving_nf_identity_2);
	printf("repeating serving_nf_identity:\n%s\n", cJSON_Print(jsonserving_nf_identity_2));
}

int main() {
  test_serving_nf_identity(1);
  test_serving_nf_identity(0);

  printf("Hello world \n");
  return 0;
}

#endif // serving_nf_identity_MAIN
#endif // serving_nf_identity_TEST
