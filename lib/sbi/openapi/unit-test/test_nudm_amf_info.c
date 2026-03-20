#ifndef nudm_amf_info_TEST
#define nudm_amf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nudm_amf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nudm_amf_info.h"
nudm_amf_info_t* instantiate_nudm_amf_info(int include_optional);

#include "test_guami.c"


nudm_amf_info_t* instantiate_nudm_amf_info(int include_optional) {
  nudm_amf_info_t* nudm_amf_info = NULL;
  if (include_optional) {
    nudm_amf_info = nudm_amf_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
      nudr_datarepository_api_openapi_file_nudm_amf_info__3GPP_ACCESS
    );
  } else {
    nudm_amf_info = nudm_amf_info_create(
      "0",
      NULL,
      nudr_datarepository_api_openapi_file_nudm_amf_info__3GPP_ACCESS
    );
  }

  return nudm_amf_info;
}


#ifdef nudm_amf_info_MAIN

void test_nudm_amf_info(int include_optional) {
    nudm_amf_info_t* nudm_amf_info_1 = instantiate_nudm_amf_info(include_optional);

	cJSON* jsonnudm_amf_info_1 = nudm_amf_info_convertToJSON(nudm_amf_info_1);
	printf("nudm_amf_info :\n%s\n", cJSON_Print(jsonnudm_amf_info_1));
	nudm_amf_info_t* nudm_amf_info_2 = nudm_amf_info_parseFromJSON(jsonnudm_amf_info_1);
	cJSON* jsonnudm_amf_info_2 = nudm_amf_info_convertToJSON(nudm_amf_info_2);
	printf("repeating nudm_amf_info:\n%s\n", cJSON_Print(jsonnudm_amf_info_2));
}

int main() {
  test_nudm_amf_info(1);
  test_nudm_amf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nudm_amf_info_MAIN
#endif // nudm_amf_info_TEST
