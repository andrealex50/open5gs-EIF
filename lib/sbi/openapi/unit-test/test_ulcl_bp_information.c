#ifndef ulcl_bp_information_TEST
#define ulcl_bp_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ulcl_bp_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ulcl_bp_information.h"
ulcl_bp_information_t* instantiate_ulcl_bp_information(int include_optional);



ulcl_bp_information_t* instantiate_ulcl_bp_information(int include_optional) {
  ulcl_bp_information_t* ulcl_bp_information = NULL;
  if (include_optional) {
    ulcl_bp_information = ulcl_bp_information_create(
      "0"
    );
  } else {
    ulcl_bp_information = ulcl_bp_information_create(
      "0"
    );
  }

  return ulcl_bp_information;
}


#ifdef ulcl_bp_information_MAIN

void test_ulcl_bp_information(int include_optional) {
    ulcl_bp_information_t* ulcl_bp_information_1 = instantiate_ulcl_bp_information(include_optional);

	cJSON* jsonulcl_bp_information_1 = ulcl_bp_information_convertToJSON(ulcl_bp_information_1);
	printf("ulcl_bp_information :\n%s\n", cJSON_Print(jsonulcl_bp_information_1));
	ulcl_bp_information_t* ulcl_bp_information_2 = ulcl_bp_information_parseFromJSON(jsonulcl_bp_information_1);
	cJSON* jsonulcl_bp_information_2 = ulcl_bp_information_convertToJSON(ulcl_bp_information_2);
	printf("repeating ulcl_bp_information:\n%s\n", cJSON_Print(jsonulcl_bp_information_2));
}

int main() {
  test_ulcl_bp_information(1);
  test_ulcl_bp_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // ulcl_bp_information_MAIN
#endif // ulcl_bp_information_TEST
