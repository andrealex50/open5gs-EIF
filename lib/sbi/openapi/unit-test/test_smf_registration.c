#ifndef smf_registration_TEST
#define smf_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_registration.h"
smf_registration_t* instantiate_smf_registration(int include_optional);

#include "test_snssai.c"
#include "test_plmn_id.c"
#include "test_ip_address.c"
#include "test_context_info.c"


smf_registration_t* instantiate_smf_registration(int include_optional) {
  smf_registration_t* smf_registration = NULL;
  if (include_optional) {
    smf_registration = smf_registration_create(
      "0",
      "0",
      "a",
      0,
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      1,
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "a",
       // false, not to have infinite recursion
      instantiate_ip_address(0),
      1,
      "0",
      nudr_datarepository_api_openapi_file_smf_registration__SMF_CONTEXT_TRANSFERRED,
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      "0",
      "0",
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    smf_registration = smf_registration_create(
      "0",
      "0",
      "a",
      0,
      NULL,
      "0",
      1,
      "0",
      NULL,
      "a",
      NULL,
      1,
      "0",
      nudr_datarepository_api_openapi_file_smf_registration__SMF_CONTEXT_TRANSFERRED,
      "2013-10-20T19:20:30+01:00",
      NULL,
      "0",
      "0",
      list_createList(),
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return smf_registration;
}


#ifdef smf_registration_MAIN

void test_smf_registration(int include_optional) {
    smf_registration_t* smf_registration_1 = instantiate_smf_registration(include_optional);

	cJSON* jsonsmf_registration_1 = smf_registration_convertToJSON(smf_registration_1);
	printf("smf_registration :\n%s\n", cJSON_Print(jsonsmf_registration_1));
	smf_registration_t* smf_registration_2 = smf_registration_parseFromJSON(jsonsmf_registration_1);
	cJSON* jsonsmf_registration_2 = smf_registration_convertToJSON(smf_registration_2);
	printf("repeating smf_registration:\n%s\n", cJSON_Print(jsonsmf_registration_2));
}

int main() {
  test_smf_registration(1);
  test_smf_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_registration_MAIN
#endif // smf_registration_TEST
