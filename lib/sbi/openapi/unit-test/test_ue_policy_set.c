#ifndef ue_policy_set_TEST
#define ue_policy_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_policy_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_policy_set.h"
ue_policy_set_t* instantiate_ue_policy_set(int include_optional);



ue_policy_set_t* instantiate_ue_policy_set(int include_optional) {
  ue_policy_set_t* ue_policy_set = NULL;
  if (include_optional) {
    ue_policy_set = ue_policy_set_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      "a",
      list_createList(),
      "a",
      list_createList()
    );
  } else {
    ue_policy_set = ue_policy_set_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      "a",
      list_createList(),
      "a",
      list_createList()
    );
  }

  return ue_policy_set;
}


#ifdef ue_policy_set_MAIN

void test_ue_policy_set(int include_optional) {
    ue_policy_set_t* ue_policy_set_1 = instantiate_ue_policy_set(include_optional);

	cJSON* jsonue_policy_set_1 = ue_policy_set_convertToJSON(ue_policy_set_1);
	printf("ue_policy_set :\n%s\n", cJSON_Print(jsonue_policy_set_1));
	ue_policy_set_t* ue_policy_set_2 = ue_policy_set_parseFromJSON(jsonue_policy_set_1);
	cJSON* jsonue_policy_set_2 = ue_policy_set_convertToJSON(ue_policy_set_2);
	printf("repeating ue_policy_set:\n%s\n", cJSON_Print(jsonue_policy_set_2));
}

int main() {
  test_ue_policy_set(1);
  test_ue_policy_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_policy_set_MAIN
#endif // ue_policy_set_TEST
