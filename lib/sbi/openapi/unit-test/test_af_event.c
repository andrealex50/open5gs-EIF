#ifndef af_event_TEST
#define af_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_event.h"
af_event_t* instantiate_af_event(int include_optional);



af_event_t* instantiate_af_event(int include_optional) {
  af_event_t* af_event = NULL;
  if (include_optional) {
    af_event = af_event_create(
    );
  } else {
    af_event = af_event_create(
    );
  }

  return af_event;
}


#ifdef af_event_MAIN

void test_af_event(int include_optional) {
    af_event_t* af_event_1 = instantiate_af_event(include_optional);

	cJSON* jsonaf_event_1 = af_event_convertToJSON(af_event_1);
	printf("af_event :\n%s\n", cJSON_Print(jsonaf_event_1));
	af_event_t* af_event_2 = af_event_parseFromJSON(jsonaf_event_1);
	cJSON* jsonaf_event_2 = af_event_convertToJSON(af_event_2);
	printf("repeating af_event:\n%s\n", cJSON_Print(jsonaf_event_2));
}

int main() {
  test_af_event(1);
  test_af_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_event_MAIN
#endif // af_event_TEST
