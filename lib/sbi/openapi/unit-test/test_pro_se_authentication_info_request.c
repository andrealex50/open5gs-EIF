#ifndef pro_se_authentication_info_request_TEST
#define pro_se_authentication_info_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_authentication_info_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_authentication_info_request.h"
pro_se_authentication_info_request_t* instantiate_pro_se_authentication_info_request(int include_optional);

#include "test_resynchronization_info.c"


pro_se_authentication_info_request_t* instantiate_pro_se_authentication_info_request(int include_optional) {
  pro_se_authentication_info_request_t* pro_se_authentication_info_request = NULL;
  if (include_optional) {
    pro_se_authentication_info_request = pro_se_authentication_info_request_create(
      "a",
      0,
       // false, not to have infinite recursion
      instantiate_resynchronization_info(0),
      "a"
    );
  } else {
    pro_se_authentication_info_request = pro_se_authentication_info_request_create(
      "a",
      0,
      NULL,
      "a"
    );
  }

  return pro_se_authentication_info_request;
}


#ifdef pro_se_authentication_info_request_MAIN

void test_pro_se_authentication_info_request(int include_optional) {
    pro_se_authentication_info_request_t* pro_se_authentication_info_request_1 = instantiate_pro_se_authentication_info_request(include_optional);

	cJSON* jsonpro_se_authentication_info_request_1 = pro_se_authentication_info_request_convertToJSON(pro_se_authentication_info_request_1);
	printf("pro_se_authentication_info_request :\n%s\n", cJSON_Print(jsonpro_se_authentication_info_request_1));
	pro_se_authentication_info_request_t* pro_se_authentication_info_request_2 = pro_se_authentication_info_request_parseFromJSON(jsonpro_se_authentication_info_request_1);
	cJSON* jsonpro_se_authentication_info_request_2 = pro_se_authentication_info_request_convertToJSON(pro_se_authentication_info_request_2);
	printf("repeating pro_se_authentication_info_request:\n%s\n", cJSON_Print(jsonpro_se_authentication_info_request_2));
}

int main() {
  test_pro_se_authentication_info_request(1);
  test_pro_se_authentication_info_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_authentication_info_request_MAIN
#endif // pro_se_authentication_info_request_TEST
