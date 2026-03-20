#ifndef nwdaf_registration_TEST
#define nwdaf_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_registration.h"
nwdaf_registration_t* instantiate_nwdaf_registration(int include_optional);

#include "test_context_info.c"


nwdaf_registration_t* instantiate_nwdaf_registration(int include_optional) {
  nwdaf_registration_t* nwdaf_registration = NULL;
  if (include_optional) {
    nwdaf_registration = nwdaf_registration_create(
      "0",
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      "a",
      list_createList()
    );
  } else {
    nwdaf_registration = nwdaf_registration_create(
      "0",
      list_createList(),
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL,
      "a",
      list_createList()
    );
  }

  return nwdaf_registration;
}


#ifdef nwdaf_registration_MAIN

void test_nwdaf_registration(int include_optional) {
    nwdaf_registration_t* nwdaf_registration_1 = instantiate_nwdaf_registration(include_optional);

	cJSON* jsonnwdaf_registration_1 = nwdaf_registration_convertToJSON(nwdaf_registration_1);
	printf("nwdaf_registration :\n%s\n", cJSON_Print(jsonnwdaf_registration_1));
	nwdaf_registration_t* nwdaf_registration_2 = nwdaf_registration_parseFromJSON(jsonnwdaf_registration_1);
	cJSON* jsonnwdaf_registration_2 = nwdaf_registration_convertToJSON(nwdaf_registration_2);
	printf("repeating nwdaf_registration:\n%s\n", cJSON_Print(jsonnwdaf_registration_2));
}

int main() {
  test_nwdaf_registration(1);
  test_nwdaf_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_registration_MAIN
#endif // nwdaf_registration_TEST
