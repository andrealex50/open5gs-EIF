#ifndef registration_location_info_TEST
#define registration_location_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_location_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_location_info.h"
registration_location_info_t* instantiate_registration_location_info(int include_optional);

#include "test_guami.c"
#include "test_plmn_id.c"
#include "test_vgmlc_address.c"


registration_location_info_t* instantiate_registration_location_info(int include_optional) {
  registration_location_info_t* registration_location_info = NULL;
  if (include_optional) {
    registration_location_info = registration_location_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_vgmlc_address(0),
      list_createList()
    );
  } else {
    registration_location_info = registration_location_info_create(
      "0",
      NULL,
      NULL,
      NULL,
      list_createList()
    );
  }

  return registration_location_info;
}


#ifdef registration_location_info_MAIN

void test_registration_location_info(int include_optional) {
    registration_location_info_t* registration_location_info_1 = instantiate_registration_location_info(include_optional);

	cJSON* jsonregistration_location_info_1 = registration_location_info_convertToJSON(registration_location_info_1);
	printf("registration_location_info :\n%s\n", cJSON_Print(jsonregistration_location_info_1));
	registration_location_info_t* registration_location_info_2 = registration_location_info_parseFromJSON(jsonregistration_location_info_1);
	cJSON* jsonregistration_location_info_2 = registration_location_info_convertToJSON(registration_location_info_2);
	printf("repeating registration_location_info:\n%s\n", cJSON_Print(jsonregistration_location_info_2));
}

int main() {
  test_registration_location_info(1);
  test_registration_location_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_location_info_MAIN
#endif // registration_location_info_TEST
