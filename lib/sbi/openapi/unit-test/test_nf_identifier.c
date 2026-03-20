#ifndef nf_identifier_TEST
#define nf_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_identifier.h"
nf_identifier_t* instantiate_nf_identifier(int include_optional);



nf_identifier_t* instantiate_nf_identifier(int include_optional) {
  nf_identifier_t* nf_identifier = NULL;
  if (include_optional) {
    nf_identifier = nf_identifier_create(
      nudr_datarepository_api_openapi_file_nf_identifier__NRF,
      "0"
    );
  } else {
    nf_identifier = nf_identifier_create(
      nudr_datarepository_api_openapi_file_nf_identifier__NRF,
      "0"
    );
  }

  return nf_identifier;
}


#ifdef nf_identifier_MAIN

void test_nf_identifier(int include_optional) {
    nf_identifier_t* nf_identifier_1 = instantiate_nf_identifier(include_optional);

	cJSON* jsonnf_identifier_1 = nf_identifier_convertToJSON(nf_identifier_1);
	printf("nf_identifier :\n%s\n", cJSON_Print(jsonnf_identifier_1));
	nf_identifier_t* nf_identifier_2 = nf_identifier_parseFromJSON(jsonnf_identifier_1);
	cJSON* jsonnf_identifier_2 = nf_identifier_convertToJSON(nf_identifier_2);
	printf("repeating nf_identifier:\n%s\n", cJSON_Print(jsonnf_identifier_2));
}

int main() {
  test_nf_identifier(1);
  test_nf_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_identifier_MAIN
#endif // nf_identifier_TEST
