#ifndef authentication_info_result_TEST
#define authentication_info_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_info_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_info_result.h"
authentication_info_result_t* instantiate_authentication_info_result(int include_optional);

#include "test_authentication_vector.c"


authentication_info_result_t* instantiate_authentication_info_result(int include_optional) {
  authentication_info_result_t* authentication_info_result = NULL;
  if (include_optional) {
    authentication_info_result = authentication_info_result_create(
      nudm_ueau_authentication_info_result__5G_AKA,
      "a",
      null,
      "a",
      1,
      1,
      "a",
      list_createList()
    );
  } else {
    authentication_info_result = authentication_info_result_create(
      nudm_ueau_authentication_info_result__5G_AKA,
      "a",
      null,
      "a",
      1,
      1,
      "a",
      list_createList()
    );
  }

  return authentication_info_result;
}


#ifdef authentication_info_result_MAIN

void test_authentication_info_result(int include_optional) {
    authentication_info_result_t* authentication_info_result_1 = instantiate_authentication_info_result(include_optional);

	cJSON* jsonauthentication_info_result_1 = authentication_info_result_convertToJSON(authentication_info_result_1);
	printf("authentication_info_result :\n%s\n", cJSON_Print(jsonauthentication_info_result_1));
	authentication_info_result_t* authentication_info_result_2 = authentication_info_result_parseFromJSON(jsonauthentication_info_result_1);
	cJSON* jsonauthentication_info_result_2 = authentication_info_result_convertToJSON(authentication_info_result_2);
	printf("repeating authentication_info_result:\n%s\n", cJSON_Print(jsonauthentication_info_result_2));
}

int main() {
  test_authentication_info_result(1);
  test_authentication_info_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_info_result_MAIN
#endif // authentication_info_result_TEST
