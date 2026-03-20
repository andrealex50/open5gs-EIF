#ifndef smf_info_TEST
#define smf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smf_info.h"
smf_info_t* instantiate_smf_info(int include_optional);



smf_info_t* instantiate_smf_info(int include_optional) {
  smf_info_t* smf_info = NULL;
  if (include_optional) {
    smf_info = smf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      0,
      1,
      list_createList(),
      1,
      1,
      1
    );
  } else {
    smf_info = smf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      list_createList(),
      list_createList(),
      0,
      1,
      list_createList(),
      1,
      1,
      1
    );
  }

  return smf_info;
}


#ifdef smf_info_MAIN

void test_smf_info(int include_optional) {
    smf_info_t* smf_info_1 = instantiate_smf_info(include_optional);

	cJSON* jsonsmf_info_1 = smf_info_convertToJSON(smf_info_1);
	printf("smf_info :\n%s\n", cJSON_Print(jsonsmf_info_1));
	smf_info_t* smf_info_2 = smf_info_parseFromJSON(jsonsmf_info_1);
	cJSON* jsonsmf_info_2 = smf_info_convertToJSON(smf_info_2);
	printf("repeating smf_info:\n%s\n", cJSON_Print(jsonsmf_info_2));
}

int main() {
  test_smf_info(1);
  test_smf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // smf_info_MAIN
#endif // smf_info_TEST
