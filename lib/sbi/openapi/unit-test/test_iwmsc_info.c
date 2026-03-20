#ifndef iwmsc_info_TEST
#define iwmsc_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iwmsc_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iwmsc_info.h"
iwmsc_info_t* instantiate_iwmsc_info(int include_optional);



iwmsc_info_t* instantiate_iwmsc_info(int include_optional) {
  iwmsc_info_t* iwmsc_info = NULL;
  if (include_optional) {
    iwmsc_info = iwmsc_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    iwmsc_info = iwmsc_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return iwmsc_info;
}


#ifdef iwmsc_info_MAIN

void test_iwmsc_info(int include_optional) {
    iwmsc_info_t* iwmsc_info_1 = instantiate_iwmsc_info(include_optional);

	cJSON* jsoniwmsc_info_1 = iwmsc_info_convertToJSON(iwmsc_info_1);
	printf("iwmsc_info :\n%s\n", cJSON_Print(jsoniwmsc_info_1));
	iwmsc_info_t* iwmsc_info_2 = iwmsc_info_parseFromJSON(jsoniwmsc_info_1);
	cJSON* jsoniwmsc_info_2 = iwmsc_info_convertToJSON(iwmsc_info_2);
	printf("repeating iwmsc_info:\n%s\n", cJSON_Print(jsoniwmsc_info_2));
}

int main() {
  test_iwmsc_info(1);
  test_iwmsc_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // iwmsc_info_MAIN
#endif // iwmsc_info_TEST
