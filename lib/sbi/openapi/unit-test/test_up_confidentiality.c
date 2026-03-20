#ifndef up_confidentiality_TEST
#define up_confidentiality_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_confidentiality_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_confidentiality.h"
up_confidentiality_t* instantiate_up_confidentiality(int include_optional);



up_confidentiality_t* instantiate_up_confidentiality(int include_optional) {
  up_confidentiality_t* up_confidentiality = NULL;
  if (include_optional) {
    up_confidentiality = up_confidentiality_create(
    );
  } else {
    up_confidentiality = up_confidentiality_create(
    );
  }

  return up_confidentiality;
}


#ifdef up_confidentiality_MAIN

void test_up_confidentiality(int include_optional) {
    up_confidentiality_t* up_confidentiality_1 = instantiate_up_confidentiality(include_optional);

	cJSON* jsonup_confidentiality_1 = up_confidentiality_convertToJSON(up_confidentiality_1);
	printf("up_confidentiality :\n%s\n", cJSON_Print(jsonup_confidentiality_1));
	up_confidentiality_t* up_confidentiality_2 = up_confidentiality_parseFromJSON(jsonup_confidentiality_1);
	cJSON* jsonup_confidentiality_2 = up_confidentiality_convertToJSON(up_confidentiality_2);
	printf("repeating up_confidentiality:\n%s\n", cJSON_Print(jsonup_confidentiality_2));
}

int main() {
  test_up_confidentiality(1);
  test_up_confidentiality(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_confidentiality_MAIN
#endif // up_confidentiality_TEST
