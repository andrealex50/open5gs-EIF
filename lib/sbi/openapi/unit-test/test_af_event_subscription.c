#ifndef af_event_subscription_TEST
#define af_event_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_event_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_event_subscription.h"
af_event_subscription_t* instantiate_af_event_subscription(int include_optional);



af_event_subscription_t* instantiate_af_event_subscription(int include_optional) {
  af_event_subscription_t* af_event_subscription = NULL;
  if (include_optional) {
    af_event_subscription = af_event_subscription_create(
      npcf_policyauthorization_service_api_af_event_subscription__ACCESS_TYPE_CHANGE,
      npcf_policyauthorization_service_api_af_event_subscription__EVENT_DETECTION,
      56,
      56
    );
  } else {
    af_event_subscription = af_event_subscription_create(
      npcf_policyauthorization_service_api_af_event_subscription__ACCESS_TYPE_CHANGE,
      npcf_policyauthorization_service_api_af_event_subscription__EVENT_DETECTION,
      56,
      56
    );
  }

  return af_event_subscription;
}


#ifdef af_event_subscription_MAIN

void test_af_event_subscription(int include_optional) {
    af_event_subscription_t* af_event_subscription_1 = instantiate_af_event_subscription(include_optional);

	cJSON* jsonaf_event_subscription_1 = af_event_subscription_convertToJSON(af_event_subscription_1);
	printf("af_event_subscription :\n%s\n", cJSON_Print(jsonaf_event_subscription_1));
	af_event_subscription_t* af_event_subscription_2 = af_event_subscription_parseFromJSON(jsonaf_event_subscription_1);
	cJSON* jsonaf_event_subscription_2 = af_event_subscription_convertToJSON(af_event_subscription_2);
	printf("repeating af_event_subscription:\n%s\n", cJSON_Print(jsonaf_event_subscription_2));
}

int main() {
  test_af_event_subscription(1);
  test_af_event_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_event_subscription_MAIN
#endif // af_event_subscription_TEST
