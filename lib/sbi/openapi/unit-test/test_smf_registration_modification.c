#ifndef smf_registration_modification_TEST
#define smf_registration_modification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_registration_modification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_registration_modification.h"
smf_registration_modification_t* instantiate_smf_registration_modification(int include_optional);

#include "test_fqdn_rm.c"


smf_registration_modification_t* instantiate_smf_registration_modification(int include_optional) {
  smf_registration_modification_t* smf_registration_modification = NULL;
  if (include_optional) {
    smf_registration_modification = smf_registration_modification_create(
      "0",
      "0",
      null
    );
  } else {
    smf_registration_modification = smf_registration_modification_create(
      "0",
      "0",
      null
    );
  }

  return smf_registration_modification;
}


#ifdef smf_registration_modification_MAIN

void test_smf_registration_modification(int include_optional) {
    smf_registration_modification_t* smf_registration_modification_1 = instantiate_smf_registration_modification(include_optional);

	cJSON* jsonsmf_registration_modification_1 = smf_registration_modification_convertToJSON(smf_registration_modification_1);
	printf("smf_registration_modification :\n%s\n", cJSON_Print(jsonsmf_registration_modification_1));
	smf_registration_modification_t* smf_registration_modification_2 = smf_registration_modification_parseFromJSON(jsonsmf_registration_modification_1);
	cJSON* jsonsmf_registration_modification_2 = smf_registration_modification_convertToJSON(smf_registration_modification_2);
	printf("repeating smf_registration_modification:\n%s\n", cJSON_Print(jsonsmf_registration_modification_2));
}

int main() {
  test_smf_registration_modification(1);
  test_smf_registration_modification(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_registration_modification_MAIN
#endif // smf_registration_modification_TEST
