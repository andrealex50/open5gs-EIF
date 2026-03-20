#ifndef rm_info_TEST
#define rm_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rm_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rm_info.h"
rm_info_t* instantiate_rm_info(int include_optional);

#include "test_rm_state.c"


rm_info_t* instantiate_rm_info(int include_optional) {
  rm_info_t* rm_info = NULL;
  if (include_optional) {
    rm_info = rm_info_create(
      null,
      nudr_datarepository_api_openapi_file_rm_info__3GPP_ACCESS
    );
  } else {
    rm_info = rm_info_create(
      null,
      nudr_datarepository_api_openapi_file_rm_info__3GPP_ACCESS
    );
  }

  return rm_info;
}


#ifdef rm_info_MAIN

void test_rm_info(int include_optional) {
    rm_info_t* rm_info_1 = instantiate_rm_info(include_optional);

	cJSON* jsonrm_info_1 = rm_info_convertToJSON(rm_info_1);
	printf("rm_info :\n%s\n", cJSON_Print(jsonrm_info_1));
	rm_info_t* rm_info_2 = rm_info_parseFromJSON(jsonrm_info_1);
	cJSON* jsonrm_info_2 = rm_info_convertToJSON(rm_info_2);
	printf("repeating rm_info:\n%s\n", cJSON_Print(jsonrm_info_2));
}

int main() {
  test_rm_info(1);
  test_rm_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // rm_info_MAIN
#endif // rm_info_TEST
