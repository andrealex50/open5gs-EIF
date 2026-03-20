#ifndef collocated_nf_instance_TEST
#define collocated_nf_instance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define collocated_nf_instance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/collocated_nf_instance.h"
collocated_nf_instance_t* instantiate_collocated_nf_instance(int include_optional);



collocated_nf_instance_t* instantiate_collocated_nf_instance(int include_optional) {
  collocated_nf_instance_t* collocated_nf_instance = NULL;
  if (include_optional) {
    collocated_nf_instance = collocated_nf_instance_create(
      "0",
      nrf_nfdiscovery_service_collocated_nf_instance__UPF
    );
  } else {
    collocated_nf_instance = collocated_nf_instance_create(
      "0",
      nrf_nfdiscovery_service_collocated_nf_instance__UPF
    );
  }

  return collocated_nf_instance;
}


#ifdef collocated_nf_instance_MAIN

void test_collocated_nf_instance(int include_optional) {
    collocated_nf_instance_t* collocated_nf_instance_1 = instantiate_collocated_nf_instance(include_optional);

	cJSON* jsoncollocated_nf_instance_1 = collocated_nf_instance_convertToJSON(collocated_nf_instance_1);
	printf("collocated_nf_instance :\n%s\n", cJSON_Print(jsoncollocated_nf_instance_1));
	collocated_nf_instance_t* collocated_nf_instance_2 = collocated_nf_instance_parseFromJSON(jsoncollocated_nf_instance_1);
	cJSON* jsoncollocated_nf_instance_2 = collocated_nf_instance_convertToJSON(collocated_nf_instance_2);
	printf("repeating collocated_nf_instance:\n%s\n", cJSON_Print(jsoncollocated_nf_instance_2));
}

int main() {
  test_collocated_nf_instance(1);
  test_collocated_nf_instance(0);

  printf("Hello world \n");
  return 0;
}

#endif // collocated_nf_instance_MAIN
#endif // collocated_nf_instance_TEST
