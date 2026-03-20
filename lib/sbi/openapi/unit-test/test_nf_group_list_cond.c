#ifndef nf_group_list_cond_TEST
#define nf_group_list_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_group_list_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_group_list_cond.h"
nf_group_list_cond_t* instantiate_nf_group_list_cond(int include_optional);



nf_group_list_cond_t* instantiate_nf_group_list_cond(int include_optional) {
  nf_group_list_cond_t* nf_group_list_cond = NULL;
  if (include_optional) {
    nf_group_list_cond = nf_group_list_cond_create(
      nrf_nfmanagement_service_nf_group_list_cond_CONDITIONTYPE_NF_GROUP_LIST_COND,
      nrf_nfmanagement_service_nf_group_list_cond_NFTYPE_UDM,
      list_createList()
    );
  } else {
    nf_group_list_cond = nf_group_list_cond_create(
      nrf_nfmanagement_service_nf_group_list_cond_CONDITIONTYPE_NF_GROUP_LIST_COND,
      nrf_nfmanagement_service_nf_group_list_cond_NFTYPE_UDM,
      list_createList()
    );
  }

  return nf_group_list_cond;
}


#ifdef nf_group_list_cond_MAIN

void test_nf_group_list_cond(int include_optional) {
    nf_group_list_cond_t* nf_group_list_cond_1 = instantiate_nf_group_list_cond(include_optional);

	cJSON* jsonnf_group_list_cond_1 = nf_group_list_cond_convertToJSON(nf_group_list_cond_1);
	printf("nf_group_list_cond :\n%s\n", cJSON_Print(jsonnf_group_list_cond_1));
	nf_group_list_cond_t* nf_group_list_cond_2 = nf_group_list_cond_parseFromJSON(jsonnf_group_list_cond_1);
	cJSON* jsonnf_group_list_cond_2 = nf_group_list_cond_convertToJSON(nf_group_list_cond_2);
	printf("repeating nf_group_list_cond:\n%s\n", cJSON_Print(jsonnf_group_list_cond_2));
}

int main() {
  test_nf_group_list_cond(1);
  test_nf_group_list_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_group_list_cond_MAIN
#endif // nf_group_list_cond_TEST
