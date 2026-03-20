#ifndef nssai_TEST
#define nssai_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nssai_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nssai.h"
nssai_t* instantiate_nssai(int include_optional);



nssai_t* instantiate_nssai(int include_optional) {
  nssai_t* nssai = NULL;
  if (include_optional) {
    nssai = nssai_create(
      "a",
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1
    );
  } else {
    nssai = nssai_create(
      "a",
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1
    );
  }

  return nssai;
}


#ifdef nssai_MAIN

void test_nssai(int include_optional) {
    nssai_t* nssai_1 = instantiate_nssai(include_optional);

	cJSON* jsonnssai_1 = nssai_convertToJSON(nssai_1);
	printf("nssai :\n%s\n", cJSON_Print(jsonnssai_1));
	nssai_t* nssai_2 = nssai_parseFromJSON(jsonnssai_1);
	cJSON* jsonnssai_2 = nssai_convertToJSON(nssai_2);
	printf("repeating nssai:\n%s\n", cJSON_Print(jsonnssai_2));
}

int main() {
  test_nssai(1);
  test_nssai(0);

  printf("Hello world \n");
  return 0;
}

#endif // nssai_MAIN
#endif // nssai_TEST
