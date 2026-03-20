#ifndef scp_capability_TEST
#define scp_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_capability.h"
scp_capability_t* instantiate_scp_capability(int include_optional);



scp_capability_t* instantiate_scp_capability(int include_optional) {
  scp_capability_t* scp_capability = NULL;
  if (include_optional) {
    scp_capability = scp_capability_create(
    );
  } else {
    scp_capability = scp_capability_create(
    );
  }

  return scp_capability;
}


#ifdef scp_capability_MAIN

void test_scp_capability(int include_optional) {
    scp_capability_t* scp_capability_1 = instantiate_scp_capability(include_optional);

	cJSON* jsonscp_capability_1 = scp_capability_convertToJSON(scp_capability_1);
	printf("scp_capability :\n%s\n", cJSON_Print(jsonscp_capability_1));
	scp_capability_t* scp_capability_2 = scp_capability_parseFromJSON(jsonscp_capability_1);
	cJSON* jsonscp_capability_2 = scp_capability_convertToJSON(scp_capability_2);
	printf("repeating scp_capability:\n%s\n", cJSON_Print(jsonscp_capability_2));
}

int main() {
  test_scp_capability(1);
  test_scp_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_capability_MAIN
#endif // scp_capability_TEST
