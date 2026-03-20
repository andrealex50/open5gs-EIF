#ifndef gba_authentication_info_request_TEST
#define gba_authentication_info_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gba_authentication_info_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gba_authentication_info_request.h"
gba_authentication_info_request_t* instantiate_gba_authentication_info_request(int include_optional);

#include "test_resynchronization_info_1.c"


gba_authentication_info_request_t* instantiate_gba_authentication_info_request(int include_optional) {
  gba_authentication_info_request_t* gba_authentication_info_request = NULL;
  if (include_optional) {
    gba_authentication_info_request = gba_authentication_info_request_create(
      nudm_ueau_gba_authentication_info_request__DIGEST_AKAV1_MD5,
       // false, not to have infinite recursion
      instantiate_resynchronization_info_1(0),
      "a"
    );
  } else {
    gba_authentication_info_request = gba_authentication_info_request_create(
      nudm_ueau_gba_authentication_info_request__DIGEST_AKAV1_MD5,
      NULL,
      "a"
    );
  }

  return gba_authentication_info_request;
}


#ifdef gba_authentication_info_request_MAIN

void test_gba_authentication_info_request(int include_optional) {
    gba_authentication_info_request_t* gba_authentication_info_request_1 = instantiate_gba_authentication_info_request(include_optional);

	cJSON* jsongba_authentication_info_request_1 = gba_authentication_info_request_convertToJSON(gba_authentication_info_request_1);
	printf("gba_authentication_info_request :\n%s\n", cJSON_Print(jsongba_authentication_info_request_1));
	gba_authentication_info_request_t* gba_authentication_info_request_2 = gba_authentication_info_request_parseFromJSON(jsongba_authentication_info_request_1);
	cJSON* jsongba_authentication_info_request_2 = gba_authentication_info_request_convertToJSON(gba_authentication_info_request_2);
	printf("repeating gba_authentication_info_request:\n%s\n", cJSON_Print(jsongba_authentication_info_request_2));
}

int main() {
  test_gba_authentication_info_request(1);
  test_gba_authentication_info_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // gba_authentication_info_request_MAIN
#endif // gba_authentication_info_request_TEST
