#ifndef lcs_privacy_data_TEST
#define lcs_privacy_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_privacy_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_privacy_data.h"
lcs_privacy_data_t* instantiate_lcs_privacy_data(int include_optional);

#include "test_lpi.c"
#include "test_unrelated_class.c"


lcs_privacy_data_t* instantiate_lcs_privacy_data(int include_optional) {
  lcs_privacy_data_t* lcs_privacy_data = NULL;
  if (include_optional) {
    lcs_privacy_data = lcs_privacy_data_create(
       // false, not to have infinite recursion
      instantiate_lpi(0),
       // false, not to have infinite recursion
      instantiate_unrelated_class(0),
      list_createList()
    );
  } else {
    lcs_privacy_data = lcs_privacy_data_create(
      NULL,
      NULL,
      list_createList()
    );
  }

  return lcs_privacy_data;
}


#ifdef lcs_privacy_data_MAIN

void test_lcs_privacy_data(int include_optional) {
    lcs_privacy_data_t* lcs_privacy_data_1 = instantiate_lcs_privacy_data(include_optional);

	cJSON* jsonlcs_privacy_data_1 = lcs_privacy_data_convertToJSON(lcs_privacy_data_1);
	printf("lcs_privacy_data :\n%s\n", cJSON_Print(jsonlcs_privacy_data_1));
	lcs_privacy_data_t* lcs_privacy_data_2 = lcs_privacy_data_parseFromJSON(jsonlcs_privacy_data_1);
	cJSON* jsonlcs_privacy_data_2 = lcs_privacy_data_convertToJSON(lcs_privacy_data_2);
	printf("repeating lcs_privacy_data:\n%s\n", cJSON_Print(jsonlcs_privacy_data_2));
}

int main() {
  test_lcs_privacy_data(1);
  test_lcs_privacy_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_privacy_data_MAIN
#endif // lcs_privacy_data_TEST
