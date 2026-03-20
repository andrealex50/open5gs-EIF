#ifndef usage_mon_data_limit_TEST
#define usage_mon_data_limit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_mon_data_limit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_mon_data_limit.h"
usage_mon_data_limit_t* instantiate_usage_mon_data_limit(int include_optional);

#include "test_usage_mon_level.c"
#include "test_usage_threshold.c"
#include "test_time_period.c"


usage_mon_data_limit_t* instantiate_usage_mon_data_limit(int include_optional) {
  usage_mon_data_limit_t* usage_mon_data_limit = NULL;
  if (include_optional) {
    usage_mon_data_limit = usage_mon_data_limit_create(
      "0",
      list_createList(),
      null,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_usage_threshold(0),
       // false, not to have infinite recursion
      instantiate_time_period(0)
    );
  } else {
    usage_mon_data_limit = usage_mon_data_limit_create(
      "0",
      list_createList(),
      null,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL
    );
  }

  return usage_mon_data_limit;
}


#ifdef usage_mon_data_limit_MAIN

void test_usage_mon_data_limit(int include_optional) {
    usage_mon_data_limit_t* usage_mon_data_limit_1 = instantiate_usage_mon_data_limit(include_optional);

	cJSON* jsonusage_mon_data_limit_1 = usage_mon_data_limit_convertToJSON(usage_mon_data_limit_1);
	printf("usage_mon_data_limit :\n%s\n", cJSON_Print(jsonusage_mon_data_limit_1));
	usage_mon_data_limit_t* usage_mon_data_limit_2 = usage_mon_data_limit_parseFromJSON(jsonusage_mon_data_limit_1);
	cJSON* jsonusage_mon_data_limit_2 = usage_mon_data_limit_convertToJSON(usage_mon_data_limit_2);
	printf("repeating usage_mon_data_limit:\n%s\n", cJSON_Print(jsonusage_mon_data_limit_2));
}

int main() {
  test_usage_mon_data_limit(1);
  test_usage_mon_data_limit(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_mon_data_limit_MAIN
#endif // usage_mon_data_limit_TEST
