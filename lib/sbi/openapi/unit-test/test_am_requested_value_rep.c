#ifndef am_requested_value_rep_TEST
#define am_requested_value_rep_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define am_requested_value_rep_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/am_requested_value_rep.h"
am_requested_value_rep_t* instantiate_am_requested_value_rep(int include_optional);

#include "test_user_location.c"


am_requested_value_rep_t* instantiate_am_requested_value_rep(int include_optional) {
  am_requested_value_rep_t* am_requested_value_rep = NULL;
  if (include_optional) {
    am_requested_value_rep = am_requested_value_rep_create(
       // false, not to have infinite recursion
      instantiate_user_location(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    am_requested_value_rep = am_requested_value_rep_create(
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return am_requested_value_rep;
}


#ifdef am_requested_value_rep_MAIN

void test_am_requested_value_rep(int include_optional) {
    am_requested_value_rep_t* am_requested_value_rep_1 = instantiate_am_requested_value_rep(include_optional);

	cJSON* jsonam_requested_value_rep_1 = am_requested_value_rep_convertToJSON(am_requested_value_rep_1);
	printf("am_requested_value_rep :\n%s\n", cJSON_Print(jsonam_requested_value_rep_1));
	am_requested_value_rep_t* am_requested_value_rep_2 = am_requested_value_rep_parseFromJSON(jsonam_requested_value_rep_1);
	cJSON* jsonam_requested_value_rep_2 = am_requested_value_rep_convertToJSON(am_requested_value_rep_2);
	printf("repeating am_requested_value_rep:\n%s\n", cJSON_Print(jsonam_requested_value_rep_2));
}

int main() {
  test_am_requested_value_rep(1);
  test_am_requested_value_rep(0);

  printf("Hello world \n");
  return 0;
}

#endif // am_requested_value_rep_MAIN
#endif // am_requested_value_rep_TEST
