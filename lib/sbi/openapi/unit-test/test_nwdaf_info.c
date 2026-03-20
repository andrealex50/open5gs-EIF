#ifndef nwdaf_info_TEST
#define nwdaf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_info.h"
nwdaf_info_t* instantiate_nwdaf_info(int include_optional);

#include "test_nwdaf_capability.c"


nwdaf_info_t* instantiate_nwdaf_info(int include_optional) {
  nwdaf_info_t* nwdaf_info = NULL;
  if (include_optional) {
    nwdaf_info = nwdaf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_nwdaf_capability(0),
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    nwdaf_info = nwdaf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return nwdaf_info;
}


#ifdef nwdaf_info_MAIN

void test_nwdaf_info(int include_optional) {
    nwdaf_info_t* nwdaf_info_1 = instantiate_nwdaf_info(include_optional);

	cJSON* jsonnwdaf_info_1 = nwdaf_info_convertToJSON(nwdaf_info_1);
	printf("nwdaf_info :\n%s\n", cJSON_Print(jsonnwdaf_info_1));
	nwdaf_info_t* nwdaf_info_2 = nwdaf_info_parseFromJSON(jsonnwdaf_info_1);
	cJSON* jsonnwdaf_info_2 = nwdaf_info_convertToJSON(nwdaf_info_2);
	printf("repeating nwdaf_info:\n%s\n", cJSON_Print(jsonnwdaf_info_2));
}

int main() {
  test_nwdaf_info(1);
  test_nwdaf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_info_MAIN
#endif // nwdaf_info_TEST
