#ifndef reachability_for_data_report_config_TEST
#define reachability_for_data_report_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reachability_for_data_report_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reachability_for_data_report_config.h"
reachability_for_data_report_config_t* instantiate_reachability_for_data_report_config(int include_optional);



reachability_for_data_report_config_t* instantiate_reachability_for_data_report_config(int include_optional) {
  reachability_for_data_report_config_t* reachability_for_data_report_config = NULL;
  if (include_optional) {
    reachability_for_data_report_config = reachability_for_data_report_config_create(
    );
  } else {
    reachability_for_data_report_config = reachability_for_data_report_config_create(
    );
  }

  return reachability_for_data_report_config;
}


#ifdef reachability_for_data_report_config_MAIN

void test_reachability_for_data_report_config(int include_optional) {
    reachability_for_data_report_config_t* reachability_for_data_report_config_1 = instantiate_reachability_for_data_report_config(include_optional);

	cJSON* jsonreachability_for_data_report_config_1 = reachability_for_data_report_config_convertToJSON(reachability_for_data_report_config_1);
	printf("reachability_for_data_report_config :\n%s\n", cJSON_Print(jsonreachability_for_data_report_config_1));
	reachability_for_data_report_config_t* reachability_for_data_report_config_2 = reachability_for_data_report_config_parseFromJSON(jsonreachability_for_data_report_config_1);
	cJSON* jsonreachability_for_data_report_config_2 = reachability_for_data_report_config_convertToJSON(reachability_for_data_report_config_2);
	printf("repeating reachability_for_data_report_config:\n%s\n", cJSON_Print(jsonreachability_for_data_report_config_2));
}

int main() {
  test_reachability_for_data_report_config(1);
  test_reachability_for_data_report_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // reachability_for_data_report_config_MAIN
#endif // reachability_for_data_report_config_TEST
