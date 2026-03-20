#ifndef nef_cond_TEST
#define nef_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nef_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nef_cond.h"
nef_cond_t* instantiate_nef_cond(int include_optional);

#include "test_pfd_data.c"


nef_cond_t* instantiate_nef_cond(int include_optional) {
  nef_cond_t* nef_cond = NULL;
  if (include_optional) {
    nef_cond = nef_cond_create(
      nrf_nfmanagement_service_nef_cond_CONDITIONTYPE_NEF_COND,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_pfd_data(0),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    nef_cond = nef_cond_create(
      nrf_nfmanagement_service_nef_cond_CONDITIONTYPE_NEF_COND,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return nef_cond;
}


#ifdef nef_cond_MAIN

void test_nef_cond(int include_optional) {
    nef_cond_t* nef_cond_1 = instantiate_nef_cond(include_optional);

	cJSON* jsonnef_cond_1 = nef_cond_convertToJSON(nef_cond_1);
	printf("nef_cond :\n%s\n", cJSON_Print(jsonnef_cond_1));
	nef_cond_t* nef_cond_2 = nef_cond_parseFromJSON(jsonnef_cond_1);
	cJSON* jsonnef_cond_2 = nef_cond_convertToJSON(nef_cond_2);
	printf("repeating nef_cond:\n%s\n", cJSON_Print(jsonnef_cond_2));
}

int main() {
  test_nef_cond(1);
  test_nef_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nef_cond_MAIN
#endif // nef_cond_TEST
