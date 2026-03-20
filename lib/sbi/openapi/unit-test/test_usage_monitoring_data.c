#ifndef usage_monitoring_data_TEST
#define usage_monitoring_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_monitoring_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_monitoring_data.h"
usage_monitoring_data_t* instantiate_usage_monitoring_data(int include_optional);



usage_monitoring_data_t* instantiate_usage_monitoring_data(int include_optional) {
  usage_monitoring_data_t* usage_monitoring_data = NULL;
  if (include_optional) {
    usage_monitoring_data = usage_monitoring_data_create(
      "0",
      0,
      0,
      0,
      56,
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      56,
      56,
      list_createList()
    );
  } else {
    usage_monitoring_data = usage_monitoring_data_create(
      "0",
      0,
      0,
      0,
      56,
      "2013-10-20T19:20:30+01:00",
      0,
      0,
      0,
      56,
      56,
      list_createList()
    );
  }

  return usage_monitoring_data;
}


#ifdef usage_monitoring_data_MAIN

void test_usage_monitoring_data(int include_optional) {
    usage_monitoring_data_t* usage_monitoring_data_1 = instantiate_usage_monitoring_data(include_optional);

	cJSON* jsonusage_monitoring_data_1 = usage_monitoring_data_convertToJSON(usage_monitoring_data_1);
	printf("usage_monitoring_data :\n%s\n", cJSON_Print(jsonusage_monitoring_data_1));
	usage_monitoring_data_t* usage_monitoring_data_2 = usage_monitoring_data_parseFromJSON(jsonusage_monitoring_data_1);
	cJSON* jsonusage_monitoring_data_2 = usage_monitoring_data_convertToJSON(usage_monitoring_data_2);
	printf("repeating usage_monitoring_data:\n%s\n", cJSON_Print(jsonusage_monitoring_data_2));
}

int main() {
  test_usage_monitoring_data(1);
  test_usage_monitoring_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_monitoring_data_MAIN
#endif // usage_monitoring_data_TEST
