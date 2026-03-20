#ifndef slice_info_for_registration_TEST
#define slice_info_for_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_info_for_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_info_for_registration.h"
slice_info_for_registration_t* instantiate_slice_info_for_registration(int include_optional);

#include "test_allowed_nssai.c"
#include "test_allowed_nssai.c"


slice_info_for_registration_t* instantiate_slice_info_for_registration(int include_optional) {
  slice_info_for_registration_t* slice_info_for_registration = NULL;
  if (include_optional) {
    slice_info_for_registration = slice_info_for_registration_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_allowed_nssai(0),
       // false, not to have infinite recursion
      instantiate_allowed_nssai(0),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      1,
      1,
      1,
      1
    );
  } else {
    slice_info_for_registration = slice_info_for_registration_create(
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      1,
      1,
      1,
      1
    );
  }

  return slice_info_for_registration;
}


#ifdef slice_info_for_registration_MAIN

void test_slice_info_for_registration(int include_optional) {
    slice_info_for_registration_t* slice_info_for_registration_1 = instantiate_slice_info_for_registration(include_optional);

	cJSON* jsonslice_info_for_registration_1 = slice_info_for_registration_convertToJSON(slice_info_for_registration_1);
	printf("slice_info_for_registration :\n%s\n", cJSON_Print(jsonslice_info_for_registration_1));
	slice_info_for_registration_t* slice_info_for_registration_2 = slice_info_for_registration_parseFromJSON(jsonslice_info_for_registration_1);
	cJSON* jsonslice_info_for_registration_2 = slice_info_for_registration_convertToJSON(slice_info_for_registration_2);
	printf("repeating slice_info_for_registration:\n%s\n", cJSON_Print(jsonslice_info_for_registration_2));
}

int main() {
  test_slice_info_for_registration(1);
  test_slice_info_for_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_info_for_registration_MAIN
#endif // slice_info_for_registration_TEST
