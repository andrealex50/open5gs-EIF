#ifndef dnn_snssai_information_TEST
#define dnn_snssai_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_snssai_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_snssai_information.h"
dnn_snssai_information_t* instantiate_dnn_snssai_information(int include_optional);

#include "test_snssai.c"


dnn_snssai_information_t* instantiate_dnn_snssai_information(int include_optional) {
  dnn_snssai_information_t* dnn_snssai_information = NULL;
  if (include_optional) {
    dnn_snssai_information = dnn_snssai_information_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    dnn_snssai_information = dnn_snssai_information_create(
      "0",
      NULL
    );
  }

  return dnn_snssai_information;
}


#ifdef dnn_snssai_information_MAIN

void test_dnn_snssai_information(int include_optional) {
    dnn_snssai_information_t* dnn_snssai_information_1 = instantiate_dnn_snssai_information(include_optional);

	cJSON* jsondnn_snssai_information_1 = dnn_snssai_information_convertToJSON(dnn_snssai_information_1);
	printf("dnn_snssai_information :\n%s\n", cJSON_Print(jsondnn_snssai_information_1));
	dnn_snssai_information_t* dnn_snssai_information_2 = dnn_snssai_information_parseFromJSON(jsondnn_snssai_information_1);
	cJSON* jsondnn_snssai_information_2 = dnn_snssai_information_convertToJSON(dnn_snssai_information_2);
	printf("repeating dnn_snssai_information:\n%s\n", cJSON_Print(jsondnn_snssai_information_2));
}

int main() {
  test_dnn_snssai_information(1);
  test_dnn_snssai_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_snssai_information_MAIN
#endif // dnn_snssai_information_TEST
