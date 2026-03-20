#ifndef deregistration_info_TEST
#define deregistration_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deregistration_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deregistration_info.h"
deregistration_info_t* instantiate_deregistration_info(int include_optional);



deregistration_info_t* instantiate_deregistration_info(int include_optional) {
  deregistration_info_t* deregistration_info = NULL;
  if (include_optional) {
    deregistration_info = deregistration_info_create(
      "a",
      "a"
    );
  } else {
    deregistration_info = deregistration_info_create(
      "a",
      "a"
    );
  }

  return deregistration_info;
}


#ifdef deregistration_info_MAIN

void test_deregistration_info(int include_optional) {
    deregistration_info_t* deregistration_info_1 = instantiate_deregistration_info(include_optional);

	cJSON* jsonderegistration_info_1 = deregistration_info_convertToJSON(deregistration_info_1);
	printf("deregistration_info :\n%s\n", cJSON_Print(jsonderegistration_info_1));
	deregistration_info_t* deregistration_info_2 = deregistration_info_parseFromJSON(jsonderegistration_info_1);
	cJSON* jsonderegistration_info_2 = deregistration_info_convertToJSON(deregistration_info_2);
	printf("repeating deregistration_info:\n%s\n", cJSON_Print(jsonderegistration_info_2));
}

int main() {
  test_deregistration_info(1);
  test_deregistration_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // deregistration_info_MAIN
#endif // deregistration_info_TEST
