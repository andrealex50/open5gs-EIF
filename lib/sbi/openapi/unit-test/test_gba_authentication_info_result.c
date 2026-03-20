#ifndef gba_authentication_info_result_TEST
#define gba_authentication_info_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gba_authentication_info_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gba_authentication_info_result.h"
gba_authentication_info_result_t* instantiate_gba_authentication_info_result(int include_optional);

#include "test_model_3_g_aka_av.c"


gba_authentication_info_result_t* instantiate_gba_authentication_info_result(int include_optional) {
  gba_authentication_info_result_t* gba_authentication_info_result = NULL;
  if (include_optional) {
    gba_authentication_info_result = gba_authentication_info_result_create(
       // false, not to have infinite recursion
      instantiate_model_3_g_aka_av(0),
      "a"
    );
  } else {
    gba_authentication_info_result = gba_authentication_info_result_create(
      NULL,
      "a"
    );
  }

  return gba_authentication_info_result;
}


#ifdef gba_authentication_info_result_MAIN

void test_gba_authentication_info_result(int include_optional) {
    gba_authentication_info_result_t* gba_authentication_info_result_1 = instantiate_gba_authentication_info_result(include_optional);

	cJSON* jsongba_authentication_info_result_1 = gba_authentication_info_result_convertToJSON(gba_authentication_info_result_1);
	printf("gba_authentication_info_result :\n%s\n", cJSON_Print(jsongba_authentication_info_result_1));
	gba_authentication_info_result_t* gba_authentication_info_result_2 = gba_authentication_info_result_parseFromJSON(jsongba_authentication_info_result_1);
	cJSON* jsongba_authentication_info_result_2 = gba_authentication_info_result_convertToJSON(gba_authentication_info_result_2);
	printf("repeating gba_authentication_info_result:\n%s\n", cJSON_Print(jsongba_authentication_info_result_2));
}

int main() {
  test_gba_authentication_info_result(1);
  test_gba_authentication_info_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // gba_authentication_info_result_MAIN
#endif // gba_authentication_info_result_TEST
