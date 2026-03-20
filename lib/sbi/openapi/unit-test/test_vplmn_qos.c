#ifndef vplmn_qos_TEST
#define vplmn_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vplmn_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vplmn_qos.h"
vplmn_qos_t* instantiate_vplmn_qos(int include_optional);

#include "test_arp.c"
#include "test_ambr.c"


vplmn_qos_t* instantiate_vplmn_qos(int include_optional) {
  vplmn_qos_t* vplmn_qos = NULL;
  if (include_optional) {
    vplmn_qos = vplmn_qos_create(
      0,
       // false, not to have infinite recursion
      instantiate_arp(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    vplmn_qos = vplmn_qos_create(
      0,
      NULL,
      NULL,
      "a",
      "a",
      "a",
      "a"
    );
  }

  return vplmn_qos;
}


#ifdef vplmn_qos_MAIN

void test_vplmn_qos(int include_optional) {
    vplmn_qos_t* vplmn_qos_1 = instantiate_vplmn_qos(include_optional);

	cJSON* jsonvplmn_qos_1 = vplmn_qos_convertToJSON(vplmn_qos_1);
	printf("vplmn_qos :\n%s\n", cJSON_Print(jsonvplmn_qos_1));
	vplmn_qos_t* vplmn_qos_2 = vplmn_qos_parseFromJSON(jsonvplmn_qos_1);
	cJSON* jsonvplmn_qos_2 = vplmn_qos_convertToJSON(vplmn_qos_2);
	printf("repeating vplmn_qos:\n%s\n", cJSON_Print(jsonvplmn_qos_2));
}

int main() {
  test_vplmn_qos(1);
  test_vplmn_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // vplmn_qos_MAIN
#endif // vplmn_qos_TEST
