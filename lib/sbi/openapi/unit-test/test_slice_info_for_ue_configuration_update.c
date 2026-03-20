#ifndef slice_info_for_ue_configuration_update_TEST
#define slice_info_for_ue_configuration_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_info_for_ue_configuration_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_info_for_ue_configuration_update.h"
slice_info_for_ue_configuration_update_t* instantiate_slice_info_for_ue_configuration_update(int include_optional);

#include "test_allowed_nssai.c"
#include "test_allowed_nssai.c"


slice_info_for_ue_configuration_update_t* instantiate_slice_info_for_ue_configuration_update(int include_optional) {
  slice_info_for_ue_configuration_update_t* slice_info_for_ue_configuration_update = NULL;
  if (include_optional) {
    slice_info_for_ue_configuration_update = slice_info_for_ue_configuration_update_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_allowed_nssai(0),
       // false, not to have infinite recursion
      instantiate_allowed_nssai(0),
      1,
      list_createList(),
      list_createList(),
      1,
      1,
      list_createList(),
      1
    );
  } else {
    slice_info_for_ue_configuration_update = slice_info_for_ue_configuration_update_create(
      list_createList(),
      NULL,
      NULL,
      1,
      list_createList(),
      list_createList(),
      1,
      1,
      list_createList(),
      1
    );
  }

  return slice_info_for_ue_configuration_update;
}


#ifdef slice_info_for_ue_configuration_update_MAIN

void test_slice_info_for_ue_configuration_update(int include_optional) {
    slice_info_for_ue_configuration_update_t* slice_info_for_ue_configuration_update_1 = instantiate_slice_info_for_ue_configuration_update(include_optional);

	cJSON* jsonslice_info_for_ue_configuration_update_1 = slice_info_for_ue_configuration_update_convertToJSON(slice_info_for_ue_configuration_update_1);
	printf("slice_info_for_ue_configuration_update :\n%s\n", cJSON_Print(jsonslice_info_for_ue_configuration_update_1));
	slice_info_for_ue_configuration_update_t* slice_info_for_ue_configuration_update_2 = slice_info_for_ue_configuration_update_parseFromJSON(jsonslice_info_for_ue_configuration_update_1);
	cJSON* jsonslice_info_for_ue_configuration_update_2 = slice_info_for_ue_configuration_update_convertToJSON(slice_info_for_ue_configuration_update_2);
	printf("repeating slice_info_for_ue_configuration_update:\n%s\n", cJSON_Print(jsonslice_info_for_ue_configuration_update_2));
}

int main() {
  test_slice_info_for_ue_configuration_update(1);
  test_slice_info_for_ue_configuration_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_info_for_ue_configuration_update_MAIN
#endif // slice_info_for_ue_configuration_update_TEST
