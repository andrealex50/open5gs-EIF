#ifndef rg_auth_ctx_TEST
#define rg_auth_ctx_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rg_auth_ctx_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rg_auth_ctx.h"
rg_auth_ctx_t* instantiate_rg_auth_ctx(int include_optional);



rg_auth_ctx_t* instantiate_rg_auth_ctx(int include_optional) {
  rg_auth_ctx_t* rg_auth_ctx = NULL;
  if (include_optional) {
    rg_auth_ctx = rg_auth_ctx_create(
      1,
      "a",
      "a"
    );
  } else {
    rg_auth_ctx = rg_auth_ctx_create(
      1,
      "a",
      "a"
    );
  }

  return rg_auth_ctx;
}


#ifdef rg_auth_ctx_MAIN

void test_rg_auth_ctx(int include_optional) {
    rg_auth_ctx_t* rg_auth_ctx_1 = instantiate_rg_auth_ctx(include_optional);

	cJSON* jsonrg_auth_ctx_1 = rg_auth_ctx_convertToJSON(rg_auth_ctx_1);
	printf("rg_auth_ctx :\n%s\n", cJSON_Print(jsonrg_auth_ctx_1));
	rg_auth_ctx_t* rg_auth_ctx_2 = rg_auth_ctx_parseFromJSON(jsonrg_auth_ctx_1);
	cJSON* jsonrg_auth_ctx_2 = rg_auth_ctx_convertToJSON(rg_auth_ctx_2);
	printf("repeating rg_auth_ctx:\n%s\n", cJSON_Print(jsonrg_auth_ctx_2));
}

int main() {
  test_rg_auth_ctx(1);
  test_rg_auth_ctx(0);

  printf("Hello world \n");
  return 0;
}

#endif // rg_auth_ctx_MAIN
#endif // rg_auth_ctx_TEST
