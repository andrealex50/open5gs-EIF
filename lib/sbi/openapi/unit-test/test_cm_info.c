#ifndef cm_info_TEST
#define cm_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cm_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cm_info.h"
cm_info_t* instantiate_cm_info(int include_optional);

#include "test_cm_state.c"


cm_info_t* instantiate_cm_info(int include_optional) {
  cm_info_t* cm_info = NULL;
  if (include_optional) {
    cm_info = cm_info_create(
      null,
      nudr_datarepository_api_openapi_file_cm_info__3GPP_ACCESS
    );
  } else {
    cm_info = cm_info_create(
      null,
      nudr_datarepository_api_openapi_file_cm_info__3GPP_ACCESS
    );
  }

  return cm_info;
}


#ifdef cm_info_MAIN

void test_cm_info(int include_optional) {
    cm_info_t* cm_info_1 = instantiate_cm_info(include_optional);

	cJSON* jsoncm_info_1 = cm_info_convertToJSON(cm_info_1);
	printf("cm_info :\n%s\n", cJSON_Print(jsoncm_info_1));
	cm_info_t* cm_info_2 = cm_info_parseFromJSON(jsoncm_info_1);
	cJSON* jsoncm_info_2 = cm_info_convertToJSON(cm_info_2);
	printf("repeating cm_info:\n%s\n", cJSON_Print(jsoncm_info_2));
}

int main() {
  test_cm_info(1);
  test_cm_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // cm_info_MAIN
#endif // cm_info_TEST
