#ifndef bsf_event_TEST
#define bsf_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define bsf_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/bsf_event.h"
bsf_event_t* instantiate_bsf_event(int include_optional);



bsf_event_t* instantiate_bsf_event(int include_optional) {
  bsf_event_t* bsf_event = NULL;
  if (include_optional) {
    bsf_event = bsf_event_create(
    );
  } else {
    bsf_event = bsf_event_create(
    );
  }

  return bsf_event;
}


#ifdef bsf_event_MAIN

void test_bsf_event(int include_optional) {
    bsf_event_t* bsf_event_1 = instantiate_bsf_event(include_optional);

	cJSON* jsonbsf_event_1 = bsf_event_convertToJSON(bsf_event_1);
	printf("bsf_event :\n%s\n", cJSON_Print(jsonbsf_event_1));
	bsf_event_t* bsf_event_2 = bsf_event_parseFromJSON(jsonbsf_event_1);
	cJSON* jsonbsf_event_2 = bsf_event_convertToJSON(bsf_event_2);
	printf("repeating bsf_event:\n%s\n", cJSON_Print(jsonbsf_event_2));
}

int main() {
  test_bsf_event(1);
  test_bsf_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // bsf_event_MAIN
#endif // bsf_event_TEST
