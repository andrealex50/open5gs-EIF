#ifndef plmn_id_1_TEST
#define plmn_id_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_id_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_id_1.h"
plmn_id_1_t* instantiate_plmn_id_1(int include_optional);



plmn_id_1_t* instantiate_plmn_id_1(int include_optional) {
  plmn_id_1_t* plmn_id_1 = NULL;
  if (include_optional) {
    plmn_id_1 = plmn_id_1_create(
      "a",
      "a"
    );
  } else {
    plmn_id_1 = plmn_id_1_create(
      "a",
      "a"
    );
  }

  return plmn_id_1;
}


#ifdef plmn_id_1_MAIN

void test_plmn_id_1(int include_optional) {
    plmn_id_1_t* plmn_id_1_1 = instantiate_plmn_id_1(include_optional);

	cJSON* jsonplmn_id_1_1 = plmn_id_1_convertToJSON(plmn_id_1_1);
	printf("plmn_id_1 :\n%s\n", cJSON_Print(jsonplmn_id_1_1));
	plmn_id_1_t* plmn_id_1_2 = plmn_id_1_parseFromJSON(jsonplmn_id_1_1);
	cJSON* jsonplmn_id_1_2 = plmn_id_1_convertToJSON(plmn_id_1_2);
	printf("repeating plmn_id_1:\n%s\n", cJSON_Print(jsonplmn_id_1_2));
}

int main() {
  test_plmn_id_1(1);
  test_plmn_id_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_id_1_MAIN
#endif // plmn_id_1_TEST
