#ifndef scp_domain_routing_info_notification_TEST
#define scp_domain_routing_info_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_routing_info_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_routing_info_notification.h"
scp_domain_routing_info_notification_t* instantiate_scp_domain_routing_info_notification(int include_optional);

#include "test_scp_domain_routing_information.c"


scp_domain_routing_info_notification_t* instantiate_scp_domain_routing_info_notification(int include_optional) {
  scp_domain_routing_info_notification_t* scp_domain_routing_info_notification = NULL;
  if (include_optional) {
    scp_domain_routing_info_notification = scp_domain_routing_info_notification_create(
       // false, not to have infinite recursion
      instantiate_scp_domain_routing_information(0),
      1
    );
  } else {
    scp_domain_routing_info_notification = scp_domain_routing_info_notification_create(
      NULL,
      1
    );
  }

  return scp_domain_routing_info_notification;
}


#ifdef scp_domain_routing_info_notification_MAIN

void test_scp_domain_routing_info_notification(int include_optional) {
    scp_domain_routing_info_notification_t* scp_domain_routing_info_notification_1 = instantiate_scp_domain_routing_info_notification(include_optional);

	cJSON* jsonscp_domain_routing_info_notification_1 = scp_domain_routing_info_notification_convertToJSON(scp_domain_routing_info_notification_1);
	printf("scp_domain_routing_info_notification :\n%s\n", cJSON_Print(jsonscp_domain_routing_info_notification_1));
	scp_domain_routing_info_notification_t* scp_domain_routing_info_notification_2 = scp_domain_routing_info_notification_parseFromJSON(jsonscp_domain_routing_info_notification_1);
	cJSON* jsonscp_domain_routing_info_notification_2 = scp_domain_routing_info_notification_convertToJSON(scp_domain_routing_info_notification_2);
	printf("repeating scp_domain_routing_info_notification:\n%s\n", cJSON_Print(jsonscp_domain_routing_info_notification_2));
}

int main() {
  test_scp_domain_routing_info_notification(1);
  test_scp_domain_routing_info_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_routing_info_notification_MAIN
#endif // scp_domain_routing_info_notification_TEST
