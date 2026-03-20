#ifndef required_access_info_TEST
#define required_access_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define required_access_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/required_access_info.h"
required_access_info_t* instantiate_required_access_info(int include_optional);



required_access_info_t* instantiate_required_access_info(int include_optional) {
  required_access_info_t* required_access_info = NULL;
  if (include_optional) {
    required_access_info = required_access_info_create(
    );
  } else {
    required_access_info = required_access_info_create(
    );
  }

  return required_access_info;
}


#ifdef required_access_info_MAIN

void test_required_access_info(int include_optional) {
    required_access_info_t* required_access_info_1 = instantiate_required_access_info(include_optional);

	cJSON* jsonrequired_access_info_1 = required_access_info_convertToJSON(required_access_info_1);
	printf("required_access_info :\n%s\n", cJSON_Print(jsonrequired_access_info_1));
	required_access_info_t* required_access_info_2 = required_access_info_parseFromJSON(jsonrequired_access_info_1);
	cJSON* jsonrequired_access_info_2 = required_access_info_convertToJSON(required_access_info_2);
	printf("repeating required_access_info:\n%s\n", cJSON_Print(jsonrequired_access_info_2));
}

int main() {
  test_required_access_info(1);
  test_required_access_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // required_access_info_MAIN
#endif // required_access_info_TEST
