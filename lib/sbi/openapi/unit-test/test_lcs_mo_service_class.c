#ifndef lcs_mo_service_class_TEST
#define lcs_mo_service_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_mo_service_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_mo_service_class.h"
lcs_mo_service_class_t* instantiate_lcs_mo_service_class(int include_optional);



lcs_mo_service_class_t* instantiate_lcs_mo_service_class(int include_optional) {
  lcs_mo_service_class_t* lcs_mo_service_class = NULL;
  if (include_optional) {
    lcs_mo_service_class = lcs_mo_service_class_create(
    );
  } else {
    lcs_mo_service_class = lcs_mo_service_class_create(
    );
  }

  return lcs_mo_service_class;
}


#ifdef lcs_mo_service_class_MAIN

void test_lcs_mo_service_class(int include_optional) {
    lcs_mo_service_class_t* lcs_mo_service_class_1 = instantiate_lcs_mo_service_class(include_optional);

	cJSON* jsonlcs_mo_service_class_1 = lcs_mo_service_class_convertToJSON(lcs_mo_service_class_1);
	printf("lcs_mo_service_class :\n%s\n", cJSON_Print(jsonlcs_mo_service_class_1));
	lcs_mo_service_class_t* lcs_mo_service_class_2 = lcs_mo_service_class_parseFromJSON(jsonlcs_mo_service_class_1);
	cJSON* jsonlcs_mo_service_class_2 = lcs_mo_service_class_convertToJSON(lcs_mo_service_class_2);
	printf("repeating lcs_mo_service_class:\n%s\n", cJSON_Print(jsonlcs_mo_service_class_2));
}

int main() {
  test_lcs_mo_service_class(1);
  test_lcs_mo_service_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_mo_service_class_MAIN
#endif // lcs_mo_service_class_TEST
