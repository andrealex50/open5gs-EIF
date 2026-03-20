#ifndef unavailable_access_indication_TEST
#define unavailable_access_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unavailable_access_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unavailable_access_indication.h"
unavailable_access_indication_t* instantiate_unavailable_access_indication(int include_optional);



unavailable_access_indication_t* instantiate_unavailable_access_indication(int include_optional) {
  unavailable_access_indication_t* unavailable_access_indication = NULL;
  if (include_optional) {
    unavailable_access_indication = unavailable_access_indication_create(
    );
  } else {
    unavailable_access_indication = unavailable_access_indication_create(
    );
  }

  return unavailable_access_indication;
}


#ifdef unavailable_access_indication_MAIN

void test_unavailable_access_indication(int include_optional) {
    unavailable_access_indication_t* unavailable_access_indication_1 = instantiate_unavailable_access_indication(include_optional);

	cJSON* jsonunavailable_access_indication_1 = unavailable_access_indication_convertToJSON(unavailable_access_indication_1);
	printf("unavailable_access_indication :\n%s\n", cJSON_Print(jsonunavailable_access_indication_1));
	unavailable_access_indication_t* unavailable_access_indication_2 = unavailable_access_indication_parseFromJSON(jsonunavailable_access_indication_1);
	cJSON* jsonunavailable_access_indication_2 = unavailable_access_indication_convertToJSON(unavailable_access_indication_2);
	printf("repeating unavailable_access_indication:\n%s\n", cJSON_Print(jsonunavailable_access_indication_2));
}

int main() {
  test_unavailable_access_indication(1);
  test_unavailable_access_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // unavailable_access_indication_MAIN
#endif // unavailable_access_indication_TEST
