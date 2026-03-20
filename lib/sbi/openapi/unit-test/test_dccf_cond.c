#ifndef dccf_cond_TEST
#define dccf_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dccf_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dccf_cond.h"
dccf_cond_t* instantiate_dccf_cond(int include_optional);



dccf_cond_t* instantiate_dccf_cond(int include_optional) {
  dccf_cond_t* dccf_cond = NULL;
  if (include_optional) {
    dccf_cond = dccf_cond_create(
      nrf_nfmanagement_service_dccf_cond_CONDITIONTYPE_DCCF_COND,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    dccf_cond = dccf_cond_create(
      nrf_nfmanagement_service_dccf_cond_CONDITIONTYPE_DCCF_COND,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return dccf_cond;
}


#ifdef dccf_cond_MAIN

void test_dccf_cond(int include_optional) {
    dccf_cond_t* dccf_cond_1 = instantiate_dccf_cond(include_optional);

	cJSON* jsondccf_cond_1 = dccf_cond_convertToJSON(dccf_cond_1);
	printf("dccf_cond :\n%s\n", cJSON_Print(jsondccf_cond_1));
	dccf_cond_t* dccf_cond_2 = dccf_cond_parseFromJSON(jsondccf_cond_1);
	cJSON* jsondccf_cond_2 = dccf_cond_convertToJSON(dccf_cond_2);
	printf("repeating dccf_cond:\n%s\n", cJSON_Print(jsondccf_cond_2));
}

int main() {
  test_dccf_cond(1);
  test_dccf_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // dccf_cond_MAIN
#endif // dccf_cond_TEST
