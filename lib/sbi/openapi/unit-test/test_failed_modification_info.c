#ifndef failed_modification_info_TEST
#define failed_modification_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define failed_modification_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/failed_modification_info.h"
failed_modification_info_t* instantiate_failed_modification_info(int include_optional);



failed_modification_info_t* instantiate_failed_modification_info(int include_optional) {
  failed_modification_info_t* failed_modification_info = NULL;
  if (include_optional) {
    failed_modification_info = failed_modification_info_create(
      "a",
      n32_handshake_api_failed_modification_info__INTEGRITY_CHECK_FAILED
    );
  } else {
    failed_modification_info = failed_modification_info_create(
      "a",
      n32_handshake_api_failed_modification_info__INTEGRITY_CHECK_FAILED
    );
  }

  return failed_modification_info;
}


#ifdef failed_modification_info_MAIN

void test_failed_modification_info(int include_optional) {
    failed_modification_info_t* failed_modification_info_1 = instantiate_failed_modification_info(include_optional);

	cJSON* jsonfailed_modification_info_1 = failed_modification_info_convertToJSON(failed_modification_info_1);
	printf("failed_modification_info :\n%s\n", cJSON_Print(jsonfailed_modification_info_1));
	failed_modification_info_t* failed_modification_info_2 = failed_modification_info_parseFromJSON(jsonfailed_modification_info_1);
	cJSON* jsonfailed_modification_info_2 = failed_modification_info_convertToJSON(failed_modification_info_2);
	printf("repeating failed_modification_info:\n%s\n", cJSON_Print(jsonfailed_modification_info_2));
}

int main() {
  test_failed_modification_info(1);
  test_failed_modification_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // failed_modification_info_MAIN
#endif // failed_modification_info_TEST
