#ifndef plmn_snssai_TEST
#define plmn_snssai_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_snssai_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_snssai.h"
plmn_snssai_t* instantiate_plmn_snssai(int include_optional);

#include "test_plmn_id.c"


plmn_snssai_t* instantiate_plmn_snssai(int include_optional) {
  plmn_snssai_t* plmn_snssai = NULL;
  if (include_optional) {
    plmn_snssai = plmn_snssai_create(
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      list_createList(),
      "a"
    );
  } else {
    plmn_snssai = plmn_snssai_create(
      NULL,
      list_createList(),
      "a"
    );
  }

  return plmn_snssai;
}


#ifdef plmn_snssai_MAIN

void test_plmn_snssai(int include_optional) {
    plmn_snssai_t* plmn_snssai_1 = instantiate_plmn_snssai(include_optional);

	cJSON* jsonplmn_snssai_1 = plmn_snssai_convertToJSON(plmn_snssai_1);
	printf("plmn_snssai :\n%s\n", cJSON_Print(jsonplmn_snssai_1));
	plmn_snssai_t* plmn_snssai_2 = plmn_snssai_parseFromJSON(jsonplmn_snssai_1);
	cJSON* jsonplmn_snssai_2 = plmn_snssai_convertToJSON(plmn_snssai_2);
	printf("repeating plmn_snssai:\n%s\n", cJSON_Print(jsonplmn_snssai_2));
}

int main() {
  test_plmn_snssai(1);
  test_plmn_snssai(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_snssai_MAIN
#endif // plmn_snssai_TEST
