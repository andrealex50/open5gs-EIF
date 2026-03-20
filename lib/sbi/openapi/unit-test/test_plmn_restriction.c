#ifndef plmn_restriction_TEST
#define plmn_restriction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_restriction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_restriction.h"
plmn_restriction_t* instantiate_plmn_restriction(int include_optional);

#include "test_service_area_restriction.c"


plmn_restriction_t* instantiate_plmn_restriction(int include_optional) {
  plmn_restriction_t* plmn_restriction = NULL;
  if (include_optional) {
    plmn_restriction = plmn_restriction_create(
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_service_area_restriction(0),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    plmn_restriction = plmn_restriction_create(
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return plmn_restriction;
}


#ifdef plmn_restriction_MAIN

void test_plmn_restriction(int include_optional) {
    plmn_restriction_t* plmn_restriction_1 = instantiate_plmn_restriction(include_optional);

	cJSON* jsonplmn_restriction_1 = plmn_restriction_convertToJSON(plmn_restriction_1);
	printf("plmn_restriction :\n%s\n", cJSON_Print(jsonplmn_restriction_1));
	plmn_restriction_t* plmn_restriction_2 = plmn_restriction_parseFromJSON(jsonplmn_restriction_1);
	cJSON* jsonplmn_restriction_2 = plmn_restriction_convertToJSON(plmn_restriction_2);
	printf("repeating plmn_restriction:\n%s\n", cJSON_Print(jsonplmn_restriction_2));
}

int main() {
  test_plmn_restriction(1);
  test_plmn_restriction(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_restriction_MAIN
#endif // plmn_restriction_TEST
