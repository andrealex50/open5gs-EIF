#ifndef am_influ_event_any_of_TEST
#define am_influ_event_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define am_influ_event_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/am_influ_event_any_of.h"
am_influ_event_any_of_t* instantiate_am_influ_event_any_of(int include_optional);



am_influ_event_any_of_t* instantiate_am_influ_event_any_of(int include_optional) {
  am_influ_event_any_of_t* am_influ_event_any_of = NULL;
  if (include_optional) {
    am_influ_event_any_of = am_influ_event_any_of_create(
    );
  } else {
    am_influ_event_any_of = am_influ_event_any_of_create(
    );
  }

  return am_influ_event_any_of;
}


#ifdef am_influ_event_any_of_MAIN

void test_am_influ_event_any_of(int include_optional) {
    am_influ_event_any_of_t* am_influ_event_any_of_1 = instantiate_am_influ_event_any_of(include_optional);

	cJSON* jsonam_influ_event_any_of_1 = am_influ_event_any_of_convertToJSON(am_influ_event_any_of_1);
	printf("am_influ_event_any_of :\n%s\n", cJSON_Print(jsonam_influ_event_any_of_1));
	am_influ_event_any_of_t* am_influ_event_any_of_2 = am_influ_event_any_of_parseFromJSON(jsonam_influ_event_any_of_1);
	cJSON* jsonam_influ_event_any_of_2 = am_influ_event_any_of_convertToJSON(am_influ_event_any_of_2);
	printf("repeating am_influ_event_any_of:\n%s\n", cJSON_Print(jsonam_influ_event_any_of_2));
}

int main() {
  test_am_influ_event_any_of(1);
  test_am_influ_event_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // am_influ_event_any_of_MAIN
#endif // am_influ_event_any_of_TEST
