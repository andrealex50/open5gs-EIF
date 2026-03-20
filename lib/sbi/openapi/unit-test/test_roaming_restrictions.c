#ifndef roaming_restrictions_TEST
#define roaming_restrictions_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_restrictions_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_restrictions.h"
roaming_restrictions_t* instantiate_roaming_restrictions(int include_optional);



roaming_restrictions_t* instantiate_roaming_restrictions(int include_optional) {
  roaming_restrictions_t* roaming_restrictions = NULL;
  if (include_optional) {
    roaming_restrictions = roaming_restrictions_create(
      1
    );
  } else {
    roaming_restrictions = roaming_restrictions_create(
      1
    );
  }

  return roaming_restrictions;
}


#ifdef roaming_restrictions_MAIN

void test_roaming_restrictions(int include_optional) {
    roaming_restrictions_t* roaming_restrictions_1 = instantiate_roaming_restrictions(include_optional);

	cJSON* jsonroaming_restrictions_1 = roaming_restrictions_convertToJSON(roaming_restrictions_1);
	printf("roaming_restrictions :\n%s\n", cJSON_Print(jsonroaming_restrictions_1));
	roaming_restrictions_t* roaming_restrictions_2 = roaming_restrictions_parseFromJSON(jsonroaming_restrictions_1);
	cJSON* jsonroaming_restrictions_2 = roaming_restrictions_convertToJSON(roaming_restrictions_2);
	printf("repeating roaming_restrictions:\n%s\n", cJSON_Print(jsonroaming_restrictions_2));
}

int main() {
  test_roaming_restrictions(1);
  test_roaming_restrictions(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_restrictions_MAIN
#endif // roaming_restrictions_TEST
