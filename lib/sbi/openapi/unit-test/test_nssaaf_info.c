#ifndef nssaaf_info_TEST
#define nssaaf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nssaaf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nssaaf_info.h"
nssaaf_info_t* instantiate_nssaaf_info(int include_optional);



nssaaf_info_t* instantiate_nssaaf_info(int include_optional) {
  nssaaf_info_t* nssaaf_info = NULL;
  if (include_optional) {
    nssaaf_info = nssaaf_info_create(
      list_createList(),
      list_createList()
    );
  } else {
    nssaaf_info = nssaaf_info_create(
      list_createList(),
      list_createList()
    );
  }

  return nssaaf_info;
}


#ifdef nssaaf_info_MAIN

void test_nssaaf_info(int include_optional) {
    nssaaf_info_t* nssaaf_info_1 = instantiate_nssaaf_info(include_optional);

	cJSON* jsonnssaaf_info_1 = nssaaf_info_convertToJSON(nssaaf_info_1);
	printf("nssaaf_info :\n%s\n", cJSON_Print(jsonnssaaf_info_1));
	nssaaf_info_t* nssaaf_info_2 = nssaaf_info_parseFromJSON(jsonnssaaf_info_1);
	cJSON* jsonnssaaf_info_2 = nssaaf_info_convertToJSON(nssaaf_info_2);
	printf("repeating nssaaf_info:\n%s\n", cJSON_Print(jsonnssaaf_info_2));
}

int main() {
  test_nssaaf_info(1);
  test_nssaaf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nssaaf_info_MAIN
#endif // nssaaf_info_TEST
