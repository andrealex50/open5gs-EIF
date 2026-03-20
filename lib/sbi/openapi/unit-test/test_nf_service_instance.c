#ifndef nf_service_instance_TEST
#define nf_service_instance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_service_instance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_service_instance.h"
nf_service_instance_t* instantiate_nf_service_instance(int include_optional);



nf_service_instance_t* instantiate_nf_service_instance(int include_optional) {
  nf_service_instance_t* nf_service_instance = NULL;
  if (include_optional) {
    nf_service_instance = nf_service_instance_create(
      "0",
      "0",
      "0"
    );
  } else {
    nf_service_instance = nf_service_instance_create(
      "0",
      "0",
      "0"
    );
  }

  return nf_service_instance;
}


#ifdef nf_service_instance_MAIN

void test_nf_service_instance(int include_optional) {
    nf_service_instance_t* nf_service_instance_1 = instantiate_nf_service_instance(include_optional);

	cJSON* jsonnf_service_instance_1 = nf_service_instance_convertToJSON(nf_service_instance_1);
	printf("nf_service_instance :\n%s\n", cJSON_Print(jsonnf_service_instance_1));
	nf_service_instance_t* nf_service_instance_2 = nf_service_instance_parseFromJSON(jsonnf_service_instance_1);
	cJSON* jsonnf_service_instance_2 = nf_service_instance_convertToJSON(nf_service_instance_2);
	printf("repeating nf_service_instance:\n%s\n", cJSON_Print(jsonnf_service_instance_2));
}

int main() {
  test_nf_service_instance(1);
  test_nf_service_instance(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_service_instance_MAIN
#endif // nf_service_instance_TEST
