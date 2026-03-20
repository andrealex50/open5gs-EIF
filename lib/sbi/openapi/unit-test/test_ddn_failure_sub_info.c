#ifndef ddn_failure_sub_info_TEST
#define ddn_failure_sub_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ddn_failure_sub_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ddn_failure_sub_info.h"
ddn_failure_sub_info_t* instantiate_ddn_failure_sub_info(int include_optional);



ddn_failure_sub_info_t* instantiate_ddn_failure_sub_info(int include_optional) {
  ddn_failure_sub_info_t* ddn_failure_sub_info = NULL;
  if (include_optional) {
    ddn_failure_sub_info = ddn_failure_sub_info_create(
      "0",
      list_createList()
    );
  } else {
    ddn_failure_sub_info = ddn_failure_sub_info_create(
      "0",
      list_createList()
    );
  }

  return ddn_failure_sub_info;
}


#ifdef ddn_failure_sub_info_MAIN

void test_ddn_failure_sub_info(int include_optional) {
    ddn_failure_sub_info_t* ddn_failure_sub_info_1 = instantiate_ddn_failure_sub_info(include_optional);

	cJSON* jsonddn_failure_sub_info_1 = ddn_failure_sub_info_convertToJSON(ddn_failure_sub_info_1);
	printf("ddn_failure_sub_info :\n%s\n", cJSON_Print(jsonddn_failure_sub_info_1));
	ddn_failure_sub_info_t* ddn_failure_sub_info_2 = ddn_failure_sub_info_parseFromJSON(jsonddn_failure_sub_info_1);
	cJSON* jsonddn_failure_sub_info_2 = ddn_failure_sub_info_convertToJSON(ddn_failure_sub_info_2);
	printf("repeating ddn_failure_sub_info:\n%s\n", cJSON_Print(jsonddn_failure_sub_info_2));
}

int main() {
  test_ddn_failure_sub_info(1);
  test_ddn_failure_sub_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ddn_failure_sub_info_MAIN
#endif // ddn_failure_sub_info_TEST
