#ifndef pro_se_authentication_ctx_TEST
#define pro_se_authentication_ctx_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_authentication_ctx_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_authentication_ctx.h"
pro_se_authentication_ctx_t* instantiate_pro_se_authentication_ctx(int include_optional);

#include "test_pro_se_auth_data.c"


pro_se_authentication_ctx_t* instantiate_pro_se_authentication_ctx(int include_optional) {
  pro_se_authentication_ctx_t* pro_se_authentication_ctx = NULL;
  if (include_optional) {
    pro_se_authentication_ctx = pro_se_authentication_ctx_create(
      ausf_api_pro_se_authentication_ctx__5G_AKA,
      list_createList(),
      null,
      "a"
    );
  } else {
    pro_se_authentication_ctx = pro_se_authentication_ctx_create(
      ausf_api_pro_se_authentication_ctx__5G_AKA,
      list_createList(),
      null,
      "a"
    );
  }

  return pro_se_authentication_ctx;
}


#ifdef pro_se_authentication_ctx_MAIN

void test_pro_se_authentication_ctx(int include_optional) {
    pro_se_authentication_ctx_t* pro_se_authentication_ctx_1 = instantiate_pro_se_authentication_ctx(include_optional);

	cJSON* jsonpro_se_authentication_ctx_1 = pro_se_authentication_ctx_convertToJSON(pro_se_authentication_ctx_1);
	printf("pro_se_authentication_ctx :\n%s\n", cJSON_Print(jsonpro_se_authentication_ctx_1));
	pro_se_authentication_ctx_t* pro_se_authentication_ctx_2 = pro_se_authentication_ctx_parseFromJSON(jsonpro_se_authentication_ctx_1);
	cJSON* jsonpro_se_authentication_ctx_2 = pro_se_authentication_ctx_convertToJSON(pro_se_authentication_ctx_2);
	printf("repeating pro_se_authentication_ctx:\n%s\n", cJSON_Print(jsonpro_se_authentication_ctx_2));
}

int main() {
  test_pro_se_authentication_ctx(1);
  test_pro_se_authentication_ctx(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_authentication_ctx_MAIN
#endif // pro_se_authentication_ctx_TEST
