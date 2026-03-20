#ifndef vsmf_update_error_TEST
#define vsmf_update_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vsmf_update_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vsmf_update_error.h"
vsmf_update_error_t* instantiate_vsmf_update_error(int include_optional);

#include "test_ext_problem_details.c"
#include "test_ref_to_binary_data.c"
#include "test_ref_to_binary_data.c"
#include "test_ng_ap_cause.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"


vsmf_update_error_t* instantiate_vsmf_update_error(int include_optional) {
  vsmf_update_error_t* vsmf_update_error = NULL;
  if (include_optional) {
    vsmf_update_error = vsmf_update_error_create(
      null,
      0,
      "a",
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
      "2013-10-20T19:20:30+01:00",
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
    vsmf_update_error = vsmf_update_error_create(
      null,
      0,
      "a",
      NULL,
      NULL,
      list_createList(),
      NULL,
      0,
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return vsmf_update_error;
}


#ifdef vsmf_update_error_MAIN

void test_vsmf_update_error(int include_optional) {
    vsmf_update_error_t* vsmf_update_error_1 = instantiate_vsmf_update_error(include_optional);

	cJSON* jsonvsmf_update_error_1 = vsmf_update_error_convertToJSON(vsmf_update_error_1);
	printf("vsmf_update_error :\n%s\n", cJSON_Print(jsonvsmf_update_error_1));
	vsmf_update_error_t* vsmf_update_error_2 = vsmf_update_error_parseFromJSON(jsonvsmf_update_error_1);
	cJSON* jsonvsmf_update_error_2 = vsmf_update_error_convertToJSON(vsmf_update_error_2);
	printf("repeating vsmf_update_error:\n%s\n", cJSON_Print(jsonvsmf_update_error_2));
}

int main() {
  test_vsmf_update_error(1);
  test_vsmf_update_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // vsmf_update_error_MAIN
#endif // vsmf_update_error_TEST
