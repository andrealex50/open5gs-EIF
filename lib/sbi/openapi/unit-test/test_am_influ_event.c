#ifndef am_influ_event_TEST
#define am_influ_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define am_influ_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/am_influ_event.h"
am_influ_event_t* instantiate_am_influ_event(int include_optional);



am_influ_event_t* instantiate_am_influ_event(int include_optional) {
  am_influ_event_t* am_influ_event = NULL;
  if (include_optional) {
    am_influ_event = am_influ_event_create(
    );
  } else {
    am_influ_event = am_influ_event_create(
    );
  }

  return am_influ_event;
}


#ifdef am_influ_event_MAIN

void test_am_influ_event(int include_optional) {
    am_influ_event_t* am_influ_event_1 = instantiate_am_influ_event(include_optional);

	cJSON* jsonam_influ_event_1 = am_influ_event_convertToJSON(am_influ_event_1);
	printf("am_influ_event :\n%s\n", cJSON_Print(jsonam_influ_event_1));
	am_influ_event_t* am_influ_event_2 = am_influ_event_parseFromJSON(jsonam_influ_event_1);
	cJSON* jsonam_influ_event_2 = am_influ_event_convertToJSON(am_influ_event_2);
	printf("repeating am_influ_event:\n%s\n", cJSON_Print(jsonam_influ_event_2));
}

int main() {
  test_am_influ_event(1);
  test_am_influ_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // am_influ_event_MAIN
#endif // am_influ_event_TEST
