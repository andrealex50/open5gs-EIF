#ifndef nf_info_TEST
#define nf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_info.h"
nf_info_t* instantiate_nf_info(int include_optional);



nf_info_t* instantiate_nf_info(int include_optional) {
  nf_info_t* nf_info = NULL;
  if (include_optional) {
    nf_info = nf_info_create(
      nrf_nfmanagement_service_nf_info__NRF
    );
  } else {
    nf_info = nf_info_create(
      nrf_nfmanagement_service_nf_info__NRF
    );
  }

  return nf_info;
}


#ifdef nf_info_MAIN

void test_nf_info(int include_optional) {
    nf_info_t* nf_info_1 = instantiate_nf_info(include_optional);

	cJSON* jsonnf_info_1 = nf_info_convertToJSON(nf_info_1);
	printf("nf_info :\n%s\n", cJSON_Print(jsonnf_info_1));
	nf_info_t* nf_info_2 = nf_info_parseFromJSON(jsonnf_info_1);
	cJSON* jsonnf_info_2 = nf_info_convertToJSON(nf_info_2);
	printf("repeating nf_info:\n%s\n", cJSON_Print(jsonnf_info_2));
}

int main() {
  test_nf_info(1);
  test_nf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_info_MAIN
#endif // nf_info_TEST
