#ifndef intended_n32_purpose_TEST
#define intended_n32_purpose_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define intended_n32_purpose_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/intended_n32_purpose.h"
intended_n32_purpose_t* instantiate_intended_n32_purpose(int include_optional);



intended_n32_purpose_t* instantiate_intended_n32_purpose(int include_optional) {
  intended_n32_purpose_t* intended_n32_purpose = NULL;
  if (include_optional) {
    intended_n32_purpose = intended_n32_purpose_create(
      n32_handshake_api_intended_n32_purpose__ROAMING,
      "0",
      "0"
    );
  } else {
    intended_n32_purpose = intended_n32_purpose_create(
      n32_handshake_api_intended_n32_purpose__ROAMING,
      "0",
      "0"
    );
  }

  return intended_n32_purpose;
}


#ifdef intended_n32_purpose_MAIN

void test_intended_n32_purpose(int include_optional) {
    intended_n32_purpose_t* intended_n32_purpose_1 = instantiate_intended_n32_purpose(include_optional);

	cJSON* jsonintended_n32_purpose_1 = intended_n32_purpose_convertToJSON(intended_n32_purpose_1);
	printf("intended_n32_purpose :\n%s\n", cJSON_Print(jsonintended_n32_purpose_1));
	intended_n32_purpose_t* intended_n32_purpose_2 = intended_n32_purpose_parseFromJSON(jsonintended_n32_purpose_1);
	cJSON* jsonintended_n32_purpose_2 = intended_n32_purpose_convertToJSON(intended_n32_purpose_2);
	printf("repeating intended_n32_purpose:\n%s\n", cJSON_Print(jsonintended_n32_purpose_2));
}

int main() {
  test_intended_n32_purpose(1);
  test_intended_n32_purpose(0);

  printf("Hello world \n");
  return 0;
}

#endif // intended_n32_purpose_MAIN
#endif // intended_n32_purpose_TEST
