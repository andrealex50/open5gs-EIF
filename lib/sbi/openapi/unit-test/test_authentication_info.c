#ifndef authentication_info_TEST
#define authentication_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_info.h"
authentication_info_t* instantiate_authentication_info(int include_optional);

#include "test_resynchronization_info.c"
#include "test_trace_data.c"


authentication_info_t* instantiate_authentication_info(int include_optional) {
  authentication_info_t* authentication_info = NULL;
  if (include_optional) {
    authentication_info = authentication_info_create(
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_resynchronization_info(0),
      "a",
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      "0",
      "a",
      list_createList(),
      1,
      "a",
      1,
      1,
      1
    );
  } else {
    authentication_info = authentication_info_create(
      "a",
      "a",
      NULL,
      "a",
      NULL,
      "0",
      "a",
      list_createList(),
      1,
      "a",
      1,
      1,
      1
    );
  }

  return authentication_info;
}


#ifdef authentication_info_MAIN

void test_authentication_info(int include_optional) {
    authentication_info_t* authentication_info_1 = instantiate_authentication_info(include_optional);

	cJSON* jsonauthentication_info_1 = authentication_info_convertToJSON(authentication_info_1);
	printf("authentication_info :\n%s\n", cJSON_Print(jsonauthentication_info_1));
	authentication_info_t* authentication_info_2 = authentication_info_parseFromJSON(jsonauthentication_info_1);
	cJSON* jsonauthentication_info_2 = authentication_info_convertToJSON(authentication_info_2);
	printf("repeating authentication_info:\n%s\n", cJSON_Print(jsonauthentication_info_2));
}

int main() {
  test_authentication_info(1);
  test_authentication_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_info_MAIN
#endif // authentication_info_TEST
