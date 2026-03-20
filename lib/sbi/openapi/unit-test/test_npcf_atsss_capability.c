#ifndef npcf_atsss_capability_TEST
#define npcf_atsss_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define npcf_atsss_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/npcf_atsss_capability.h"
npcf_atsss_capability_t* instantiate_npcf_atsss_capability(int include_optional);



npcf_atsss_capability_t* instantiate_npcf_atsss_capability(int include_optional) {
  npcf_atsss_capability_t* npcf_atsss_capability = NULL;
  if (include_optional) {
    npcf_atsss_capability = npcf_atsss_capability_create(
    );
  } else {
    npcf_atsss_capability = npcf_atsss_capability_create(
    );
  }

  return npcf_atsss_capability;
}


#ifdef npcf_atsss_capability_MAIN

void test_npcf_atsss_capability(int include_optional) {
    npcf_atsss_capability_t* npcf_atsss_capability_1 = instantiate_npcf_atsss_capability(include_optional);

	cJSON* jsonnpcf_atsss_capability_1 = npcf_atsss_capability_convertToJSON(npcf_atsss_capability_1);
	printf("npcf_atsss_capability :\n%s\n", cJSON_Print(jsonnpcf_atsss_capability_1));
	npcf_atsss_capability_t* npcf_atsss_capability_2 = npcf_atsss_capability_parseFromJSON(jsonnpcf_atsss_capability_1);
	cJSON* jsonnpcf_atsss_capability_2 = npcf_atsss_capability_convertToJSON(npcf_atsss_capability_2);
	printf("repeating npcf_atsss_capability:\n%s\n", cJSON_Print(jsonnpcf_atsss_capability_2));
}

int main() {
  test_npcf_atsss_capability(1);
  test_npcf_atsss_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // npcf_atsss_capability_MAIN
#endif // npcf_atsss_capability_TEST
