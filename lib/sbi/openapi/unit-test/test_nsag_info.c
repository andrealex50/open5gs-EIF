#ifndef nsag_info_TEST
#define nsag_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nsag_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nsag_info.h"
nsag_info_t* instantiate_nsag_info(int include_optional);



nsag_info_t* instantiate_nsag_info(int include_optional) {
  nsag_info_t* nsag_info = NULL;
  if (include_optional) {
    nsag_info = nsag_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    nsag_info = nsag_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return nsag_info;
}


#ifdef nsag_info_MAIN

void test_nsag_info(int include_optional) {
    nsag_info_t* nsag_info_1 = instantiate_nsag_info(include_optional);

	cJSON* jsonnsag_info_1 = nsag_info_convertToJSON(nsag_info_1);
	printf("nsag_info :\n%s\n", cJSON_Print(jsonnsag_info_1));
	nsag_info_t* nsag_info_2 = nsag_info_parseFromJSON(jsonnsag_info_1);
	cJSON* jsonnsag_info_2 = nsag_info_convertToJSON(nsag_info_2);
	printf("repeating nsag_info:\n%s\n", cJSON_Print(jsonnsag_info_2));
}

int main() {
  test_nsag_info(1);
  test_nsag_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nsag_info_MAIN
#endif // nsag_info_TEST
