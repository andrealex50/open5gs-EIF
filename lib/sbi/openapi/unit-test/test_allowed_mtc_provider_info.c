#ifndef allowed_mtc_provider_info_TEST
#define allowed_mtc_provider_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define allowed_mtc_provider_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/allowed_mtc_provider_info.h"
allowed_mtc_provider_info_t* instantiate_allowed_mtc_provider_info(int include_optional);



allowed_mtc_provider_info_t* instantiate_allowed_mtc_provider_info(int include_optional) {
  allowed_mtc_provider_info_t* allowed_mtc_provider_info = NULL;
  if (include_optional) {
    allowed_mtc_provider_info = allowed_mtc_provider_info_create(
      "0",
      "0"
    );
  } else {
    allowed_mtc_provider_info = allowed_mtc_provider_info_create(
      "0",
      "0"
    );
  }

  return allowed_mtc_provider_info;
}


#ifdef allowed_mtc_provider_info_MAIN

void test_allowed_mtc_provider_info(int include_optional) {
    allowed_mtc_provider_info_t* allowed_mtc_provider_info_1 = instantiate_allowed_mtc_provider_info(include_optional);

	cJSON* jsonallowed_mtc_provider_info_1 = allowed_mtc_provider_info_convertToJSON(allowed_mtc_provider_info_1);
	printf("allowed_mtc_provider_info :\n%s\n", cJSON_Print(jsonallowed_mtc_provider_info_1));
	allowed_mtc_provider_info_t* allowed_mtc_provider_info_2 = allowed_mtc_provider_info_parseFromJSON(jsonallowed_mtc_provider_info_1);
	cJSON* jsonallowed_mtc_provider_info_2 = allowed_mtc_provider_info_convertToJSON(allowed_mtc_provider_info_2);
	printf("repeating allowed_mtc_provider_info:\n%s\n", cJSON_Print(jsonallowed_mtc_provider_info_2));
}

int main() {
  test_allowed_mtc_provider_info(1);
  test_allowed_mtc_provider_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // allowed_mtc_provider_info_MAIN
#endif // allowed_mtc_provider_info_TEST
