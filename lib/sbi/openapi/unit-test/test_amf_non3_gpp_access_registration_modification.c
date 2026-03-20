#ifndef amf_non3_gpp_access_registration_modification_TEST
#define amf_non3_gpp_access_registration_modification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_non3_gpp_access_registration_modification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_non3_gpp_access_registration_modification.h"
amf_non3_gpp_access_registration_modification_t* instantiate_amf_non3_gpp_access_registration_modification(int include_optional);

#include "test_guami.c"


amf_non3_gpp_access_registration_modification_t* instantiate_amf_non3_gpp_access_registration_modification(int include_optional) {
  amf_non3_gpp_access_registration_modification_t* amf_non3_gpp_access_registration_modification = NULL;
  if (include_optional) {
    amf_non3_gpp_access_registration_modification = amf_non3_gpp_access_registration_modification_create(
       // false, not to have infinite recursion
      instantiate_guami(0),
      1,
      "a",
      nudm_uecm_amf_non3_gpp_access_registration_modification__HOMOGENEOUS_SUPPORT,
      list_createList()
    );
  } else {
    amf_non3_gpp_access_registration_modification = amf_non3_gpp_access_registration_modification_create(
      NULL,
      1,
      "a",
      nudm_uecm_amf_non3_gpp_access_registration_modification__HOMOGENEOUS_SUPPORT,
      list_createList()
    );
  }

  return amf_non3_gpp_access_registration_modification;
}


#ifdef amf_non3_gpp_access_registration_modification_MAIN

void test_amf_non3_gpp_access_registration_modification(int include_optional) {
    amf_non3_gpp_access_registration_modification_t* amf_non3_gpp_access_registration_modification_1 = instantiate_amf_non3_gpp_access_registration_modification(include_optional);

	cJSON* jsonamf_non3_gpp_access_registration_modification_1 = amf_non3_gpp_access_registration_modification_convertToJSON(amf_non3_gpp_access_registration_modification_1);
	printf("amf_non3_gpp_access_registration_modification :\n%s\n", cJSON_Print(jsonamf_non3_gpp_access_registration_modification_1));
	amf_non3_gpp_access_registration_modification_t* amf_non3_gpp_access_registration_modification_2 = amf_non3_gpp_access_registration_modification_parseFromJSON(jsonamf_non3_gpp_access_registration_modification_1);
	cJSON* jsonamf_non3_gpp_access_registration_modification_2 = amf_non3_gpp_access_registration_modification_convertToJSON(amf_non3_gpp_access_registration_modification_2);
	printf("repeating amf_non3_gpp_access_registration_modification:\n%s\n", cJSON_Print(jsonamf_non3_gpp_access_registration_modification_2));
}

int main() {
  test_amf_non3_gpp_access_registration_modification(1);
  test_amf_non3_gpp_access_registration_modification(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_non3_gpp_access_registration_modification_MAIN
#endif // amf_non3_gpp_access_registration_modification_TEST
