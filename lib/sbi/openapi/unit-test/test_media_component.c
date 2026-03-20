#ifndef media_component_TEST
#define media_component_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_component_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_component.h"
media_component_t* instantiate_media_component(int include_optional);

#include "test_af_routing_requirement.c"
#include "test_tsn_qos_container.c"
#include "test_tscai_input_container.c"
#include "test_tscai_input_container.c"


media_component_t* instantiate_media_component(int include_optional) {
  media_component_t* media_component = NULL;
  if (include_optional) {
    media_component = media_component_create(
      "0",
       // false, not to have infinite recursion
      instantiate_af_routing_requirement(0),
      "0",
      1,
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      1.337,
      1.337,
      "0",
      npcf_policyauthorization_service_api_media_component__ENABLED-UPLINK,
      "a",
      "a",
      0,
      0,
      "a",
      "a",
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_component__AUDIO,
      "a",
      "a",
      "a",
      "a",
      npcf_policyauthorization_service_api_media_component__NOT_PREEMPT,
      npcf_policyauthorization_service_api_media_component__NOT_PREEMPTABLE,
      npcf_policyauthorization_service_api_media_component__ENABLED,
      npcf_policyauthorization_service_api_media_component__PRIO_1,
      "a",
      "a",
      0,
      0,
       // false, not to have infinite recursion
      instantiate_tsn_qos_container(0),
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
      0
    );
  } else {
    media_component = media_component_create(
      "0",
      NULL,
      "0",
      1,
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      1.337,
      1.337,
      "0",
      npcf_policyauthorization_service_api_media_component__ENABLED-UPLINK,
      "a",
      "a",
      0,
      0,
      "a",
      "a",
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_component__AUDIO,
      "a",
      "a",
      "a",
      "a",
      npcf_policyauthorization_service_api_media_component__NOT_PREEMPT,
      npcf_policyauthorization_service_api_media_component__NOT_PREEMPTABLE,
      npcf_policyauthorization_service_api_media_component__ENABLED,
      npcf_policyauthorization_service_api_media_component__PRIO_1,
      "a",
      "a",
      0,
      0,
      NULL,
      NULL,
      NULL,
      0
    );
  }

  return media_component;
}


#ifdef media_component_MAIN

void test_media_component(int include_optional) {
    media_component_t* media_component_1 = instantiate_media_component(include_optional);

	cJSON* jsonmedia_component_1 = media_component_convertToJSON(media_component_1);
	printf("media_component :\n%s\n", cJSON_Print(jsonmedia_component_1));
	media_component_t* media_component_2 = media_component_parseFromJSON(jsonmedia_component_1);
	cJSON* jsonmedia_component_2 = media_component_convertToJSON(media_component_2);
	printf("repeating media_component:\n%s\n", cJSON_Print(jsonmedia_component_2));
}

int main() {
  test_media_component(1);
  test_media_component(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_component_MAIN
#endif // media_component_TEST
