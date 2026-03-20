#ifndef lcs_mo_data_TEST
#define lcs_mo_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_mo_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_mo_data.h"
lcs_mo_data_t* instantiate_lcs_mo_data(int include_optional);

#include "test_lcs_broadcast_assistance_types_data.c"


lcs_mo_data_t* instantiate_lcs_mo_data(int include_optional) {
  lcs_mo_data_t* lcs_mo_data = NULL;
  if (include_optional) {
    lcs_mo_data = lcs_mo_data_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_lcs_broadcast_assistance_types_data(0)
    );
  } else {
    lcs_mo_data = lcs_mo_data_create(
      list_createList(),
      NULL
    );
  }

  return lcs_mo_data;
}


#ifdef lcs_mo_data_MAIN

void test_lcs_mo_data(int include_optional) {
    lcs_mo_data_t* lcs_mo_data_1 = instantiate_lcs_mo_data(include_optional);

	cJSON* jsonlcs_mo_data_1 = lcs_mo_data_convertToJSON(lcs_mo_data_1);
	printf("lcs_mo_data :\n%s\n", cJSON_Print(jsonlcs_mo_data_1));
	lcs_mo_data_t* lcs_mo_data_2 = lcs_mo_data_parseFromJSON(jsonlcs_mo_data_1);
	cJSON* jsonlcs_mo_data_2 = lcs_mo_data_convertToJSON(lcs_mo_data_2);
	printf("repeating lcs_mo_data:\n%s\n", cJSON_Print(jsonlcs_mo_data_2));
}

int main() {
  test_lcs_mo_data(1);
  test_lcs_mo_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_mo_data_MAIN
#endif // lcs_mo_data_TEST
