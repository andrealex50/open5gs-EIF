#ifndef nf_instance_info_TEST
#define nf_instance_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_instance_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_instance_info.h"
nf_instance_info_t* instantiate_nf_instance_info(int include_optional);

#include "test_preferred_search.c"


nf_instance_info_t* instantiate_nf_instance_info(int include_optional) {
  nf_instance_info_t* nf_instance_info = NULL;
  if (include_optional) {
    nf_instance_info = nf_instance_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_preferred_search(0),
      list_createList()
    );
  } else {
    nf_instance_info = nf_instance_info_create(
      "0",
      NULL,
      list_createList()
    );
  }

  return nf_instance_info;
}


#ifdef nf_instance_info_MAIN

void test_nf_instance_info(int include_optional) {
    nf_instance_info_t* nf_instance_info_1 = instantiate_nf_instance_info(include_optional);

	cJSON* jsonnf_instance_info_1 = nf_instance_info_convertToJSON(nf_instance_info_1);
	printf("nf_instance_info :\n%s\n", cJSON_Print(jsonnf_instance_info_1));
	nf_instance_info_t* nf_instance_info_2 = nf_instance_info_parseFromJSON(jsonnf_instance_info_1);
	cJSON* jsonnf_instance_info_2 = nf_instance_info_convertToJSON(nf_instance_info_2);
	printf("repeating nf_instance_info:\n%s\n", cJSON_Print(jsonnf_instance_info_2));
}

int main() {
  test_nf_instance_info(1);
  test_nf_instance_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_instance_info_MAIN
#endif // nf_instance_info_TEST
