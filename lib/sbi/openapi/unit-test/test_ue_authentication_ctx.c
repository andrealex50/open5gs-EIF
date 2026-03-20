#ifndef ue_authentication_ctx_TEST
#define ue_authentication_ctx_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_authentication_ctx_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_authentication_ctx.h"
ue_authentication_ctx_t* instantiate_ue_authentication_ctx(int include_optional);

#include "test_ue_authentication_ctx_5g_auth_data.c"


ue_authentication_ctx_t* instantiate_ue_authentication_ctx(int include_optional) {
  ue_authentication_ctx_t* ue_authentication_ctx = NULL;
  if (include_optional) {
    ue_authentication_ctx = ue_authentication_ctx_create(
      ausf_api_ue_authentication_ctx__5G_AKA,
      null,
      list_createList(),
      "a"
    );
  } else {
    ue_authentication_ctx = ue_authentication_ctx_create(
      ausf_api_ue_authentication_ctx__5G_AKA,
      null,
      list_createList(),
      "a"
    );
  }

  return ue_authentication_ctx;
}


#ifdef ue_authentication_ctx_MAIN

void test_ue_authentication_ctx(int include_optional) {
    ue_authentication_ctx_t* ue_authentication_ctx_1 = instantiate_ue_authentication_ctx(include_optional);

	cJSON* jsonue_authentication_ctx_1 = ue_authentication_ctx_convertToJSON(ue_authentication_ctx_1);
	printf("ue_authentication_ctx :\n%s\n", cJSON_Print(jsonue_authentication_ctx_1));
	ue_authentication_ctx_t* ue_authentication_ctx_2 = ue_authentication_ctx_parseFromJSON(jsonue_authentication_ctx_1);
	cJSON* jsonue_authentication_ctx_2 = ue_authentication_ctx_convertToJSON(ue_authentication_ctx_2);
	printf("repeating ue_authentication_ctx:\n%s\n", cJSON_Print(jsonue_authentication_ctx_2));
}

int main() {
  test_ue_authentication_ctx(1);
  test_ue_authentication_ctx(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_authentication_ctx_MAIN
#endif // ue_authentication_ctx_TEST
