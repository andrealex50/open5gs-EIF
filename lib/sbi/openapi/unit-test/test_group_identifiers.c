#ifndef group_identifiers_TEST
#define group_identifiers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define group_identifiers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/group_identifiers.h"
group_identifiers_t* instantiate_group_identifiers(int include_optional);



group_identifiers_t* instantiate_group_identifiers(int include_optional) {
  group_identifiers_t* group_identifiers = NULL;
  if (include_optional) {
    group_identifiers = group_identifiers_create(
      "a",
      "a",
      list_createList(),
      list_createList()
    );
  } else {
    group_identifiers = group_identifiers_create(
      "a",
      "a",
      list_createList(),
      list_createList()
    );
  }

  return group_identifiers;
}


#ifdef group_identifiers_MAIN

void test_group_identifiers(int include_optional) {
    group_identifiers_t* group_identifiers_1 = instantiate_group_identifiers(include_optional);

	cJSON* jsongroup_identifiers_1 = group_identifiers_convertToJSON(group_identifiers_1);
	printf("group_identifiers :\n%s\n", cJSON_Print(jsongroup_identifiers_1));
	group_identifiers_t* group_identifiers_2 = group_identifiers_parseFromJSON(jsongroup_identifiers_1);
	cJSON* jsongroup_identifiers_2 = group_identifiers_convertToJSON(group_identifiers_2);
	printf("repeating group_identifiers:\n%s\n", cJSON_Print(jsongroup_identifiers_2));
}

int main() {
  test_group_identifiers(1);
  test_group_identifiers(0);

  printf("Hello world \n");
  return 0;
}

#endif // group_identifiers_MAIN
#endif // group_identifiers_TEST
