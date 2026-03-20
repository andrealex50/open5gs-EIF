#ifndef plmn_oauth2_TEST
#define plmn_oauth2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_oauth2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_oauth2.h"
plmn_oauth2_t* instantiate_plmn_oauth2(int include_optional);



plmn_oauth2_t* instantiate_plmn_oauth2(int include_optional) {
  plmn_oauth2_t* plmn_oauth2 = NULL;
  if (include_optional) {
    plmn_oauth2 = plmn_oauth2_create(
      list_createList(),
      list_createList()
    );
  } else {
    plmn_oauth2 = plmn_oauth2_create(
      list_createList(),
      list_createList()
    );
  }

  return plmn_oauth2;
}


#ifdef plmn_oauth2_MAIN

void test_plmn_oauth2(int include_optional) {
    plmn_oauth2_t* plmn_oauth2_1 = instantiate_plmn_oauth2(include_optional);

	cJSON* jsonplmn_oauth2_1 = plmn_oauth2_convertToJSON(plmn_oauth2_1);
	printf("plmn_oauth2 :\n%s\n", cJSON_Print(jsonplmn_oauth2_1));
	plmn_oauth2_t* plmn_oauth2_2 = plmn_oauth2_parseFromJSON(jsonplmn_oauth2_1);
	cJSON* jsonplmn_oauth2_2 = plmn_oauth2_convertToJSON(plmn_oauth2_2);
	printf("repeating plmn_oauth2:\n%s\n", cJSON_Print(jsonplmn_oauth2_2));
}

int main() {
  test_plmn_oauth2(1);
  test_plmn_oauth2(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_oauth2_MAIN
#endif // plmn_oauth2_TEST
