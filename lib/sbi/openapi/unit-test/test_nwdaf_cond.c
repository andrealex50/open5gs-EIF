#ifndef nwdaf_cond_TEST
#define nwdaf_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_cond.h"
nwdaf_cond_t* instantiate_nwdaf_cond(int include_optional);



nwdaf_cond_t* instantiate_nwdaf_cond(int include_optional) {
  nwdaf_cond_t* nwdaf_cond = NULL;
  if (include_optional) {
    nwdaf_cond = nwdaf_cond_create(
      nrf_nfmanagement_service_nwdaf_cond_CONDITIONTYPE_NWDAF_COND,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    nwdaf_cond = nwdaf_cond_create(
      nrf_nfmanagement_service_nwdaf_cond_CONDITIONTYPE_NWDAF_COND,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return nwdaf_cond;
}


#ifdef nwdaf_cond_MAIN

void test_nwdaf_cond(int include_optional) {
    nwdaf_cond_t* nwdaf_cond_1 = instantiate_nwdaf_cond(include_optional);

	cJSON* jsonnwdaf_cond_1 = nwdaf_cond_convertToJSON(nwdaf_cond_1);
	printf("nwdaf_cond :\n%s\n", cJSON_Print(jsonnwdaf_cond_1));
	nwdaf_cond_t* nwdaf_cond_2 = nwdaf_cond_parseFromJSON(jsonnwdaf_cond_1);
	cJSON* jsonnwdaf_cond_2 = nwdaf_cond_convertToJSON(nwdaf_cond_2);
	printf("repeating nwdaf_cond:\n%s\n", cJSON_Print(jsonnwdaf_cond_2));
}

int main() {
  test_nwdaf_cond(1);
  test_nwdaf_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_cond_MAIN
#endif // nwdaf_cond_TEST
