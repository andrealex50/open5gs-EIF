#ifndef access_and_mobility_data_TEST
#define access_and_mobility_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_and_mobility_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_and_mobility_data.h"
access_and_mobility_data_t* instantiate_access_and_mobility_data(int include_optional);

#include "test_user_location.c"
#include "test_ue_reachability.c"
#include "test_plmn_id_1.c"


access_and_mobility_data_t* instantiate_access_and_mobility_data(int include_optional) {
  access_and_mobility_data_t* access_and_mobility_data = NULL;
  if (include_optional) {
    access_and_mobility_data = access_and_mobility_data_create(
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "2013-10-20T19:20:30+01:00",
      "-08:00+1",
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_access_and_mobility_data__3GPP_ACCESS,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      null,
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_access_and_mobility_data__3GPP,
      "2013-10-20T19:20:30+01:00",
      1,
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  } else {
    access_and_mobility_data = access_and_mobility_data_create(
      NULL,
      "2013-10-20T19:20:30+01:00",
      "-08:00+1",
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_access_and_mobility_data__3GPP_ACCESS,
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      null,
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_access_and_mobility_data__3GPP,
      "2013-10-20T19:20:30+01:00",
      1,
      "2013-10-20T19:20:30+01:00",
      NULL,
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList()
    );
  }

  return access_and_mobility_data;
}


#ifdef access_and_mobility_data_MAIN

void test_access_and_mobility_data(int include_optional) {
    access_and_mobility_data_t* access_and_mobility_data_1 = instantiate_access_and_mobility_data(include_optional);

	cJSON* jsonaccess_and_mobility_data_1 = access_and_mobility_data_convertToJSON(access_and_mobility_data_1);
	printf("access_and_mobility_data :\n%s\n", cJSON_Print(jsonaccess_and_mobility_data_1));
	access_and_mobility_data_t* access_and_mobility_data_2 = access_and_mobility_data_parseFromJSON(jsonaccess_and_mobility_data_1);
	cJSON* jsonaccess_and_mobility_data_2 = access_and_mobility_data_convertToJSON(access_and_mobility_data_2);
	printf("repeating access_and_mobility_data:\n%s\n", cJSON_Print(jsonaccess_and_mobility_data_2));
}

int main() {
  test_access_and_mobility_data(1);
  test_access_and_mobility_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_and_mobility_data_MAIN
#endif // access_and_mobility_data_TEST
