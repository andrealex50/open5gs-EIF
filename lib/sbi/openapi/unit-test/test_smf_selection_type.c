#ifndef smf_selection_type_TEST
#define smf_selection_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_selection_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_selection_type.h"
smf_selection_type_t* instantiate_smf_selection_type(int include_optional);



smf_selection_type_t* instantiate_smf_selection_type(int include_optional) {
  smf_selection_type_t* smf_selection_type = NULL;
  if (include_optional) {
    smf_selection_type = smf_selection_type_create(
    );
  } else {
    smf_selection_type = smf_selection_type_create(
    );
  }

  return smf_selection_type;
}


#ifdef smf_selection_type_MAIN

void test_smf_selection_type(int include_optional) {
    smf_selection_type_t* smf_selection_type_1 = instantiate_smf_selection_type(include_optional);

	cJSON* jsonsmf_selection_type_1 = smf_selection_type_convertToJSON(smf_selection_type_1);
	printf("smf_selection_type :\n%s\n", cJSON_Print(jsonsmf_selection_type_1));
	smf_selection_type_t* smf_selection_type_2 = smf_selection_type_parseFromJSON(jsonsmf_selection_type_1);
	cJSON* jsonsmf_selection_type_2 = smf_selection_type_convertToJSON(smf_selection_type_2);
	printf("repeating smf_selection_type:\n%s\n", cJSON_Print(jsonsmf_selection_type_2));
}

int main() {
  test_smf_selection_type(1);
  test_smf_selection_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_selection_type_MAIN
#endif // smf_selection_type_TEST
