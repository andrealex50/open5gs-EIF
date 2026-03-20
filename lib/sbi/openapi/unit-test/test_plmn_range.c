#ifndef plmn_range_TEST
#define plmn_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_range.h"
plmn_range_t* instantiate_plmn_range(int include_optional);



plmn_range_t* instantiate_plmn_range(int include_optional) {
  plmn_range_t* plmn_range = NULL;
  if (include_optional) {
    plmn_range = plmn_range_create(
      "a",
      "a",
      "0"
    );
  } else {
    plmn_range = plmn_range_create(
      "a",
      "a",
      "0"
    );
  }

  return plmn_range;
}


#ifdef plmn_range_MAIN

void test_plmn_range(int include_optional) {
    plmn_range_t* plmn_range_1 = instantiate_plmn_range(include_optional);

	cJSON* jsonplmn_range_1 = plmn_range_convertToJSON(plmn_range_1);
	printf("plmn_range :\n%s\n", cJSON_Print(jsonplmn_range_1));
	plmn_range_t* plmn_range_2 = plmn_range_parseFromJSON(jsonplmn_range_1);
	cJSON* jsonplmn_range_2 = plmn_range_convertToJSON(plmn_range_2);
	printf("repeating plmn_range:\n%s\n", cJSON_Print(jsonplmn_range_2));
}

int main() {
  test_plmn_range(1);
  test_plmn_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_range_MAIN
#endif // plmn_range_TEST
