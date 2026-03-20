#ifndef usage_mon_data_scope_TEST
#define usage_mon_data_scope_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define usage_mon_data_scope_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/usage_mon_data_scope.h"
usage_mon_data_scope_t* instantiate_usage_mon_data_scope(int include_optional);

#include "test_snssai.c"


usage_mon_data_scope_t* instantiate_usage_mon_data_scope(int include_optional) {
  usage_mon_data_scope_t* usage_mon_data_scope = NULL;
  if (include_optional) {
    usage_mon_data_scope = usage_mon_data_scope_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList()
    );
  } else {
    usage_mon_data_scope = usage_mon_data_scope_create(
      NULL,
      list_createList()
    );
  }

  return usage_mon_data_scope;
}


#ifdef usage_mon_data_scope_MAIN

void test_usage_mon_data_scope(int include_optional) {
    usage_mon_data_scope_t* usage_mon_data_scope_1 = instantiate_usage_mon_data_scope(include_optional);

	cJSON* jsonusage_mon_data_scope_1 = usage_mon_data_scope_convertToJSON(usage_mon_data_scope_1);
	printf("usage_mon_data_scope :\n%s\n", cJSON_Print(jsonusage_mon_data_scope_1));
	usage_mon_data_scope_t* usage_mon_data_scope_2 = usage_mon_data_scope_parseFromJSON(jsonusage_mon_data_scope_1);
	cJSON* jsonusage_mon_data_scope_2 = usage_mon_data_scope_convertToJSON(usage_mon_data_scope_2);
	printf("repeating usage_mon_data_scope:\n%s\n", cJSON_Print(jsonusage_mon_data_scope_2));
}

int main() {
  test_usage_mon_data_scope(1);
  test_usage_mon_data_scope(0);

  printf("Hello world \n");
  return 0;
}

#endif // usage_mon_data_scope_MAIN
#endif // usage_mon_data_scope_TEST
