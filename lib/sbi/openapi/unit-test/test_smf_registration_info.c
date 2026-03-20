#ifndef smf_registration_info_TEST
#define smf_registration_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_registration_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_registration_info.h"
smf_registration_info_t* instantiate_smf_registration_info(int include_optional);



smf_registration_info_t* instantiate_smf_registration_info(int include_optional) {
  smf_registration_info_t* smf_registration_info = NULL;
  if (include_optional) {
    smf_registration_info = smf_registration_info_create(
      list_createList()
    );
  } else {
    smf_registration_info = smf_registration_info_create(
      list_createList()
    );
  }

  return smf_registration_info;
}


#ifdef smf_registration_info_MAIN

void test_smf_registration_info(int include_optional) {
    smf_registration_info_t* smf_registration_info_1 = instantiate_smf_registration_info(include_optional);

	cJSON* jsonsmf_registration_info_1 = smf_registration_info_convertToJSON(smf_registration_info_1);
	printf("smf_registration_info :\n%s\n", cJSON_Print(jsonsmf_registration_info_1));
	smf_registration_info_t* smf_registration_info_2 = smf_registration_info_parseFromJSON(jsonsmf_registration_info_1);
	cJSON* jsonsmf_registration_info_2 = smf_registration_info_convertToJSON(smf_registration_info_2);
	printf("repeating smf_registration_info:\n%s\n", cJSON_Print(jsonsmf_registration_info_2));
}

int main() {
  test_smf_registration_info(1);
  test_smf_registration_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_registration_info_MAIN
#endif // smf_registration_info_TEST
