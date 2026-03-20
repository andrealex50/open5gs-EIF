#ifndef registration_data_sets_TEST
#define registration_data_sets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define registration_data_sets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/registration_data_sets.h"
registration_data_sets_t* instantiate_registration_data_sets(int include_optional);

#include "test_amf3_gpp_access_registration.c"
#include "test_amf_non3_gpp_access_registration.c"
#include "test_smf_registration_info.c"
#include "test_smsf_registration.c"
#include "test_smsf_registration.c"
#include "test_ip_sm_gw_registration.c"
#include "test_nwdaf_registration_info.c"


registration_data_sets_t* instantiate_registration_data_sets(int include_optional) {
  registration_data_sets_t* registration_data_sets = NULL;
  if (include_optional) {
    registration_data_sets = registration_data_sets_create(
       // false, not to have infinite recursion
      instantiate_amf3_gpp_access_registration(0),
       // false, not to have infinite recursion
      instantiate_amf_non3_gpp_access_registration(0),
       // false, not to have infinite recursion
      instantiate_smf_registration_info(0),
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
       // false, not to have infinite recursion
      instantiate_ip_sm_gw_registration(0),
       // false, not to have infinite recursion
      instantiate_nwdaf_registration_info(0)
    );
  } else {
    registration_data_sets = registration_data_sets_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return registration_data_sets;
}


#ifdef registration_data_sets_MAIN

void test_registration_data_sets(int include_optional) {
    registration_data_sets_t* registration_data_sets_1 = instantiate_registration_data_sets(include_optional);

	cJSON* jsonregistration_data_sets_1 = registration_data_sets_convertToJSON(registration_data_sets_1);
	printf("registration_data_sets :\n%s\n", cJSON_Print(jsonregistration_data_sets_1));
	registration_data_sets_t* registration_data_sets_2 = registration_data_sets_parseFromJSON(jsonregistration_data_sets_1);
	cJSON* jsonregistration_data_sets_2 = registration_data_sets_convertToJSON(registration_data_sets_2);
	printf("repeating registration_data_sets:\n%s\n", cJSON_Print(jsonregistration_data_sets_2));
}

int main() {
  test_registration_data_sets(1);
  test_registration_data_sets(0);

  printf("Hello world \n");
  return 0;
}

#endif // registration_data_sets_MAIN
#endif // registration_data_sets_TEST
