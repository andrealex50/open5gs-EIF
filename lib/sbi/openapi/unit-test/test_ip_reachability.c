#ifndef ip_reachability_TEST
#define ip_reachability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_reachability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_reachability.h"
ip_reachability_t* instantiate_ip_reachability(int include_optional);



ip_reachability_t* instantiate_ip_reachability(int include_optional) {
  ip_reachability_t* ip_reachability = NULL;
  if (include_optional) {
    ip_reachability = ip_reachability_create(
    );
  } else {
    ip_reachability = ip_reachability_create(
    );
  }

  return ip_reachability;
}


#ifdef ip_reachability_MAIN

void test_ip_reachability(int include_optional) {
    ip_reachability_t* ip_reachability_1 = instantiate_ip_reachability(include_optional);

	cJSON* jsonip_reachability_1 = ip_reachability_convertToJSON(ip_reachability_1);
	printf("ip_reachability :\n%s\n", cJSON_Print(jsonip_reachability_1));
	ip_reachability_t* ip_reachability_2 = ip_reachability_parseFromJSON(jsonip_reachability_1);
	cJSON* jsonip_reachability_2 = ip_reachability_convertToJSON(ip_reachability_2);
	printf("repeating ip_reachability:\n%s\n", cJSON_Print(jsonip_reachability_2));
}

int main() {
  test_ip_reachability(1);
  test_ip_reachability(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_reachability_MAIN
#endif // ip_reachability_TEST
