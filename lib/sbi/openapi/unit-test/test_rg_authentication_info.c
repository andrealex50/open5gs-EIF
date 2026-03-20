#ifndef rg_authentication_info_TEST
#define rg_authentication_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rg_authentication_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rg_authentication_info.h"
rg_authentication_info_t* instantiate_rg_authentication_info(int include_optional);



rg_authentication_info_t* instantiate_rg_authentication_info(int include_optional) {
  rg_authentication_info_t* rg_authentication_info = NULL;
  if (include_optional) {
    rg_authentication_info = rg_authentication_info_create(
      "a",
      1,
      "a"
    );
  } else {
    rg_authentication_info = rg_authentication_info_create(
      "a",
      1,
      "a"
    );
  }

  return rg_authentication_info;
}


#ifdef rg_authentication_info_MAIN

void test_rg_authentication_info(int include_optional) {
    rg_authentication_info_t* rg_authentication_info_1 = instantiate_rg_authentication_info(include_optional);

	cJSON* jsonrg_authentication_info_1 = rg_authentication_info_convertToJSON(rg_authentication_info_1);
	printf("rg_authentication_info :\n%s\n", cJSON_Print(jsonrg_authentication_info_1));
	rg_authentication_info_t* rg_authentication_info_2 = rg_authentication_info_parseFromJSON(jsonrg_authentication_info_1);
	cJSON* jsonrg_authentication_info_2 = rg_authentication_info_convertToJSON(rg_authentication_info_2);
	printf("repeating rg_authentication_info:\n%s\n", cJSON_Print(jsonrg_authentication_info_2));
}

int main() {
  test_rg_authentication_info(1);
  test_rg_authentication_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // rg_authentication_info_MAIN
#endif // rg_authentication_info_TEST
