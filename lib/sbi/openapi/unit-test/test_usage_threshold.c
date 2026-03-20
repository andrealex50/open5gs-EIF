#ifndef usage_threshold_TEST
#define usage_threshold_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_threshold_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_threshold.h"
usage_threshold_t* instantiate_usage_threshold(int include_optional);



usage_threshold_t* instantiate_usage_threshold(int include_optional) {
  usage_threshold_t* usage_threshold = NULL;
  if (include_optional) {
    usage_threshold = usage_threshold_create(
      0,
      0,
      0,
      0
    );
  } else {
    usage_threshold = usage_threshold_create(
      0,
      0,
      0,
      0
    );
  }

  return usage_threshold;
}


#ifdef usage_threshold_MAIN

void test_usage_threshold(int include_optional) {
    usage_threshold_t* usage_threshold_1 = instantiate_usage_threshold(include_optional);

	cJSON* jsonusage_threshold_1 = usage_threshold_convertToJSON(usage_threshold_1);
	printf("usage_threshold :\n%s\n", cJSON_Print(jsonusage_threshold_1));
	usage_threshold_t* usage_threshold_2 = usage_threshold_parseFromJSON(jsonusage_threshold_1);
	cJSON* jsonusage_threshold_2 = usage_threshold_convertToJSON(usage_threshold_2);
	printf("repeating usage_threshold:\n%s\n", cJSON_Print(jsonusage_threshold_2));
}

int main() {
  test_usage_threshold(1);
  test_usage_threshold(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_threshold_MAIN
#endif // usage_threshold_TEST
