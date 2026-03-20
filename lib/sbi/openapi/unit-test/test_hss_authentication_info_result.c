#ifndef hss_authentication_info_result_TEST
#define hss_authentication_info_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_authentication_info_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_authentication_info_result.h"
hss_authentication_info_result_t* instantiate_hss_authentication_info_result(int include_optional);

#include "test_hss_authentication_vectors.c"


hss_authentication_info_result_t* instantiate_hss_authentication_info_result(int include_optional) {
  hss_authentication_info_result_t* hss_authentication_info_result = NULL;
  if (include_optional) {
    hss_authentication_info_result = hss_authentication_info_result_create(
      "a",
      null
    );
  } else {
    hss_authentication_info_result = hss_authentication_info_result_create(
      "a",
      null
    );
  }

  return hss_authentication_info_result;
}


#ifdef hss_authentication_info_result_MAIN

void test_hss_authentication_info_result(int include_optional) {
    hss_authentication_info_result_t* hss_authentication_info_result_1 = instantiate_hss_authentication_info_result(include_optional);

	cJSON* jsonhss_authentication_info_result_1 = hss_authentication_info_result_convertToJSON(hss_authentication_info_result_1);
	printf("hss_authentication_info_result :\n%s\n", cJSON_Print(jsonhss_authentication_info_result_1));
	hss_authentication_info_result_t* hss_authentication_info_result_2 = hss_authentication_info_result_parseFromJSON(jsonhss_authentication_info_result_1);
	cJSON* jsonhss_authentication_info_result_2 = hss_authentication_info_result_convertToJSON(hss_authentication_info_result_2);
	printf("repeating hss_authentication_info_result:\n%s\n", cJSON_Print(jsonhss_authentication_info_result_2));
}

int main() {
  test_hss_authentication_info_result(1);
  test_hss_authentication_info_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_authentication_info_result_MAIN
#endif // hss_authentication_info_result_TEST
