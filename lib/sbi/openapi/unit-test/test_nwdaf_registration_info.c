#ifndef nwdaf_registration_info_TEST
#define nwdaf_registration_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_registration_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_registration_info.h"
nwdaf_registration_info_t* instantiate_nwdaf_registration_info(int include_optional);



nwdaf_registration_info_t* instantiate_nwdaf_registration_info(int include_optional) {
  nwdaf_registration_info_t* nwdaf_registration_info = NULL;
  if (include_optional) {
    nwdaf_registration_info = nwdaf_registration_info_create(
      list_createList()
    );
  } else {
    nwdaf_registration_info = nwdaf_registration_info_create(
      list_createList()
    );
  }

  return nwdaf_registration_info;
}


#ifdef nwdaf_registration_info_MAIN

void test_nwdaf_registration_info(int include_optional) {
    nwdaf_registration_info_t* nwdaf_registration_info_1 = instantiate_nwdaf_registration_info(include_optional);

	cJSON* jsonnwdaf_registration_info_1 = nwdaf_registration_info_convertToJSON(nwdaf_registration_info_1);
	printf("nwdaf_registration_info :\n%s\n", cJSON_Print(jsonnwdaf_registration_info_1));
	nwdaf_registration_info_t* nwdaf_registration_info_2 = nwdaf_registration_info_parseFromJSON(jsonnwdaf_registration_info_1);
	cJSON* jsonnwdaf_registration_info_2 = nwdaf_registration_info_convertToJSON(nwdaf_registration_info_2);
	printf("repeating nwdaf_registration_info:\n%s\n", cJSON_Print(jsonnwdaf_registration_info_2));
}

int main() {
  test_nwdaf_registration_info(1);
  test_nwdaf_registration_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_registration_info_MAIN
#endif // nwdaf_registration_info_TEST
