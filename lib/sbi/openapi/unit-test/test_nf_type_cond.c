#ifndef nf_type_cond_TEST
#define nf_type_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_type_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_type_cond.h"
nf_type_cond_t* instantiate_nf_type_cond(int include_optional);



nf_type_cond_t* instantiate_nf_type_cond(int include_optional) {
  nf_type_cond_t* nf_type_cond = NULL;
  if (include_optional) {
    nf_type_cond = nf_type_cond_create(
      nrf_nfmanagement_service_nf_type_cond__NRF
    );
  } else {
    nf_type_cond = nf_type_cond_create(
      nrf_nfmanagement_service_nf_type_cond__NRF
    );
  }

  return nf_type_cond;
}


#ifdef nf_type_cond_MAIN

void test_nf_type_cond(int include_optional) {
    nf_type_cond_t* nf_type_cond_1 = instantiate_nf_type_cond(include_optional);

	cJSON* jsonnf_type_cond_1 = nf_type_cond_convertToJSON(nf_type_cond_1);
	printf("nf_type_cond :\n%s\n", cJSON_Print(jsonnf_type_cond_1));
	nf_type_cond_t* nf_type_cond_2 = nf_type_cond_parseFromJSON(jsonnf_type_cond_1);
	cJSON* jsonnf_type_cond_2 = nf_type_cond_convertToJSON(nf_type_cond_2);
	printf("repeating nf_type_cond:\n%s\n", cJSON_Print(jsonnf_type_cond_2));
}

int main() {
  test_nf_type_cond(1);
  test_nf_type_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_type_cond_MAIN
#endif // nf_type_cond_TEST
