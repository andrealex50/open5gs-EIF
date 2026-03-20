#ifndef up_path_chg_event_TEST
#define up_path_chg_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_path_chg_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_path_chg_event.h"
up_path_chg_event_t* instantiate_up_path_chg_event(int include_optional);



up_path_chg_event_t* instantiate_up_path_chg_event(int include_optional) {
  up_path_chg_event_t* up_path_chg_event = NULL;
  if (include_optional) {
    up_path_chg_event = up_path_chg_event_create(
      "0",
      "0",
      npcf_smpolicycontrol_api_up_path_chg_event__EARLY,
      1
    );
  } else {
    up_path_chg_event = up_path_chg_event_create(
      "0",
      "0",
      npcf_smpolicycontrol_api_up_path_chg_event__EARLY,
      1
    );
  }

  return up_path_chg_event;
}


#ifdef up_path_chg_event_MAIN

void test_up_path_chg_event(int include_optional) {
    up_path_chg_event_t* up_path_chg_event_1 = instantiate_up_path_chg_event(include_optional);

	cJSON* jsonup_path_chg_event_1 = up_path_chg_event_convertToJSON(up_path_chg_event_1);
	printf("up_path_chg_event :\n%s\n", cJSON_Print(jsonup_path_chg_event_1));
	up_path_chg_event_t* up_path_chg_event_2 = up_path_chg_event_parseFromJSON(jsonup_path_chg_event_1);
	cJSON* jsonup_path_chg_event_2 = up_path_chg_event_convertToJSON(up_path_chg_event_2);
	printf("repeating up_path_chg_event:\n%s\n", cJSON_Print(jsonup_path_chg_event_2));
}

int main() {
  test_up_path_chg_event(1);
  test_up_path_chg_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_path_chg_event_MAIN
#endif // up_path_chg_event_TEST
