#ifndef plmn_restriction_1_TEST
#define plmn_restriction_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_restriction_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_restriction_1.h"
plmn_restriction_1_t* instantiate_plmn_restriction_1(int include_optional);

#include "test_service_area_restriction_1.c"


plmn_restriction_1_t* instantiate_plmn_restriction_1(int include_optional) {
  plmn_restriction_1_t* plmn_restriction_1 = NULL;
  if (include_optional) {
    plmn_restriction_1 = plmn_restriction_1_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_service_area_restriction_1(0),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    plmn_restriction_1 = plmn_restriction_1_create(
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return plmn_restriction_1;
}


#ifdef plmn_restriction_1_MAIN

void test_plmn_restriction_1(int include_optional) {
    plmn_restriction_1_t* plmn_restriction_1_1 = instantiate_plmn_restriction_1(include_optional);

	cJSON* jsonplmn_restriction_1_1 = plmn_restriction_1_convertToJSON(plmn_restriction_1_1);
	printf("plmn_restriction_1 :\n%s\n", cJSON_Print(jsonplmn_restriction_1_1));
	plmn_restriction_1_t* plmn_restriction_1_2 = plmn_restriction_1_parseFromJSON(jsonplmn_restriction_1_1);
	cJSON* jsonplmn_restriction_1_2 = plmn_restriction_1_convertToJSON(plmn_restriction_1_2);
	printf("repeating plmn_restriction_1:\n%s\n", cJSON_Print(jsonplmn_restriction_1_2));
}

int main() {
  test_plmn_restriction_1(1);
  test_plmn_restriction_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_restriction_1_MAIN
#endif // plmn_restriction_1_TEST
