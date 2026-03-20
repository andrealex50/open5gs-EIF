#ifndef nf_service_version_TEST
#define nf_service_version_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_service_version_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_service_version.h"
nf_service_version_t* instantiate_nf_service_version(int include_optional);



nf_service_version_t* instantiate_nf_service_version(int include_optional) {
  nf_service_version_t* nf_service_version = NULL;
  if (include_optional) {
    nf_service_version = nf_service_version_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    nf_service_version = nf_service_version_create(
      "0",
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return nf_service_version;
}


#ifdef nf_service_version_MAIN

void test_nf_service_version(int include_optional) {
    nf_service_version_t* nf_service_version_1 = instantiate_nf_service_version(include_optional);

	cJSON* jsonnf_service_version_1 = nf_service_version_convertToJSON(nf_service_version_1);
	printf("nf_service_version :\n%s\n", cJSON_Print(jsonnf_service_version_1));
	nf_service_version_t* nf_service_version_2 = nf_service_version_parseFromJSON(jsonnf_service_version_1);
	cJSON* jsonnf_service_version_2 = nf_service_version_convertToJSON(nf_service_version_2);
	printf("repeating nf_service_version:\n%s\n", cJSON_Print(jsonnf_service_version_2));
}

int main() {
  test_nf_service_version(1);
  test_nf_service_version(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_service_version_MAIN
#endif // nf_service_version_TEST
