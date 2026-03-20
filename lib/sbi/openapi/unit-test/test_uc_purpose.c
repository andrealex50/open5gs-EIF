#ifndef uc_purpose_TEST
#define uc_purpose_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define uc_purpose_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/uc_purpose.h"
uc_purpose_t* instantiate_uc_purpose(int include_optional);



uc_purpose_t* instantiate_uc_purpose(int include_optional) {
  uc_purpose_t* uc_purpose = NULL;
  if (include_optional) {
    uc_purpose = uc_purpose_create(
    );
  } else {
    uc_purpose = uc_purpose_create(
    );
  }

  return uc_purpose;
}


#ifdef uc_purpose_MAIN

void test_uc_purpose(int include_optional) {
    uc_purpose_t* uc_purpose_1 = instantiate_uc_purpose(include_optional);

	cJSON* jsonuc_purpose_1 = uc_purpose_convertToJSON(uc_purpose_1);
	printf("uc_purpose :\n%s\n", cJSON_Print(jsonuc_purpose_1));
	uc_purpose_t* uc_purpose_2 = uc_purpose_parseFromJSON(jsonuc_purpose_1);
	cJSON* jsonuc_purpose_2 = uc_purpose_convertToJSON(uc_purpose_2);
	printf("repeating uc_purpose:\n%s\n", cJSON_Print(jsonuc_purpose_2));
}

int main() {
  test_uc_purpose(1);
  test_uc_purpose(0);

  printf("Hello world \n");
  return 0;
}

#endif // uc_purpose_MAIN
#endif // uc_purpose_TEST
