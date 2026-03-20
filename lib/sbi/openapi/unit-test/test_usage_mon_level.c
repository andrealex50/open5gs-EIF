#ifndef usage_mon_level_TEST
#define usage_mon_level_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_mon_level_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_mon_level.h"
usage_mon_level_t* instantiate_usage_mon_level(int include_optional);



usage_mon_level_t* instantiate_usage_mon_level(int include_optional) {
  usage_mon_level_t* usage_mon_level = NULL;
  if (include_optional) {
    usage_mon_level = usage_mon_level_create(
    );
  } else {
    usage_mon_level = usage_mon_level_create(
    );
  }

  return usage_mon_level;
}


#ifdef usage_mon_level_MAIN

void test_usage_mon_level(int include_optional) {
    usage_mon_level_t* usage_mon_level_1 = instantiate_usage_mon_level(include_optional);

	cJSON* jsonusage_mon_level_1 = usage_mon_level_convertToJSON(usage_mon_level_1);
	printf("usage_mon_level :\n%s\n", cJSON_Print(jsonusage_mon_level_1));
	usage_mon_level_t* usage_mon_level_2 = usage_mon_level_parseFromJSON(jsonusage_mon_level_1);
	cJSON* jsonusage_mon_level_2 = usage_mon_level_convertToJSON(usage_mon_level_2);
	printf("repeating usage_mon_level:\n%s\n", cJSON_Print(jsonusage_mon_level_2));
}

int main() {
  test_usage_mon_level(1);
  test_usage_mon_level(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_mon_level_MAIN
#endif // usage_mon_level_TEST
