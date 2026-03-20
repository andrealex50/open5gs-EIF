#ifndef roaming_indication_TEST
#define roaming_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_indication.h"
roaming_indication_t* instantiate_roaming_indication(int include_optional);



roaming_indication_t* instantiate_roaming_indication(int include_optional) {
  roaming_indication_t* roaming_indication = NULL;
  if (include_optional) {
    roaming_indication = roaming_indication_create(
    );
  } else {
    roaming_indication = roaming_indication_create(
    );
  }

  return roaming_indication;
}


#ifdef roaming_indication_MAIN

void test_roaming_indication(int include_optional) {
    roaming_indication_t* roaming_indication_1 = instantiate_roaming_indication(include_optional);

	cJSON* jsonroaming_indication_1 = roaming_indication_convertToJSON(roaming_indication_1);
	printf("roaming_indication :\n%s\n", cJSON_Print(jsonroaming_indication_1));
	roaming_indication_t* roaming_indication_2 = roaming_indication_parseFromJSON(jsonroaming_indication_1);
	cJSON* jsonroaming_indication_2 = roaming_indication_convertToJSON(roaming_indication_2);
	printf("repeating roaming_indication:\n%s\n", cJSON_Print(jsonroaming_indication_2));
}

int main() {
  test_roaming_indication(1);
  test_roaming_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_indication_MAIN
#endif // roaming_indication_TEST
