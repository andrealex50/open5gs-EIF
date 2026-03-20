#ifndef npcf_af_event_TEST
#define npcf_af_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define npcf_af_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/npcf_af_event.h"
npcf_af_event_t* instantiate_npcf_af_event(int include_optional);



npcf_af_event_t* instantiate_npcf_af_event(int include_optional) {
  npcf_af_event_t* npcf_af_event = NULL;
  if (include_optional) {
    npcf_af_event = npcf_af_event_create(
    );
  } else {
    npcf_af_event = npcf_af_event_create(
    );
  }

  return npcf_af_event;
}


#ifdef npcf_af_event_MAIN

void test_npcf_af_event(int include_optional) {
    npcf_af_event_t* npcf_af_event_1 = instantiate_npcf_af_event(include_optional);

	cJSON* jsonnpcf_af_event_1 = npcf_af_event_convertToJSON(npcf_af_event_1);
	printf("npcf_af_event :\n%s\n", cJSON_Print(jsonnpcf_af_event_1));
	npcf_af_event_t* npcf_af_event_2 = npcf_af_event_parseFromJSON(jsonnpcf_af_event_1);
	cJSON* jsonnpcf_af_event_2 = npcf_af_event_convertToJSON(npcf_af_event_2);
	printf("repeating npcf_af_event:\n%s\n", cJSON_Print(jsonnpcf_af_event_2));
}

int main() {
  test_npcf_af_event(1);
  test_npcf_af_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // npcf_af_event_MAIN
#endif // npcf_af_event_TEST
