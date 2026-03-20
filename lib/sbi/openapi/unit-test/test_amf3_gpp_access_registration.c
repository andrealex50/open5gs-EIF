#ifndef amf3_gpp_access_registration_TEST
#define amf3_gpp_access_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf3_gpp_access_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf3_gpp_access_registration.h"
amf3_gpp_access_registration_t* instantiate_amf3_gpp_access_registration(int include_optional);

#include "test_guami.c"
#include "test_eps_interworking_info.c"
#include "test_vgmlc_address.c"
#include "test_context_info.c"


amf3_gpp_access_registration_t* instantiate_amf3_gpp_access_registration(int include_optional) {
  amf3_gpp_access_registration_t* amf3_gpp_access_registration = NULL;
  if (include_optional) {
    amf3_gpp_access_registration = amf3_gpp_access_registration_create(
      "0",
      "a",
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__HOMOGENEOUS_SUPPORT,
      "0",
      "0",
      "0",
      "0",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_guami(0),
      list_createList(),
      1,
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__NR,
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_eps_interworking_info(0),
      1,
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_vgmlc_address(0),
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__REACHABLE,
      1,
      1,
      "0",
      list_createList(),
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    amf3_gpp_access_registration = amf3_gpp_access_registration_create(
      "0",
      "a",
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__HOMOGENEOUS_SUPPORT,
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      NULL,
      list_createList(),
      1,
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__NR,
      1,
      "0",
      NULL,
      1,
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf3_gpp_access_registration__REACHABLE,
      1,
      1,
      "0",
      list_createList(),
      1,
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return amf3_gpp_access_registration;
}


#ifdef amf3_gpp_access_registration_MAIN

void test_amf3_gpp_access_registration(int include_optional) {
    amf3_gpp_access_registration_t* amf3_gpp_access_registration_1 = instantiate_amf3_gpp_access_registration(include_optional);

	cJSON* jsonamf3_gpp_access_registration_1 = amf3_gpp_access_registration_convertToJSON(amf3_gpp_access_registration_1);
	printf("amf3_gpp_access_registration :\n%s\n", cJSON_Print(jsonamf3_gpp_access_registration_1));
	amf3_gpp_access_registration_t* amf3_gpp_access_registration_2 = amf3_gpp_access_registration_parseFromJSON(jsonamf3_gpp_access_registration_1);
	cJSON* jsonamf3_gpp_access_registration_2 = amf3_gpp_access_registration_convertToJSON(amf3_gpp_access_registration_2);
	printf("repeating amf3_gpp_access_registration:\n%s\n", cJSON_Print(jsonamf3_gpp_access_registration_2));
}

int main() {
  test_amf3_gpp_access_registration(1);
  test_amf3_gpp_access_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf3_gpp_access_registration_MAIN
#endif // amf3_gpp_access_registration_TEST
