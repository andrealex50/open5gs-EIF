#ifndef amf_cond_TEST
#define amf_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_cond.h"
amf_cond_t* instantiate_amf_cond(int include_optional);



amf_cond_t* instantiate_amf_cond(int include_optional) {
  amf_cond_t* amf_cond = NULL;
  if (include_optional) {
    amf_cond = amf_cond_create(
      "a",
      "a"
    );
  } else {
    amf_cond = amf_cond_create(
      "a",
      "a"
    );
  }

  return amf_cond;
}


#ifdef amf_cond_MAIN

void test_amf_cond(int include_optional) {
    amf_cond_t* amf_cond_1 = instantiate_amf_cond(include_optional);

	cJSON* jsonamf_cond_1 = amf_cond_convertToJSON(amf_cond_1);
	printf("amf_cond :\n%s\n", cJSON_Print(jsonamf_cond_1));
	amf_cond_t* amf_cond_2 = amf_cond_parseFromJSON(jsonamf_cond_1);
	cJSON* jsonamf_cond_2 = amf_cond_convertToJSON(amf_cond_2);
	printf("repeating amf_cond:\n%s\n", cJSON_Print(jsonamf_cond_2));
}

int main() {
  test_amf_cond(1);
  test_amf_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_cond_MAIN
#endif // amf_cond_TEST
