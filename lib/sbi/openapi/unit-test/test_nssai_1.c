#ifndef nssai_1_TEST
#define nssai_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nssai_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nssai_1.h"
nssai_1_t* instantiate_nssai_1(int include_optional);



nssai_1_t* instantiate_nssai_1(int include_optional) {
  nssai_1_t* nssai_1 = NULL;
  if (include_optional) {
    nssai_1 = nssai_1_create(
      "a",
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1
    );
  } else {
    nssai_1 = nssai_1_create(
      "a",
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      1
    );
  }

  return nssai_1;
}


#ifdef nssai_1_MAIN

void test_nssai_1(int include_optional) {
    nssai_1_t* nssai_1_1 = instantiate_nssai_1(include_optional);

	cJSON* jsonnssai_1_1 = nssai_1_convertToJSON(nssai_1_1);
	printf("nssai_1 :\n%s\n", cJSON_Print(jsonnssai_1_1));
	nssai_1_t* nssai_1_2 = nssai_1_parseFromJSON(jsonnssai_1_1);
	cJSON* jsonnssai_1_2 = nssai_1_convertToJSON(nssai_1_2);
	printf("repeating nssai_1:\n%s\n", cJSON_Print(jsonnssai_1_2));
}

int main() {
  test_nssai_1(1);
  test_nssai_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // nssai_1_MAIN
#endif // nssai_1_TEST
