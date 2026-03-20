#ifndef ue_authentication_ctx_5g_auth_data_TEST
#define ue_authentication_ctx_5g_auth_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_authentication_ctx_5g_auth_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_authentication_ctx_5g_auth_data.h"
ue_authentication_ctx_5g_auth_data_t* instantiate_ue_authentication_ctx_5g_auth_data(int include_optional);



ue_authentication_ctx_5g_auth_data_t* instantiate_ue_authentication_ctx_5g_auth_data(int include_optional) {
  ue_authentication_ctx_5g_auth_data_t* ue_authentication_ctx_5g_auth_data = NULL;
  if (include_optional) {
    ue_authentication_ctx_5g_auth_data = ue_authentication_ctx_5g_auth_data_create(
      "a",
      "a",
      "a"
    );
  } else {
    ue_authentication_ctx_5g_auth_data = ue_authentication_ctx_5g_auth_data_create(
      "a",
      "a",
      "a"
    );
  }

  return ue_authentication_ctx_5g_auth_data;
}


#ifdef ue_authentication_ctx_5g_auth_data_MAIN

void test_ue_authentication_ctx_5g_auth_data(int include_optional) {
    ue_authentication_ctx_5g_auth_data_t* ue_authentication_ctx_5g_auth_data_1 = instantiate_ue_authentication_ctx_5g_auth_data(include_optional);

	cJSON* jsonue_authentication_ctx_5g_auth_data_1 = ue_authentication_ctx_5g_auth_data_convertToJSON(ue_authentication_ctx_5g_auth_data_1);
	printf("ue_authentication_ctx_5g_auth_data :\n%s\n", cJSON_Print(jsonue_authentication_ctx_5g_auth_data_1));
	ue_authentication_ctx_5g_auth_data_t* ue_authentication_ctx_5g_auth_data_2 = ue_authentication_ctx_5g_auth_data_parseFromJSON(jsonue_authentication_ctx_5g_auth_data_1);
	cJSON* jsonue_authentication_ctx_5g_auth_data_2 = ue_authentication_ctx_5g_auth_data_convertToJSON(ue_authentication_ctx_5g_auth_data_2);
	printf("repeating ue_authentication_ctx_5g_auth_data:\n%s\n", cJSON_Print(jsonue_authentication_ctx_5g_auth_data_2));
}

int main() {
  test_ue_authentication_ctx_5g_auth_data(1);
  test_ue_authentication_ctx_5g_auth_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_authentication_ctx_5g_auth_data_MAIN
#endif // ue_authentication_ctx_5g_auth_data_TEST
