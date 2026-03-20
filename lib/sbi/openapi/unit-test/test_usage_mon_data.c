#ifndef usage_mon_data_TEST
#define usage_mon_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_mon_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_mon_data.h"
usage_mon_data_t* instantiate_usage_mon_data(int include_optional);

#include "test_usage_mon_level.c"
#include "test_usage_threshold.c"


usage_mon_data_t* instantiate_usage_mon_data(int include_optional) {
  usage_mon_data_t* usage_mon_data = NULL;
  if (include_optional) {
    usage_mon_data = usage_mon_data_create(
      "0",
      list_createList(),
      null,
       // false, not to have infinite recursion
      instantiate_usage_threshold(0),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  } else {
    usage_mon_data = usage_mon_data_create(
      "0",
      list_createList(),
      null,
      NULL,
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  }

  return usage_mon_data;
}


#ifdef usage_mon_data_MAIN

void test_usage_mon_data(int include_optional) {
    usage_mon_data_t* usage_mon_data_1 = instantiate_usage_mon_data(include_optional);

	cJSON* jsonusage_mon_data_1 = usage_mon_data_convertToJSON(usage_mon_data_1);
	printf("usage_mon_data :\n%s\n", cJSON_Print(jsonusage_mon_data_1));
	usage_mon_data_t* usage_mon_data_2 = usage_mon_data_parseFromJSON(jsonusage_mon_data_1);
	cJSON* jsonusage_mon_data_2 = usage_mon_data_convertToJSON(usage_mon_data_2);
	printf("repeating usage_mon_data:\n%s\n", cJSON_Print(jsonusage_mon_data_2));
}

int main() {
  test_usage_mon_data(1);
  test_usage_mon_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_mon_data_MAIN
#endif // usage_mon_data_TEST
