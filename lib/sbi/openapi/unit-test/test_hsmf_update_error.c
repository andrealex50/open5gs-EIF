#ifndef hsmf_update_error_TEST
#define hsmf_update_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hsmf_update_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hsmf_update_error.h"
hsmf_update_error_t* instantiate_hsmf_update_error(int include_optional);

#include "test_problem_details.c"
#include "test_ref_to_binary_data.c"


hsmf_update_error_t* instantiate_hsmf_update_error(int include_optional) {
  hsmf_update_error_t* hsmf_update_error = NULL;
  if (include_optional) {
    hsmf_update_error = hsmf_update_error_create(
       // false, not to have infinite recursion
      instantiate_problem_details(0),
      0,
      "a",
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      56,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    hsmf_update_error = hsmf_update_error_create(
      NULL,
      0,
      "a",
      NULL,
      56,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return hsmf_update_error;
}


#ifdef hsmf_update_error_MAIN

void test_hsmf_update_error(int include_optional) {
    hsmf_update_error_t* hsmf_update_error_1 = instantiate_hsmf_update_error(include_optional);

	cJSON* jsonhsmf_update_error_1 = hsmf_update_error_convertToJSON(hsmf_update_error_1);
	printf("hsmf_update_error :\n%s\n", cJSON_Print(jsonhsmf_update_error_1));
	hsmf_update_error_t* hsmf_update_error_2 = hsmf_update_error_parseFromJSON(jsonhsmf_update_error_1);
	cJSON* jsonhsmf_update_error_2 = hsmf_update_error_convertToJSON(hsmf_update_error_2);
	printf("repeating hsmf_update_error:\n%s\n", cJSON_Print(jsonhsmf_update_error_2));
}

int main() {
  test_hsmf_update_error(1);
  test_hsmf_update_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // hsmf_update_error_MAIN
#endif // hsmf_update_error_TEST
