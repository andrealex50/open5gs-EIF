#ifndef reachability_for_sms_configuration_TEST
#define reachability_for_sms_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reachability_for_sms_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reachability_for_sms_configuration.h"
reachability_for_sms_configuration_t* instantiate_reachability_for_sms_configuration(int include_optional);



reachability_for_sms_configuration_t* instantiate_reachability_for_sms_configuration(int include_optional) {
  reachability_for_sms_configuration_t* reachability_for_sms_configuration = NULL;
  if (include_optional) {
    reachability_for_sms_configuration = reachability_for_sms_configuration_create(
    );
  } else {
    reachability_for_sms_configuration = reachability_for_sms_configuration_create(
    );
  }

  return reachability_for_sms_configuration;
}


#ifdef reachability_for_sms_configuration_MAIN

void test_reachability_for_sms_configuration(int include_optional) {
    reachability_for_sms_configuration_t* reachability_for_sms_configuration_1 = instantiate_reachability_for_sms_configuration(include_optional);

	cJSON* jsonreachability_for_sms_configuration_1 = reachability_for_sms_configuration_convertToJSON(reachability_for_sms_configuration_1);
	printf("reachability_for_sms_configuration :\n%s\n", cJSON_Print(jsonreachability_for_sms_configuration_1));
	reachability_for_sms_configuration_t* reachability_for_sms_configuration_2 = reachability_for_sms_configuration_parseFromJSON(jsonreachability_for_sms_configuration_1);
	cJSON* jsonreachability_for_sms_configuration_2 = reachability_for_sms_configuration_convertToJSON(reachability_for_sms_configuration_2);
	printf("repeating reachability_for_sms_configuration:\n%s\n", cJSON_Print(jsonreachability_for_sms_configuration_2));
}

int main() {
  test_reachability_for_sms_configuration(1);
  test_reachability_for_sms_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // reachability_for_sms_configuration_MAIN
#endif // reachability_for_sms_configuration_TEST
