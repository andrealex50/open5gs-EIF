#ifndef scp_domain_routing_info_subscription_TEST
#define scp_domain_routing_info_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_routing_info_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_routing_info_subscription.h"
scp_domain_routing_info_subscription_t* instantiate_scp_domain_routing_info_subscription(int include_optional);



scp_domain_routing_info_subscription_t* instantiate_scp_domain_routing_info_subscription(int include_optional) {
  scp_domain_routing_info_subscription_t* scp_domain_routing_info_subscription = NULL;
  if (include_optional) {
    scp_domain_routing_info_subscription = scp_domain_routing_info_subscription_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  } else {
    scp_domain_routing_info_subscription = scp_domain_routing_info_subscription_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "0",
      1
    );
  }

  return scp_domain_routing_info_subscription;
}


#ifdef scp_domain_routing_info_subscription_MAIN

void test_scp_domain_routing_info_subscription(int include_optional) {
    scp_domain_routing_info_subscription_t* scp_domain_routing_info_subscription_1 = instantiate_scp_domain_routing_info_subscription(include_optional);

	cJSON* jsonscp_domain_routing_info_subscription_1 = scp_domain_routing_info_subscription_convertToJSON(scp_domain_routing_info_subscription_1);
	printf("scp_domain_routing_info_subscription :\n%s\n", cJSON_Print(jsonscp_domain_routing_info_subscription_1));
	scp_domain_routing_info_subscription_t* scp_domain_routing_info_subscription_2 = scp_domain_routing_info_subscription_parseFromJSON(jsonscp_domain_routing_info_subscription_1);
	cJSON* jsonscp_domain_routing_info_subscription_2 = scp_domain_routing_info_subscription_convertToJSON(scp_domain_routing_info_subscription_2);
	printf("repeating scp_domain_routing_info_subscription:\n%s\n", cJSON_Print(jsonscp_domain_routing_info_subscription_2));
}

int main() {
  test_scp_domain_routing_info_subscription(1);
  test_scp_domain_routing_info_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_routing_info_subscription_MAIN
#endif // scp_domain_routing_info_subscription_TEST
