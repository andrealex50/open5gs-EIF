#ifndef acceptable_service_info_TEST
#define acceptable_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acceptable_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acceptable_service_info.h"
acceptable_service_info_t* instantiate_acceptable_service_info(int include_optional);



acceptable_service_info_t* instantiate_acceptable_service_info(int include_optional) {
  acceptable_service_info_t* acceptable_service_info = NULL;
  if (include_optional) {
    acceptable_service_info = acceptable_service_info_create(
      list_createList(),
      "a",
      "a"
    );
  } else {
    acceptable_service_info = acceptable_service_info_create(
      list_createList(),
      "a",
      "a"
    );
  }

  return acceptable_service_info;
}


#ifdef acceptable_service_info_MAIN

void test_acceptable_service_info(int include_optional) {
    acceptable_service_info_t* acceptable_service_info_1 = instantiate_acceptable_service_info(include_optional);

	cJSON* jsonacceptable_service_info_1 = acceptable_service_info_convertToJSON(acceptable_service_info_1);
	printf("acceptable_service_info :\n%s\n", cJSON_Print(jsonacceptable_service_info_1));
	acceptable_service_info_t* acceptable_service_info_2 = acceptable_service_info_parseFromJSON(jsonacceptable_service_info_1);
	cJSON* jsonacceptable_service_info_2 = acceptable_service_info_convertToJSON(acceptable_service_info_2);
	printf("repeating acceptable_service_info:\n%s\n", cJSON_Print(jsonacceptable_service_info_2));
}

int main() {
  test_acceptable_service_info(1);
  test_acceptable_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // acceptable_service_info_MAIN
#endif // acceptable_service_info_TEST
