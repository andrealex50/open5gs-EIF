#ifndef pro_se_eap_session_TEST
#define pro_se_eap_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_eap_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_eap_session.h"
pro_se_eap_session_t* instantiate_pro_se_eap_session(int include_optional);



pro_se_eap_session_t* instantiate_pro_se_eap_session(int include_optional) {
  pro_se_eap_session_t* pro_se_eap_session = NULL;
  if (include_optional) {
    pro_se_eap_session = pro_se_eap_session_create(
      "YQ==",
      "a",
      list_createList(),
      ausf_api_pro_se_eap_session__AUTHENTICATION_SUCCESS,
      "a",
      "YQ==",
      "a"
    );
  } else {
    pro_se_eap_session = pro_se_eap_session_create(
      "YQ==",
      "a",
      list_createList(),
      ausf_api_pro_se_eap_session__AUTHENTICATION_SUCCESS,
      "a",
      "YQ==",
      "a"
    );
  }

  return pro_se_eap_session;
}


#ifdef pro_se_eap_session_MAIN

void test_pro_se_eap_session(int include_optional) {
    pro_se_eap_session_t* pro_se_eap_session_1 = instantiate_pro_se_eap_session(include_optional);

	cJSON* jsonpro_se_eap_session_1 = pro_se_eap_session_convertToJSON(pro_se_eap_session_1);
	printf("pro_se_eap_session :\n%s\n", cJSON_Print(jsonpro_se_eap_session_1));
	pro_se_eap_session_t* pro_se_eap_session_2 = pro_se_eap_session_parseFromJSON(jsonpro_se_eap_session_1);
	cJSON* jsonpro_se_eap_session_2 = pro_se_eap_session_convertToJSON(pro_se_eap_session_2);
	printf("repeating pro_se_eap_session:\n%s\n", cJSON_Print(jsonpro_se_eap_session_2));
}

int main() {
  test_pro_se_eap_session(1);
  test_pro_se_eap_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_eap_session_MAIN
#endif // pro_se_eap_session_TEST
