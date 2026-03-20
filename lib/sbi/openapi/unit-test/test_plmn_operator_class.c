#ifndef plmn_operator_class_TEST
#define plmn_operator_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define plmn_operator_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/plmn_operator_class.h"
plmn_operator_class_t* instantiate_plmn_operator_class(int include_optional);



plmn_operator_class_t* instantiate_plmn_operator_class(int include_optional) {
  plmn_operator_class_t* plmn_operator_class = NULL;
  if (include_optional) {
    plmn_operator_class = plmn_operator_class_create(
      nudr_datarepository_api_openapi_file_plmn_operator_class__BROADCAST_SERVICE,
      list_createList()
    );
  } else {
    plmn_operator_class = plmn_operator_class_create(
      nudr_datarepository_api_openapi_file_plmn_operator_class__BROADCAST_SERVICE,
      list_createList()
    );
  }

  return plmn_operator_class;
}


#ifdef plmn_operator_class_MAIN

void test_plmn_operator_class(int include_optional) {
    plmn_operator_class_t* plmn_operator_class_1 = instantiate_plmn_operator_class(include_optional);

	cJSON* jsonplmn_operator_class_1 = plmn_operator_class_convertToJSON(plmn_operator_class_1);
	printf("plmn_operator_class :\n%s\n", cJSON_Print(jsonplmn_operator_class_1));
	plmn_operator_class_t* plmn_operator_class_2 = plmn_operator_class_parseFromJSON(jsonplmn_operator_class_1);
	cJSON* jsonplmn_operator_class_2 = plmn_operator_class_convertToJSON(plmn_operator_class_2);
	printf("repeating plmn_operator_class:\n%s\n", cJSON_Print(jsonplmn_operator_class_2));
}

int main() {
  test_plmn_operator_class(1);
  test_plmn_operator_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // plmn_operator_class_MAIN
#endif // plmn_operator_class_TEST
