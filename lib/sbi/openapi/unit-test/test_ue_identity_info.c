#ifndef ue_identity_info_TEST
#define ue_identity_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_identity_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_identity_info.h"
ue_identity_info_t* instantiate_ue_identity_info(int include_optional);



ue_identity_info_t* instantiate_ue_identity_info(int include_optional) {
  ue_identity_info_t* ue_identity_info = NULL;
  if (include_optional) {
    ue_identity_info = ue_identity_info_create(
      "a",
      "a",
      "a"
    );
  } else {
    ue_identity_info = ue_identity_info_create(
      "a",
      "a",
      "a"
    );
  }

  return ue_identity_info;
}


#ifdef ue_identity_info_MAIN

void test_ue_identity_info(int include_optional) {
    ue_identity_info_t* ue_identity_info_1 = instantiate_ue_identity_info(include_optional);

	cJSON* jsonue_identity_info_1 = ue_identity_info_convertToJSON(ue_identity_info_1);
	printf("ue_identity_info :\n%s\n", cJSON_Print(jsonue_identity_info_1));
	ue_identity_info_t* ue_identity_info_2 = ue_identity_info_parseFromJSON(jsonue_identity_info_1);
	cJSON* jsonue_identity_info_2 = ue_identity_info_convertToJSON(ue_identity_info_2);
	printf("repeating ue_identity_info:\n%s\n", cJSON_Print(jsonue_identity_info_2));
}

int main() {
  test_ue_identity_info(1);
  test_ue_identity_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_identity_info_MAIN
#endif // ue_identity_info_TEST
