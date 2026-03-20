#ifndef amf_non3_gpp_access_registration_TEST
#define amf_non3_gpp_access_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_non3_gpp_access_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_non3_gpp_access_registration.h"
amf_non3_gpp_access_registration_t* instantiate_amf_non3_gpp_access_registration(int include_optional);

#include "test_guami.c"
#include "test_vgmlc_address.c"
#include "test_context_info.c"


amf_non3_gpp_access_registration_t* instantiate_amf_non3_gpp_access_registration(int include_optional) {
  amf_non3_gpp_access_registration_t* amf_non3_gpp_access_registration = NULL;
  if (include_optional) {
    amf_non3_gpp_access_registration = amf_non3_gpp_access_registration_create(
      "0",
      "a",
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf_non3_gpp_access_registration__HOMOGENEOUS_SUPPORT,
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_guami(0),
      list_createList(),
      nudr_datarepository_api_openapi_file_amf_non3_gpp_access_registration__NR,
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_vgmlc_address(0),
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      "a",
      1,
      1,
      "0",
      list_createList(),
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    amf_non3_gpp_access_registration = amf_non3_gpp_access_registration_create(
      "0",
      "a",
      1,
      "a",
      nudr_datarepository_api_openapi_file_amf_non3_gpp_access_registration__HOMOGENEOUS_SUPPORT,
      "0",
      "0",
      "0",
      "0",
      NULL,
      list_createList(),
      nudr_datarepository_api_openapi_file_amf_non3_gpp_access_registration__NR,
      1,
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL,
      NULL,
      1,
      "a",
      1,
      1,
      "0",
      list_createList(),
      1,
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return amf_non3_gpp_access_registration;
}


#ifdef amf_non3_gpp_access_registration_MAIN

void test_amf_non3_gpp_access_registration(int include_optional) {
    amf_non3_gpp_access_registration_t* amf_non3_gpp_access_registration_1 = instantiate_amf_non3_gpp_access_registration(include_optional);

	cJSON* jsonamf_non3_gpp_access_registration_1 = amf_non3_gpp_access_registration_convertToJSON(amf_non3_gpp_access_registration_1);
	printf("amf_non3_gpp_access_registration :\n%s\n", cJSON_Print(jsonamf_non3_gpp_access_registration_1));
	amf_non3_gpp_access_registration_t* amf_non3_gpp_access_registration_2 = amf_non3_gpp_access_registration_parseFromJSON(jsonamf_non3_gpp_access_registration_1);
	cJSON* jsonamf_non3_gpp_access_registration_2 = amf_non3_gpp_access_registration_convertToJSON(amf_non3_gpp_access_registration_2);
	printf("repeating amf_non3_gpp_access_registration:\n%s\n", cJSON_Print(jsonamf_non3_gpp_access_registration_2));
}

int main() {
  test_amf_non3_gpp_access_registration(1);
  test_amf_non3_gpp_access_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_non3_gpp_access_registration_MAIN
#endif // amf_non3_gpp_access_registration_TEST
