#ifndef lcs_privacy_TEST
#define lcs_privacy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_privacy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_privacy.h"
lcs_privacy_t* instantiate_lcs_privacy(int include_optional);

#include "test_lpi.c"


lcs_privacy_t* instantiate_lcs_privacy(int include_optional) {
  lcs_privacy_t* lcs_privacy = NULL;
  if (include_optional) {
    lcs_privacy = lcs_privacy_create(
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_lpi(0),
      "0"
    );
  } else {
    lcs_privacy = lcs_privacy_create(
      "0",
      56,
      NULL,
      "0"
    );
  }

  return lcs_privacy;
}


#ifdef lcs_privacy_MAIN

void test_lcs_privacy(int include_optional) {
    lcs_privacy_t* lcs_privacy_1 = instantiate_lcs_privacy(include_optional);

	cJSON* jsonlcs_privacy_1 = lcs_privacy_convertToJSON(lcs_privacy_1);
	printf("lcs_privacy :\n%s\n", cJSON_Print(jsonlcs_privacy_1));
	lcs_privacy_t* lcs_privacy_2 = lcs_privacy_parseFromJSON(jsonlcs_privacy_1);
	cJSON* jsonlcs_privacy_2 = lcs_privacy_convertToJSON(lcs_privacy_2);
	printf("repeating lcs_privacy:\n%s\n", cJSON_Print(jsonlcs_privacy_2));
}

int main() {
  test_lcs_privacy(1);
  test_lcs_privacy(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_privacy_MAIN
#endif // lcs_privacy_TEST
