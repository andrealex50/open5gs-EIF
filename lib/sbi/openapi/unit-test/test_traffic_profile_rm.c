#ifndef traffic_profile_rm_TEST
#define traffic_profile_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_profile_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_profile_rm.h"
traffic_profile_rm_t* instantiate_traffic_profile_rm(int include_optional);



traffic_profile_rm_t* instantiate_traffic_profile_rm(int include_optional) {
  traffic_profile_rm_t* traffic_profile_rm = NULL;
  if (include_optional) {
    traffic_profile_rm = traffic_profile_rm_create(
    );
  } else {
    traffic_profile_rm = traffic_profile_rm_create(
    );
  }

  return traffic_profile_rm;
}


#ifdef traffic_profile_rm_MAIN

void test_traffic_profile_rm(int include_optional) {
    traffic_profile_rm_t* traffic_profile_rm_1 = instantiate_traffic_profile_rm(include_optional);

	cJSON* jsontraffic_profile_rm_1 = traffic_profile_rm_convertToJSON(traffic_profile_rm_1);
	printf("traffic_profile_rm :\n%s\n", cJSON_Print(jsontraffic_profile_rm_1));
	traffic_profile_rm_t* traffic_profile_rm_2 = traffic_profile_rm_parseFromJSON(jsontraffic_profile_rm_1);
	cJSON* jsontraffic_profile_rm_2 = traffic_profile_rm_convertToJSON(traffic_profile_rm_2);
	printf("repeating traffic_profile_rm:\n%s\n", cJSON_Print(jsontraffic_profile_rm_2));
}

int main() {
  test_traffic_profile_rm(1);
  test_traffic_profile_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_profile_rm_MAIN
#endif // traffic_profile_rm_TEST
