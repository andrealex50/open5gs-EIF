#ifndef emergency_info_TEST
#define emergency_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define emergency_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/emergency_info.h"
emergency_info_t* instantiate_emergency_info(int include_optional);

#include "test_ip_address.c"
#include "test_plmn_id.c"


emergency_info_t* instantiate_emergency_info(int include_optional) {
  emergency_info_t* emergency_info = NULL;
  if (include_optional) {
    emergency_info = emergency_info_create(
      "a",
       // false, not to have infinite recursion
      instantiate_ip_address(0),
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_plmn_id(0)
    );
  } else {
    emergency_info = emergency_info_create(
      "a",
      NULL,
      "0",
      1,
      NULL
    );
  }

  return emergency_info;
}


#ifdef emergency_info_MAIN

void test_emergency_info(int include_optional) {
    emergency_info_t* emergency_info_1 = instantiate_emergency_info(include_optional);

	cJSON* jsonemergency_info_1 = emergency_info_convertToJSON(emergency_info_1);
	printf("emergency_info :\n%s\n", cJSON_Print(jsonemergency_info_1));
	emergency_info_t* emergency_info_2 = emergency_info_parseFromJSON(jsonemergency_info_1);
	cJSON* jsonemergency_info_2 = emergency_info_convertToJSON(emergency_info_2);
	printf("repeating emergency_info:\n%s\n", cJSON_Print(jsonemergency_info_2));
}

int main() {
  test_emergency_info(1);
  test_emergency_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // emergency_info_MAIN
#endif // emergency_info_TEST
