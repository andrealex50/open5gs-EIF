#ifndef media_sub_component_rm_TEST
#define media_sub_component_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_sub_component_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_sub_component_rm.h"
media_sub_component_rm_t* instantiate_media_sub_component_rm(int include_optional);



media_sub_component_rm_t* instantiate_media_sub_component_rm(int include_optional) {
  media_sub_component_rm_t* media_sub_component_rm = NULL;
  if (include_optional) {
    media_sub_component_rm = media_sub_component_rm_create(
      npcf_policyauthorization_service_api_media_sub_component_rm__NO_INFORMATION,
      list_createList(),
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_sub_component_rm__ENABLED-UPLINK,
      "a",
      "a",
      "0",
      npcf_policyauthorization_service_api_media_sub_component_rm__NO_INFO
    );
  } else {
    media_sub_component_rm = media_sub_component_rm_create(
      npcf_policyauthorization_service_api_media_sub_component_rm__NO_INFORMATION,
      list_createList(),
      56,
      list_createList(),
      npcf_policyauthorization_service_api_media_sub_component_rm__ENABLED-UPLINK,
      "a",
      "a",
      "0",
      npcf_policyauthorization_service_api_media_sub_component_rm__NO_INFO
    );
  }

  return media_sub_component_rm;
}


#ifdef media_sub_component_rm_MAIN

void test_media_sub_component_rm(int include_optional) {
    media_sub_component_rm_t* media_sub_component_rm_1 = instantiate_media_sub_component_rm(include_optional);

	cJSON* jsonmedia_sub_component_rm_1 = media_sub_component_rm_convertToJSON(media_sub_component_rm_1);
	printf("media_sub_component_rm :\n%s\n", cJSON_Print(jsonmedia_sub_component_rm_1));
	media_sub_component_rm_t* media_sub_component_rm_2 = media_sub_component_rm_parseFromJSON(jsonmedia_sub_component_rm_1);
	cJSON* jsonmedia_sub_component_rm_2 = media_sub_component_rm_convertToJSON(media_sub_component_rm_2);
	printf("repeating media_sub_component_rm:\n%s\n", cJSON_Print(jsonmedia_sub_component_rm_2));
}

int main() {
  test_media_sub_component_rm(1);
  test_media_sub_component_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_sub_component_rm_MAIN
#endif // media_sub_component_rm_TEST
