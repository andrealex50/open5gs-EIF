#ifndef amf3_gpp_access_registration_modification_TEST
#define amf3_gpp_access_registration_modification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf3_gpp_access_registration_modification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf3_gpp_access_registration_modification.h"
amf3_gpp_access_registration_modification_t* instantiate_amf3_gpp_access_registration_modification(int include_optional);

#include "test_guami.c"
#include "test_eps_interworking_info.c"


amf3_gpp_access_registration_modification_t* instantiate_amf3_gpp_access_registration_modification(int include_optional) {
  amf3_gpp_access_registration_modification_t* amf3_gpp_access_registration_modification = NULL;
  if (include_optional) {
    amf3_gpp_access_registration_modification = amf3_gpp_access_registration_modification_create(
       // false, not to have infinite recursion
      instantiate_guami(0),
      1,
      "a",
      nudm_uecm_amf3_gpp_access_registration_modification__HOMOGENEOUS_SUPPORT,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_eps_interworking_info(0),
      1,
      1
    );
  } else {
    amf3_gpp_access_registration_modification = amf3_gpp_access_registration_modification_create(
      NULL,
      1,
      "a",
      nudm_uecm_amf3_gpp_access_registration_modification__HOMOGENEOUS_SUPPORT,
      list_createList(),
      NULL,
      1,
      1
    );
  }

  return amf3_gpp_access_registration_modification;
}


#ifdef amf3_gpp_access_registration_modification_MAIN

void test_amf3_gpp_access_registration_modification(int include_optional) {
    amf3_gpp_access_registration_modification_t* amf3_gpp_access_registration_modification_1 = instantiate_amf3_gpp_access_registration_modification(include_optional);

	cJSON* jsonamf3_gpp_access_registration_modification_1 = amf3_gpp_access_registration_modification_convertToJSON(amf3_gpp_access_registration_modification_1);
	printf("amf3_gpp_access_registration_modification :\n%s\n", cJSON_Print(jsonamf3_gpp_access_registration_modification_1));
	amf3_gpp_access_registration_modification_t* amf3_gpp_access_registration_modification_2 = amf3_gpp_access_registration_modification_parseFromJSON(jsonamf3_gpp_access_registration_modification_1);
	cJSON* jsonamf3_gpp_access_registration_modification_2 = amf3_gpp_access_registration_modification_convertToJSON(amf3_gpp_access_registration_modification_2);
	printf("repeating amf3_gpp_access_registration_modification:\n%s\n", cJSON_Print(jsonamf3_gpp_access_registration_modification_2));
}

int main() {
  test_amf3_gpp_access_registration_modification(1);
  test_amf3_gpp_access_registration_modification(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf3_gpp_access_registration_modification_MAIN
#endif // amf3_gpp_access_registration_modification_TEST
