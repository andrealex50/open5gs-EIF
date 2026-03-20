#ifndef usage_mon_level_any_of_TEST
#define usage_mon_level_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_mon_level_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_mon_level_any_of.h"
usage_mon_level_any_of_t* instantiate_usage_mon_level_any_of(int include_optional);



usage_mon_level_any_of_t* instantiate_usage_mon_level_any_of(int include_optional) {
  usage_mon_level_any_of_t* usage_mon_level_any_of = NULL;
  if (include_optional) {
    usage_mon_level_any_of = usage_mon_level_any_of_create(
    );
  } else {
    usage_mon_level_any_of = usage_mon_level_any_of_create(
    );
  }

  return usage_mon_level_any_of;
}


#ifdef usage_mon_level_any_of_MAIN

void test_usage_mon_level_any_of(int include_optional) {
    usage_mon_level_any_of_t* usage_mon_level_any_of_1 = instantiate_usage_mon_level_any_of(include_optional);

	cJSON* jsonusage_mon_level_any_of_1 = usage_mon_level_any_of_convertToJSON(usage_mon_level_any_of_1);
	printf("usage_mon_level_any_of :\n%s\n", cJSON_Print(jsonusage_mon_level_any_of_1));
	usage_mon_level_any_of_t* usage_mon_level_any_of_2 = usage_mon_level_any_of_parseFromJSON(jsonusage_mon_level_any_of_1);
	cJSON* jsonusage_mon_level_any_of_2 = usage_mon_level_any_of_convertToJSON(usage_mon_level_any_of_2);
	printf("repeating usage_mon_level_any_of:\n%s\n", cJSON_Print(jsonusage_mon_level_any_of_2));
}

int main() {
  test_usage_mon_level_any_of(1);
  test_usage_mon_level_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_mon_level_any_of_MAIN
#endif // usage_mon_level_any_of_TEST
