#ifndef ie_info_TEST
#define ie_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ie_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ie_info.h"
ie_info_t* instantiate_ie_info(int include_optional);



ie_info_t* instantiate_ie_info(int include_optional) {
  ie_info_t* ie_info = NULL;
  if (include_optional) {
    ie_info = ie_info_create(
      n32_handshake_api_ie_info__URI_PARAM,
      n32_handshake_api_ie_info__UEID,
      "0",
      "0",
      1,
      list_createList()
    );
  } else {
    ie_info = ie_info_create(
      n32_handshake_api_ie_info__URI_PARAM,
      n32_handshake_api_ie_info__UEID,
      "0",
      "0",
      1,
      list_createList()
    );
  }

  return ie_info;
}


#ifdef ie_info_MAIN

void test_ie_info(int include_optional) {
    ie_info_t* ie_info_1 = instantiate_ie_info(include_optional);

	cJSON* jsonie_info_1 = ie_info_convertToJSON(ie_info_1);
	printf("ie_info :\n%s\n", cJSON_Print(jsonie_info_1));
	ie_info_t* ie_info_2 = ie_info_parseFromJSON(jsonie_info_1);
	cJSON* jsonie_info_2 = ie_info_convertToJSON(ie_info_2);
	printf("repeating ie_info:\n%s\n", cJSON_Print(jsonie_info_2));
}

int main() {
  test_ie_info(1);
  test_ie_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ie_info_MAIN
#endif // ie_info_TEST
