#ifndef pcscf_restoration_request_data_TEST
#define pcscf_restoration_request_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcscf_restoration_request_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcscf_restoration_request_data.h"
pcscf_restoration_request_data_t* instantiate_pcscf_restoration_request_data(int include_optional);

#include "test_snssai.c"


pcscf_restoration_request_data_t* instantiate_pcscf_restoration_request_data(int include_optional) {
  pcscf_restoration_request_data_t* pcscf_restoration_request_data = NULL;
  if (include_optional) {
    pcscf_restoration_request_data = pcscf_restoration_request_data_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    pcscf_restoration_request_data = pcscf_restoration_request_data_create(
      "0",
      "0",
      NULL,
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return pcscf_restoration_request_data;
}


#ifdef pcscf_restoration_request_data_MAIN

void test_pcscf_restoration_request_data(int include_optional) {
    pcscf_restoration_request_data_t* pcscf_restoration_request_data_1 = instantiate_pcscf_restoration_request_data(include_optional);

	cJSON* jsonpcscf_restoration_request_data_1 = pcscf_restoration_request_data_convertToJSON(pcscf_restoration_request_data_1);
	printf("pcscf_restoration_request_data :\n%s\n", cJSON_Print(jsonpcscf_restoration_request_data_1));
	pcscf_restoration_request_data_t* pcscf_restoration_request_data_2 = pcscf_restoration_request_data_parseFromJSON(jsonpcscf_restoration_request_data_1);
	cJSON* jsonpcscf_restoration_request_data_2 = pcscf_restoration_request_data_convertToJSON(pcscf_restoration_request_data_2);
	printf("repeating pcscf_restoration_request_data:\n%s\n", cJSON_Print(jsonpcscf_restoration_request_data_2));
}

int main() {
  test_pcscf_restoration_request_data(1);
  test_pcscf_restoration_request_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcscf_restoration_request_data_MAIN
#endif // pcscf_restoration_request_data_TEST
