#ifndef immediate_mdt_conf_TEST
#define immediate_mdt_conf_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define immediate_mdt_conf_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/immediate_mdt_conf.h"
immediate_mdt_conf_t* instantiate_immediate_mdt_conf(int include_optional);

#include "test_area_scope.c"


immediate_mdt_conf_t* instantiate_immediate_mdt_conf(int include_optional) {
  immediate_mdt_conf_t* immediate_mdt_conf = NULL;
  if (include_optional) {
    immediate_mdt_conf = immediate_mdt_conf_create(
      namf_communication_immediate_mdt_conf__IMMEDIATE_MDT_ONLY,
      list_createList(),
      list_createList(),
      list_createList(),
      namf_communication_immediate_mdt_conf__120,
      namf_communication_immediate_mdt_conf__120,
      namf_communication_immediate_mdt_conf__1,
      0,
      0,
      0,
      0,
      namf_communication_immediate_mdt_conf__1024,
      namf_communication_immediate_mdt_conf__1024,
      namf_communication_immediate_mdt_conf__1024,
       // false, not to have infinite recursion
      instantiate_area_scope(0),
      namf_communication_immediate_mdt_conf__GNSS,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    immediate_mdt_conf = immediate_mdt_conf_create(
      namf_communication_immediate_mdt_conf__IMMEDIATE_MDT_ONLY,
      list_createList(),
      list_createList(),
      list_createList(),
      namf_communication_immediate_mdt_conf__120,
      namf_communication_immediate_mdt_conf__120,
      namf_communication_immediate_mdt_conf__1,
      0,
      0,
      0,
      0,
      namf_communication_immediate_mdt_conf__1024,
      namf_communication_immediate_mdt_conf__1024,
      namf_communication_immediate_mdt_conf__1024,
      NULL,
      namf_communication_immediate_mdt_conf__GNSS,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return immediate_mdt_conf;
}


#ifdef immediate_mdt_conf_MAIN

void test_immediate_mdt_conf(int include_optional) {
    immediate_mdt_conf_t* immediate_mdt_conf_1 = instantiate_immediate_mdt_conf(include_optional);

	cJSON* jsonimmediate_mdt_conf_1 = immediate_mdt_conf_convertToJSON(immediate_mdt_conf_1);
	printf("immediate_mdt_conf :\n%s\n", cJSON_Print(jsonimmediate_mdt_conf_1));
	immediate_mdt_conf_t* immediate_mdt_conf_2 = immediate_mdt_conf_parseFromJSON(jsonimmediate_mdt_conf_1);
	cJSON* jsonimmediate_mdt_conf_2 = immediate_mdt_conf_convertToJSON(immediate_mdt_conf_2);
	printf("repeating immediate_mdt_conf:\n%s\n", cJSON_Print(jsonimmediate_mdt_conf_2));
}

int main() {
  test_immediate_mdt_conf(1);
  test_immediate_mdt_conf(0);

  printf("Hello world \n");
  return 0;
}

#endif // immediate_mdt_conf_MAIN
#endif // immediate_mdt_conf_TEST
