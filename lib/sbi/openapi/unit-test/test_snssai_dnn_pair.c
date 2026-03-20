#ifndef snssai_dnn_pair_TEST
#define snssai_dnn_pair_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snssai_dnn_pair_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snssai_dnn_pair.h"
snssai_dnn_pair_t* instantiate_snssai_dnn_pair(int include_optional);

#include "test_snssai.c"


snssai_dnn_pair_t* instantiate_snssai_dnn_pair(int include_optional) {
  snssai_dnn_pair_t* snssai_dnn_pair = NULL;
  if (include_optional) {
    snssai_dnn_pair = snssai_dnn_pair_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    snssai_dnn_pair = snssai_dnn_pair_create(
      "0",
      NULL
    );
  }

  return snssai_dnn_pair;
}


#ifdef snssai_dnn_pair_MAIN

void test_snssai_dnn_pair(int include_optional) {
    snssai_dnn_pair_t* snssai_dnn_pair_1 = instantiate_snssai_dnn_pair(include_optional);

	cJSON* jsonsnssai_dnn_pair_1 = snssai_dnn_pair_convertToJSON(snssai_dnn_pair_1);
	printf("snssai_dnn_pair :\n%s\n", cJSON_Print(jsonsnssai_dnn_pair_1));
	snssai_dnn_pair_t* snssai_dnn_pair_2 = snssai_dnn_pair_parseFromJSON(jsonsnssai_dnn_pair_1);
	cJSON* jsonsnssai_dnn_pair_2 = snssai_dnn_pair_convertToJSON(snssai_dnn_pair_2);
	printf("repeating snssai_dnn_pair:\n%s\n", cJSON_Print(jsonsnssai_dnn_pair_2));
}

int main() {
  test_snssai_dnn_pair(1);
  test_snssai_dnn_pair(0);

  printf("Hello world \n");
  return 0;
}

#endif // snssai_dnn_pair_MAIN
#endif // snssai_dnn_pair_TEST
