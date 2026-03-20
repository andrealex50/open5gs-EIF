#ifndef nwdaf_capability_TEST
#define nwdaf_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_capability.h"
nwdaf_capability_t* instantiate_nwdaf_capability(int include_optional);



nwdaf_capability_t* instantiate_nwdaf_capability(int include_optional) {
  nwdaf_capability_t* nwdaf_capability = NULL;
  if (include_optional) {
    nwdaf_capability = nwdaf_capability_create(
      1,
      1
    );
  } else {
    nwdaf_capability = nwdaf_capability_create(
      1,
      1
    );
  }

  return nwdaf_capability;
}


#ifdef nwdaf_capability_MAIN

void test_nwdaf_capability(int include_optional) {
    nwdaf_capability_t* nwdaf_capability_1 = instantiate_nwdaf_capability(include_optional);

	cJSON* jsonnwdaf_capability_1 = nwdaf_capability_convertToJSON(nwdaf_capability_1);
	printf("nwdaf_capability :\n%s\n", cJSON_Print(jsonnwdaf_capability_1));
	nwdaf_capability_t* nwdaf_capability_2 = nwdaf_capability_parseFromJSON(jsonnwdaf_capability_1);
	cJSON* jsonnwdaf_capability_2 = nwdaf_capability_convertToJSON(nwdaf_capability_2);
	printf("repeating nwdaf_capability:\n%s\n", cJSON_Print(jsonnwdaf_capability_2));
}

int main() {
  test_nwdaf_capability(1);
  test_nwdaf_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_capability_MAIN
#endif // nwdaf_capability_TEST
