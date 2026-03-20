#ifndef mtc_provider_TEST
#define mtc_provider_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mtc_provider_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mtc_provider.h"
mtc_provider_t* instantiate_mtc_provider(int include_optional);



mtc_provider_t* instantiate_mtc_provider(int include_optional) {
  mtc_provider_t* mtc_provider = NULL;
  if (include_optional) {
    mtc_provider = mtc_provider_create(
      "0",
      "0"
    );
  } else {
    mtc_provider = mtc_provider_create(
      "0",
      "0"
    );
  }

  return mtc_provider;
}


#ifdef mtc_provider_MAIN

void test_mtc_provider(int include_optional) {
    mtc_provider_t* mtc_provider_1 = instantiate_mtc_provider(include_optional);

	cJSON* jsonmtc_provider_1 = mtc_provider_convertToJSON(mtc_provider_1);
	printf("mtc_provider :\n%s\n", cJSON_Print(jsonmtc_provider_1));
	mtc_provider_t* mtc_provider_2 = mtc_provider_parseFromJSON(jsonmtc_provider_1);
	cJSON* jsonmtc_provider_2 = mtc_provider_convertToJSON(mtc_provider_2);
	printf("repeating mtc_provider:\n%s\n", cJSON_Print(jsonmtc_provider_2));
}

int main() {
  test_mtc_provider(1);
  test_mtc_provider(0);

  printf("Hello world \n");
  return 0;
}

#endif // mtc_provider_MAIN
#endif // mtc_provider_TEST
