#ifndef usage_threshold_rm_TEST
#define usage_threshold_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_threshold_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_threshold_rm.h"
usage_threshold_rm_t* instantiate_usage_threshold_rm(int include_optional);



usage_threshold_rm_t* instantiate_usage_threshold_rm(int include_optional) {
  usage_threshold_rm_t* usage_threshold_rm = NULL;
  if (include_optional) {
    usage_threshold_rm = usage_threshold_rm_create(
      0,
      0,
      0,
      0
    );
  } else {
    usage_threshold_rm = usage_threshold_rm_create(
      0,
      0,
      0,
      0
    );
  }

  return usage_threshold_rm;
}


#ifdef usage_threshold_rm_MAIN

void test_usage_threshold_rm(int include_optional) {
    usage_threshold_rm_t* usage_threshold_rm_1 = instantiate_usage_threshold_rm(include_optional);

	cJSON* jsonusage_threshold_rm_1 = usage_threshold_rm_convertToJSON(usage_threshold_rm_1);
	printf("usage_threshold_rm :\n%s\n", cJSON_Print(jsonusage_threshold_rm_1));
	usage_threshold_rm_t* usage_threshold_rm_2 = usage_threshold_rm_parseFromJSON(jsonusage_threshold_rm_1);
	cJSON* jsonusage_threshold_rm_2 = usage_threshold_rm_convertToJSON(usage_threshold_rm_2);
	printf("repeating usage_threshold_rm:\n%s\n", cJSON_Print(jsonusage_threshold_rm_2));
}

int main() {
  test_usage_threshold_rm(1);
  test_usage_threshold_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_threshold_rm_MAIN
#endif // usage_threshold_rm_TEST
