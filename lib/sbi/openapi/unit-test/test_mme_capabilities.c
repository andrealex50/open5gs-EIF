#ifndef mme_capabilities_TEST
#define mme_capabilities_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mme_capabilities_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mme_capabilities.h"
mme_capabilities_t* instantiate_mme_capabilities(int include_optional);



mme_capabilities_t* instantiate_mme_capabilities(int include_optional) {
  mme_capabilities_t* mme_capabilities = NULL;
  if (include_optional) {
    mme_capabilities = mme_capabilities_create(
      1,
      1,
      1
    );
  } else {
    mme_capabilities = mme_capabilities_create(
      1,
      1,
      1
    );
  }

  return mme_capabilities;
}


#ifdef mme_capabilities_MAIN

void test_mme_capabilities(int include_optional) {
    mme_capabilities_t* mme_capabilities_1 = instantiate_mme_capabilities(include_optional);

	cJSON* jsonmme_capabilities_1 = mme_capabilities_convertToJSON(mme_capabilities_1);
	printf("mme_capabilities :\n%s\n", cJSON_Print(jsonmme_capabilities_1));
	mme_capabilities_t* mme_capabilities_2 = mme_capabilities_parseFromJSON(jsonmme_capabilities_1);
	cJSON* jsonmme_capabilities_2 = mme_capabilities_convertToJSON(mme_capabilities_2);
	printf("repeating mme_capabilities:\n%s\n", cJSON_Print(jsonmme_capabilities_2));
}

int main() {
  test_mme_capabilities(1);
  test_mme_capabilities(0);

  printf("Hello world \n");
  return 0;
}

#endif // mme_capabilities_MAIN
#endif // mme_capabilities_TEST
