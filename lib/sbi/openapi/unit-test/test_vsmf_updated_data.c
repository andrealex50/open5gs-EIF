#ifndef vsmf_updated_data_TEST
#define vsmf_updated_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vsmf_updated_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vsmf_updated_data.h"
vsmf_updated_data_t* instantiate_vsmf_updated_data(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"


vsmf_updated_data_t* instantiate_vsmf_updated_data(int include_optional) {
  vsmf_updated_data_t* vsmf_updated_data = NULL;
  if (include_optional) {
    vsmf_updated_data = vsmf_updated_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0)
    );
  } else {
    vsmf_updated_data = vsmf_updated_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return vsmf_updated_data;
}


#ifdef vsmf_updated_data_MAIN

void test_vsmf_updated_data(int include_optional) {
    vsmf_updated_data_t* vsmf_updated_data_1 = instantiate_vsmf_updated_data(include_optional);

	cJSON* jsonvsmf_updated_data_1 = vsmf_updated_data_convertToJSON(vsmf_updated_data_1);
	printf("vsmf_updated_data :\n%s\n", cJSON_Print(jsonvsmf_updated_data_1));
	vsmf_updated_data_t* vsmf_updated_data_2 = vsmf_updated_data_parseFromJSON(jsonvsmf_updated_data_1);
	cJSON* jsonvsmf_updated_data_2 = vsmf_updated_data_convertToJSON(vsmf_updated_data_2);
	printf("repeating vsmf_updated_data:\n%s\n", cJSON_Print(jsonvsmf_updated_data_2));
}

int main() {
  test_vsmf_updated_data(1);
  test_vsmf_updated_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vsmf_updated_data_MAIN
#endif // vsmf_updated_data_TEST
