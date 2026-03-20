#ifndef resynchronization_info_TEST
#define resynchronization_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resynchronization_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resynchronization_info.h"
resynchronization_info_t* instantiate_resynchronization_info(int include_optional);



resynchronization_info_t* instantiate_resynchronization_info(int include_optional) {
  resynchronization_info_t* resynchronization_info = NULL;
  if (include_optional) {
    resynchronization_info = resynchronization_info_create(
      "a",
      "a"
    );
  } else {
    resynchronization_info = resynchronization_info_create(
      "a",
      "a"
    );
  }

  return resynchronization_info;
}


#ifdef resynchronization_info_MAIN

void test_resynchronization_info(int include_optional) {
    resynchronization_info_t* resynchronization_info_1 = instantiate_resynchronization_info(include_optional);

	cJSON* jsonresynchronization_info_1 = resynchronization_info_convertToJSON(resynchronization_info_1);
	printf("resynchronization_info :\n%s\n", cJSON_Print(jsonresynchronization_info_1));
	resynchronization_info_t* resynchronization_info_2 = resynchronization_info_parseFromJSON(jsonresynchronization_info_1);
	cJSON* jsonresynchronization_info_2 = resynchronization_info_convertToJSON(resynchronization_info_2);
	printf("repeating resynchronization_info:\n%s\n", cJSON_Print(jsonresynchronization_info_2));
}

int main() {
  test_resynchronization_info(1);
  test_resynchronization_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // resynchronization_info_MAIN
#endif // resynchronization_info_TEST
