#ifndef plmn_ec_info_1_TEST
#define plmn_ec_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_ec_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_ec_info_1.h"
plmn_ec_info_1_t* instantiate_plmn_ec_info_1(int include_optional);

#include "test_plmn_id_1.c"
#include "test_ec_restriction_data_wb.c"


plmn_ec_info_1_t* instantiate_plmn_ec_info_1(int include_optional) {
  plmn_ec_info_1_t* plmn_ec_info_1 = NULL;
  if (include_optional) {
    plmn_ec_info_1 = plmn_ec_info_1_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
       // false, not to have infinite recursion
      instantiate_ec_restriction_data_wb(0),
      1
    );
  } else {
    plmn_ec_info_1 = plmn_ec_info_1_create(
      NULL,
      NULL,
      1
    );
  }

  return plmn_ec_info_1;
}


#ifdef plmn_ec_info_1_MAIN

void test_plmn_ec_info_1(int include_optional) {
    plmn_ec_info_1_t* plmn_ec_info_1_1 = instantiate_plmn_ec_info_1(include_optional);

	cJSON* jsonplmn_ec_info_1_1 = plmn_ec_info_1_convertToJSON(plmn_ec_info_1_1);
	printf("plmn_ec_info_1 :\n%s\n", cJSON_Print(jsonplmn_ec_info_1_1));
	plmn_ec_info_1_t* plmn_ec_info_1_2 = plmn_ec_info_1_parseFromJSON(jsonplmn_ec_info_1_1);
	cJSON* jsonplmn_ec_info_1_2 = plmn_ec_info_1_convertToJSON(plmn_ec_info_1_2);
	printf("repeating plmn_ec_info_1:\n%s\n", cJSON_Print(jsonplmn_ec_info_1_2));
}

int main() {
  test_plmn_ec_info_1(1);
  test_plmn_ec_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_ec_info_1_MAIN
#endif // plmn_ec_info_1_TEST
