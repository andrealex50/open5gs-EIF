#ifndef mb_smf_info_TEST
#define mb_smf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mb_smf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mb_smf_info.h"
mb_smf_info_t* instantiate_mb_smf_info(int include_optional);



mb_smf_info_t* instantiate_mb_smf_info(int include_optional) {
  mb_smf_info_t* mb_smf_info = NULL;
  if (include_optional) {
    mb_smf_info = mb_smf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mb_smf_info = mb_smf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mb_smf_info;
}


#ifdef mb_smf_info_MAIN

void test_mb_smf_info(int include_optional) {
    mb_smf_info_t* mb_smf_info_1 = instantiate_mb_smf_info(include_optional);

	cJSON* jsonmb_smf_info_1 = mb_smf_info_convertToJSON(mb_smf_info_1);
	printf("mb_smf_info :\n%s\n", cJSON_Print(jsonmb_smf_info_1));
	mb_smf_info_t* mb_smf_info_2 = mb_smf_info_parseFromJSON(jsonmb_smf_info_1);
	cJSON* jsonmb_smf_info_2 = mb_smf_info_convertToJSON(mb_smf_info_2);
	printf("repeating mb_smf_info:\n%s\n", cJSON_Print(jsonmb_smf_info_2));
}

int main() {
  test_mb_smf_info(1);
  test_mb_smf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mb_smf_info_MAIN
#endif // mb_smf_info_TEST
