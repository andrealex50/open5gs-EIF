#ifndef ma_release_indication_TEST
#define ma_release_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ma_release_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ma_release_indication.h"
ma_release_indication_t* instantiate_ma_release_indication(int include_optional);



ma_release_indication_t* instantiate_ma_release_indication(int include_optional) {
  ma_release_indication_t* ma_release_indication = NULL;
  if (include_optional) {
    ma_release_indication = ma_release_indication_create(
    );
  } else {
    ma_release_indication = ma_release_indication_create(
    );
  }

  return ma_release_indication;
}


#ifdef ma_release_indication_MAIN

void test_ma_release_indication(int include_optional) {
    ma_release_indication_t* ma_release_indication_1 = instantiate_ma_release_indication(include_optional);

	cJSON* jsonma_release_indication_1 = ma_release_indication_convertToJSON(ma_release_indication_1);
	printf("ma_release_indication :\n%s\n", cJSON_Print(jsonma_release_indication_1));
	ma_release_indication_t* ma_release_indication_2 = ma_release_indication_parseFromJSON(jsonma_release_indication_1);
	cJSON* jsonma_release_indication_2 = ma_release_indication_convertToJSON(ma_release_indication_2);
	printf("repeating ma_release_indication:\n%s\n", cJSON_Print(jsonma_release_indication_2));
}

int main() {
  test_ma_release_indication(1);
  test_ma_release_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // ma_release_indication_MAIN
#endif // ma_release_indication_TEST
