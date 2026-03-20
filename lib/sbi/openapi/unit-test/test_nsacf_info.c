#ifndef nsacf_info_TEST
#define nsacf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nsacf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nsacf_info.h"
nsacf_info_t* instantiate_nsacf_info(int include_optional);

#include "test_nsacf_capability.c"


nsacf_info_t* instantiate_nsacf_info(int include_optional) {
  nsacf_info_t* nsacf_info = NULL;
  if (include_optional) {
    nsacf_info = nsacf_info_create(
       // false, not to have infinite recursion
      instantiate_nsacf_capability(0),
      list_createList(),
      list_createList()
    );
  } else {
    nsacf_info = nsacf_info_create(
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return nsacf_info;
}


#ifdef nsacf_info_MAIN

void test_nsacf_info(int include_optional) {
    nsacf_info_t* nsacf_info_1 = instantiate_nsacf_info(include_optional);

	cJSON* jsonnsacf_info_1 = nsacf_info_convertToJSON(nsacf_info_1);
	printf("nsacf_info :\n%s\n", cJSON_Print(jsonnsacf_info_1));
	nsacf_info_t* nsacf_info_2 = nsacf_info_parseFromJSON(jsonnsacf_info_1);
	cJSON* jsonnsacf_info_2 = nsacf_info_convertToJSON(nsacf_info_2);
	printf("repeating nsacf_info:\n%s\n", cJSON_Print(jsonnsacf_info_2));
}

int main() {
  test_nsacf_info(1);
  test_nsacf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nsacf_info_MAIN
#endif // nsacf_info_TEST
