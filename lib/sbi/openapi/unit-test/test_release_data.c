#ifndef release_data_TEST
#define release_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define release_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/release_data.h"
release_data_t* instantiate_release_data(int include_optional);

#include "test_ng_ap_cause.c"
#include "test_user_location.c"
#include "test_user_location.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"


release_data_t* instantiate_release_data(int include_optional) {
  release_data_t* release_data = NULL;
  if (include_optional) {
    release_data = release_data_create(
      nsmf_pdusession_release_data__REL_DUE_TO_HO,
       // false, not to have infinite recursion
      instantiate_ng_ap_cause(0),
      0,
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_user_location(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0)
    );
  } else {
    release_data = release_data_create(
      nsmf_pdusession_release_data__REL_DUE_TO_HO,
      NULL,
      0,
      NULL,
      "-08:00+1",
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL
    );
  }

  return release_data;
}


#ifdef release_data_MAIN

void test_release_data(int include_optional) {
    release_data_t* release_data_1 = instantiate_release_data(include_optional);

	cJSON* jsonrelease_data_1 = release_data_convertToJSON(release_data_1);
	printf("release_data :\n%s\n", cJSON_Print(jsonrelease_data_1));
	release_data_t* release_data_2 = release_data_parseFromJSON(jsonrelease_data_1);
	cJSON* jsonrelease_data_2 = release_data_convertToJSON(release_data_2);
	printf("repeating release_data:\n%s\n", cJSON_Print(jsonrelease_data_2));
}

int main() {
  test_release_data(1);
  test_release_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // release_data_MAIN
#endif // release_data_TEST
