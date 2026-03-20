#ifndef nf_service_status_TEST
#define nf_service_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_service_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_service_status.h"
nf_service_status_t* instantiate_nf_service_status(int include_optional);



nf_service_status_t* instantiate_nf_service_status(int include_optional) {
  nf_service_status_t* nf_service_status = NULL;
  if (include_optional) {
    nf_service_status = nf_service_status_create(
    );
  } else {
    nf_service_status = nf_service_status_create(
    );
  }

  return nf_service_status;
}


#ifdef nf_service_status_MAIN

void test_nf_service_status(int include_optional) {
    nf_service_status_t* nf_service_status_1 = instantiate_nf_service_status(include_optional);

	cJSON* jsonnf_service_status_1 = nf_service_status_convertToJSON(nf_service_status_1);
	printf("nf_service_status :\n%s\n", cJSON_Print(jsonnf_service_status_1));
	nf_service_status_t* nf_service_status_2 = nf_service_status_parseFromJSON(jsonnf_service_status_1);
	cJSON* jsonnf_service_status_2 = nf_service_status_convertToJSON(nf_service_status_2);
	printf("repeating nf_service_status:\n%s\n", cJSON_Print(jsonnf_service_status_2));
}

int main() {
  test_nf_service_status(1);
  test_nf_service_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_service_status_MAIN
#endif // nf_service_status_TEST
