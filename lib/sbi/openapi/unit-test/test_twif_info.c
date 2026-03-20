#ifndef twif_info_TEST
#define twif_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define twif_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/twif_info.h"
twif_info_t* instantiate_twif_info(int include_optional);



twif_info_t* instantiate_twif_info(int include_optional) {
  twif_info_t* twif_info = NULL;
  if (include_optional) {
    twif_info = twif_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    twif_info = twif_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return twif_info;
}


#ifdef twif_info_MAIN

void test_twif_info(int include_optional) {
    twif_info_t* twif_info_1 = instantiate_twif_info(include_optional);

	cJSON* jsontwif_info_1 = twif_info_convertToJSON(twif_info_1);
	printf("twif_info :\n%s\n", cJSON_Print(jsontwif_info_1));
	twif_info_t* twif_info_2 = twif_info_parseFromJSON(jsontwif_info_1);
	cJSON* jsontwif_info_2 = twif_info_convertToJSON(twif_info_2);
	printf("repeating twif_info:\n%s\n", cJSON_Print(jsontwif_info_2));
}

int main() {
  test_twif_info(1);
  test_twif_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // twif_info_MAIN
#endif // twif_info_TEST
