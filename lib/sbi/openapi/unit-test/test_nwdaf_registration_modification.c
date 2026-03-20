#ifndef nwdaf_registration_modification_TEST
#define nwdaf_registration_modification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_registration_modification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_registration_modification.h"
nwdaf_registration_modification_t* instantiate_nwdaf_registration_modification(int include_optional);



nwdaf_registration_modification_t* instantiate_nwdaf_registration_modification(int include_optional) {
  nwdaf_registration_modification_t* nwdaf_registration_modification = NULL;
  if (include_optional) {
    nwdaf_registration_modification = nwdaf_registration_modification_create(
      "0",
      "0",
      list_createList(),
      "a"
    );
  } else {
    nwdaf_registration_modification = nwdaf_registration_modification_create(
      "0",
      "0",
      list_createList(),
      "a"
    );
  }

  return nwdaf_registration_modification;
}


#ifdef nwdaf_registration_modification_MAIN

void test_nwdaf_registration_modification(int include_optional) {
    nwdaf_registration_modification_t* nwdaf_registration_modification_1 = instantiate_nwdaf_registration_modification(include_optional);

	cJSON* jsonnwdaf_registration_modification_1 = nwdaf_registration_modification_convertToJSON(nwdaf_registration_modification_1);
	printf("nwdaf_registration_modification :\n%s\n", cJSON_Print(jsonnwdaf_registration_modification_1));
	nwdaf_registration_modification_t* nwdaf_registration_modification_2 = nwdaf_registration_modification_parseFromJSON(jsonnwdaf_registration_modification_1);
	cJSON* jsonnwdaf_registration_modification_2 = nwdaf_registration_modification_convertToJSON(nwdaf_registration_modification_2);
	printf("repeating nwdaf_registration_modification:\n%s\n", cJSON_Print(jsonnwdaf_registration_modification_2));
}

int main() {
  test_nwdaf_registration_modification(1);
  test_nwdaf_registration_modification(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_registration_modification_MAIN
#endif // nwdaf_registration_modification_TEST
