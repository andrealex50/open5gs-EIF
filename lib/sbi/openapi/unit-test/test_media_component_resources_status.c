#ifndef media_component_resources_status_TEST
#define media_component_resources_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define media_component_resources_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/media_component_resources_status.h"
media_component_resources_status_t* instantiate_media_component_resources_status(int include_optional);



media_component_resources_status_t* instantiate_media_component_resources_status(int include_optional) {
  media_component_resources_status_t* media_component_resources_status = NULL;
  if (include_optional) {
    media_component_resources_status = media_component_resources_status_create(
    );
  } else {
    media_component_resources_status = media_component_resources_status_create(
    );
  }

  return media_component_resources_status;
}


#ifdef media_component_resources_status_MAIN

void test_media_component_resources_status(int include_optional) {
    media_component_resources_status_t* media_component_resources_status_1 = instantiate_media_component_resources_status(include_optional);

	cJSON* jsonmedia_component_resources_status_1 = media_component_resources_status_convertToJSON(media_component_resources_status_1);
	printf("media_component_resources_status :\n%s\n", cJSON_Print(jsonmedia_component_resources_status_1));
	media_component_resources_status_t* media_component_resources_status_2 = media_component_resources_status_parseFromJSON(jsonmedia_component_resources_status_1);
	cJSON* jsonmedia_component_resources_status_2 = media_component_resources_status_convertToJSON(media_component_resources_status_2);
	printf("repeating media_component_resources_status:\n%s\n", cJSON_Print(jsonmedia_component_resources_status_2));
}

int main() {
  test_media_component_resources_status(1);
  test_media_component_resources_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // media_component_resources_status_MAIN
#endif // media_component_resources_status_TEST
