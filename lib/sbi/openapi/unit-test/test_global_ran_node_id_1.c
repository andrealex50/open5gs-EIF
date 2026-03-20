#ifndef global_ran_node_id_1_TEST
#define global_ran_node_id_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define global_ran_node_id_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/global_ran_node_id_1.h"
global_ran_node_id_1_t* instantiate_global_ran_node_id_1(int include_optional);

#include "test_plmn_id_1.c"
#include "test_gnb_id.c"


global_ran_node_id_1_t* instantiate_global_ran_node_id_1(int include_optional) {
  global_ran_node_id_1_t* global_ran_node_id_1 = NULL;
  if (include_optional) {
    global_ran_node_id_1 = global_ran_node_id_1_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      "a",
       // false, not to have infinite recursion
      instantiate_gnb_id(0),
      "SMacroNGeNB-34B89",
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    global_ran_node_id_1 = global_ran_node_id_1_create(
      NULL,
      "a",
      NULL,
      "SMacroNGeNB-34B89",
      "a",
      "a",
      "a",
      "a"
    );
  }

  return global_ran_node_id_1;
}


#ifdef global_ran_node_id_1_MAIN

void test_global_ran_node_id_1(int include_optional) {
    global_ran_node_id_1_t* global_ran_node_id_1_1 = instantiate_global_ran_node_id_1(include_optional);

	cJSON* jsonglobal_ran_node_id_1_1 = global_ran_node_id_1_convertToJSON(global_ran_node_id_1_1);
	printf("global_ran_node_id_1 :\n%s\n", cJSON_Print(jsonglobal_ran_node_id_1_1));
	global_ran_node_id_1_t* global_ran_node_id_1_2 = global_ran_node_id_1_parseFromJSON(jsonglobal_ran_node_id_1_1);
	cJSON* jsonglobal_ran_node_id_1_2 = global_ran_node_id_1_convertToJSON(global_ran_node_id_1_2);
	printf("repeating global_ran_node_id_1:\n%s\n", cJSON_Print(jsonglobal_ran_node_id_1_2));
}

int main() {
  test_global_ran_node_id_1(1);
  test_global_ran_node_id_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // global_ran_node_id_1_MAIN
#endif // global_ran_node_id_1_TEST
