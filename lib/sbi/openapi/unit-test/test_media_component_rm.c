#ifndef media_component_rm_TEST
#define media_component_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_component_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_component_rm.h"
media_component_rm_t* instantiate_media_component_rm(int include_optional);

#include "test_af_routing_requirement_rm.c"
#include "test_preemption_capability_rm.c"
#include "test_preemption_vulnerability_rm.c"
#include "test_tsn_qos_container_rm.c"
#include "test_tscai_input_container.c"
#include "test_tscai_input_container.c"


media_component_rm_t* instantiate_media_component_rm(int include_optional) {
  media_component_rm_t* media_component_rm = NULL;
  if (include_optional) {
    media_component_rm = media_component_rm_create(
      "0",
       // false, not to have infinite recursion
      instantiate_af_routing_requirement_rm(0),
      "0",
      list_createList(),
      list_createList(),
      1,
      56,
      list_createList(),
      1.337,
      1.337,
      "0",
      npcf_policyauthorization_service_api_media_component_rm__ENABLED-UPLINK,
      "a",
      "a",
      0,
      0,
      "a",
      "a",
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_component_rm__AUDIO,
      "a",
      "a",
      "a",
      "a",
      null,
      null,
      npcf_policyauthorization_service_api_media_component_rm__ENABLED,
      npcf_policyauthorization_service_api_media_component_rm__PRIO_1,
      "a",
      "a",
      0,
      0,
       // false, not to have infinite recursion
      instantiate_tsn_qos_container_rm(0),
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
       // false, not to have infinite recursion
      instantiate_tscai_input_container(0),
      0
    );
  } else {
    media_component_rm = media_component_rm_create(
      "0",
      NULL,
      "0",
      list_createList(),
      list_createList(),
      1,
      56,
      list_createList(),
      1.337,
      1.337,
      "0",
      npcf_policyauthorization_service_api_media_component_rm__ENABLED-UPLINK,
      "a",
      "a",
      0,
      0,
      "a",
      "a",
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_component_rm__AUDIO,
      "a",
      "a",
      "a",
      "a",
      null,
      null,
      npcf_policyauthorization_service_api_media_component_rm__ENABLED,
      npcf_policyauthorization_service_api_media_component_rm__PRIO_1,
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

  return media_component_rm;
}


#ifdef media_component_rm_MAIN

void test_media_component_rm(int include_optional) {
    media_component_rm_t* media_component_rm_1 = instantiate_media_component_rm(include_optional);

	cJSON* jsonmedia_component_rm_1 = media_component_rm_convertToJSON(media_component_rm_1);
	printf("media_component_rm :\n%s\n", cJSON_Print(jsonmedia_component_rm_1));
	media_component_rm_t* media_component_rm_2 = media_component_rm_parseFromJSON(jsonmedia_component_rm_1);
	cJSON* jsonmedia_component_rm_2 = media_component_rm_convertToJSON(media_component_rm_2);
	printf("repeating media_component_rm:\n%s\n", cJSON_Print(jsonmedia_component_rm_2));
}

int main() {
  test_media_component_rm(1);
  test_media_component_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_component_rm_MAIN
#endif // media_component_rm_TEST
