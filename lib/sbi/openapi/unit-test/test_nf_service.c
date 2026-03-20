#ifndef nf_service_TEST
#define nf_service_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_service_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_service.h"
nf_service_t* instantiate_nf_service(int include_optional);



nf_service_t* instantiate_nf_service(int include_optional) {
  nf_service_t* nf_service = NULL;
  if (include_optional) {
    nf_service = nf_service_create(
      "0",
      "0",
      list_createList(),
      nrf_nfdiscovery_service_nf_service__http,
      nrf_nfdiscovery_service_nf_service__REGISTERED,
      "a",
      "a",
      list_createList(),
      "0",
      list_createList(),
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      1,
      list_createList(),
      list_createList()
    );
  } else {
    nf_service = nf_service_create(
      "0",
      "0",
      list_createList(),
      nrf_nfdiscovery_service_nf_service__http,
      nrf_nfdiscovery_service_nf_service__REGISTERED,
      "a",
      "a",
      list_createList(),
      "0",
      list_createList(),
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      1,
      list_createList(),
      list_createList()
    );
  }

  return nf_service;
}


#ifdef nf_service_MAIN

void test_nf_service(int include_optional) {
    nf_service_t* nf_service_1 = instantiate_nf_service(include_optional);

	cJSON* jsonnf_service_1 = nf_service_convertToJSON(nf_service_1);
	printf("nf_service :\n%s\n", cJSON_Print(jsonnf_service_1));
	nf_service_t* nf_service_2 = nf_service_parseFromJSON(jsonnf_service_1);
	cJSON* jsonnf_service_2 = nf_service_convertToJSON(nf_service_2);
	printf("repeating nf_service:\n%s\n", cJSON_Print(jsonnf_service_2));
}

int main() {
  test_nf_service(1);
  test_nf_service(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_service_MAIN
#endif // nf_service_TEST
