#ifndef reachability_for_data_configuration_1_TEST
#define reachability_for_data_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reachability_for_data_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reachability_for_data_configuration_1.h"
reachability_for_data_configuration_1_t* instantiate_reachability_for_data_configuration_1(int include_optional);

#include "test_reachability_for_data_report_config.c"


reachability_for_data_configuration_1_t* instantiate_reachability_for_data_configuration_1(int include_optional) {
  reachability_for_data_configuration_1_t* reachability_for_data_configuration_1 = NULL;
  if (include_optional) {
    reachability_for_data_configuration_1 = reachability_for_data_configuration_1_create(
      null,
      56
    );
  } else {
    reachability_for_data_configuration_1 = reachability_for_data_configuration_1_create(
      null,
      56
    );
  }

  return reachability_for_data_configuration_1;
}


#ifdef reachability_for_data_configuration_1_MAIN

void test_reachability_for_data_configuration_1(int include_optional) {
    reachability_for_data_configuration_1_t* reachability_for_data_configuration_1_1 = instantiate_reachability_for_data_configuration_1(include_optional);

	cJSON* jsonreachability_for_data_configuration_1_1 = reachability_for_data_configuration_1_convertToJSON(reachability_for_data_configuration_1_1);
	printf("reachability_for_data_configuration_1 :\n%s\n", cJSON_Print(jsonreachability_for_data_configuration_1_1));
	reachability_for_data_configuration_1_t* reachability_for_data_configuration_1_2 = reachability_for_data_configuration_1_parseFromJSON(jsonreachability_for_data_configuration_1_1);
	cJSON* jsonreachability_for_data_configuration_1_2 = reachability_for_data_configuration_1_convertToJSON(reachability_for_data_configuration_1_2);
	printf("repeating reachability_for_data_configuration_1:\n%s\n", cJSON_Print(jsonreachability_for_data_configuration_1_2));
}

int main() {
  test_reachability_for_data_configuration_1(1);
  test_reachability_for_data_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // reachability_for_data_configuration_1_MAIN
#endif // reachability_for_data_configuration_1_TEST
