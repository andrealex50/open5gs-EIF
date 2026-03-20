#ifndef npcf_multicast_access_control_TEST
#define npcf_multicast_access_control_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define npcf_multicast_access_control_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/npcf_multicast_access_control.h"
npcf_multicast_access_control_t* instantiate_npcf_multicast_access_control(int include_optional);



npcf_multicast_access_control_t* instantiate_npcf_multicast_access_control(int include_optional) {
  npcf_multicast_access_control_t* npcf_multicast_access_control = NULL;
  if (include_optional) {
    npcf_multicast_access_control = npcf_multicast_access_control_create(
    );
  } else {
    npcf_multicast_access_control = npcf_multicast_access_control_create(
    );
  }

  return npcf_multicast_access_control;
}


#ifdef npcf_multicast_access_control_MAIN

void test_npcf_multicast_access_control(int include_optional) {
    npcf_multicast_access_control_t* npcf_multicast_access_control_1 = instantiate_npcf_multicast_access_control(include_optional);

	cJSON* jsonnpcf_multicast_access_control_1 = npcf_multicast_access_control_convertToJSON(npcf_multicast_access_control_1);
	printf("npcf_multicast_access_control :\n%s\n", cJSON_Print(jsonnpcf_multicast_access_control_1));
	npcf_multicast_access_control_t* npcf_multicast_access_control_2 = npcf_multicast_access_control_parseFromJSON(jsonnpcf_multicast_access_control_1);
	cJSON* jsonnpcf_multicast_access_control_2 = npcf_multicast_access_control_convertToJSON(npcf_multicast_access_control_2);
	printf("repeating npcf_multicast_access_control:\n%s\n", cJSON_Print(jsonnpcf_multicast_access_control_2));
}

int main() {
  test_npcf_multicast_access_control(1);
  test_npcf_multicast_access_control(0);

  printf("Hello world \n");
  return 0;
}

#endif // npcf_multicast_access_control_MAIN
#endif // npcf_multicast_access_control_TEST
